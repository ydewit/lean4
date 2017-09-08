/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich

Attribute that can automatically derive typeclass instances.
-/
prelude
import init.meta.attribute
import init.meta.interactive_base
import init.meta.mk_dec_eq_instance
import init.meta.mk_has_sizeof_instance
import init.meta.mk_inhabited_instance

open lean
open interactive.types
open tactic

/-- A handler that may or may not be able to implement the typeclass `cls` for `decl`.
    It should return `tt` if it was able to derive `cls` and `ff` if it does not know
    how to derive `cls`, in which case lower-priority handlers will be tried next. -/
meta def derive_handler := Π (cls : pexpr) (decl : name), tactic bool

@[user_attribute]
meta def derive_handler_attr : user_attribute :=
{ name := `derive_handler, descr := "register a definition of type `derive_handler` for use in the [derive] attribute" }

private meta def try_handlers (p : pexpr) (n : name) : list derive_handler → tactic unit
| []      := fail format!"failed to find a derive handler for '{p}'"
| (h::hs) :=
do success ← h p n,
   when (¬success) $
     try_handlers hs

@[user_attribute] meta def derive_attr : user_attribute unit (list pexpr) :=
{ name := `derive, descr := "automatically derive typeclass instances",
  parser := pexpr_list_or_texpr,
  after_set := some (λ n _ _,
  do ps ← derive_attr.get_param n,
     handlers ← attribute.get_instances `derive_handler,
     handlers ← handlers.mmap (λ n, eval_expr derive_handler (expr.const n [])),
     ps.mmap' (λ p, try_handlers p n handlers)) }

meta def instance_derive_handler (cls : name) (tac : tactic unit) : derive_handler :=
λ p n,
if p.is_constant_of cls then
do decl ← get_decl n,
   cls_decl ← get_decl cls,
   env ← get_env,
   guard (env.is_inductive n) <|> fail format!"failed to derive '{cls}', '{n}' is not an inductive type",
   let tgt : expr := expr.const n (decl.univ_params.map level.param),
   ⟨params, _⟩ ← mk_local_pis decl.type,
   let params := params.take (env.inductive_num_params n),
   let tgt := tgt.mk_app params,
   tgt ← mk_app cls [tgt],
   tgt ← params.mfoldr (λ param tgt,
   do param_cls ← mk_app cls [param],
      -- TODO(sullrich): omit some typeclass parameters based on usage of `param`?
      let tgt := expr.pi `a binder_info.inst_implicit param_cls tgt,
      pure $ tgt.bind_pi param
   ) tgt,
   (_, val) ← tactic.solve_aux tgt (intros >> tac),
   val ← instantiate_mvars val,
   let trusted := decl.is_trusted ∧ cls_decl.is_trusted,
   add_decl (declaration.defn (n ++ cls) decl.univ_params tgt val reducibility_hints.abbrev trusted),
   set_basic_attribute `instance (n ++ cls) tt,
   pure true
else pure false

@[derive_handler] meta def decidable_eq_derive_handler :=
instance_derive_handler ``decidable_eq mk_dec_eq_instance

@[derive_handler] meta def has_sizeof_derive_handler :=
instance_derive_handler ``has_sizeof mk_has_sizeof_instance

@[derive_handler] meta def inhabited_derive_handler :=
instance_derive_handler ``inhabited mk_inhabited_instance
