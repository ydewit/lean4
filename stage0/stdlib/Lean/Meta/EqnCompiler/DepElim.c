// Lean compiler output
// Module: Lean.Meta.EqnCompiler.DepElim
// Imports: Init Lean.Util.CollectLevelParams Lean.Meta.Check Lean.Meta.Tactic.Cases Lean.Meta.GeneralizeTelescope Lean.Meta.EqnCompiler.MVarRenaming Lean.Meta.EqnCompiler.CaseValues Lean.Meta.EqnCompiler.CaseArraySizes
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1;
extern lean_object* l_Lean_mkHole___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux(lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2;
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11;
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1;
lean_object* l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar___boxed(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_applyFVarSubst(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2;
lean_object* l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2;
lean_object* l___private_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_counterExampleToMessageData(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3;
extern lean_object* l_Lean_MessageData_ofList___closed__3;
lean_object* l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1;
extern lean_object* l_Lean_Meta_withIncRecDepth___rarg___closed__3;
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1;
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6;
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2;
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_copy(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4;
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8;
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkThunkType(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___main(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5;
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6;
lean_object* l_Lean_Meta_withExistingLocalDecls___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___boxed(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main(uint8_t, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_examplesToMessageData(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main___closed__1;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3;
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_getEnv___boxed(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___boxed(lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_mkElim___spec__1(lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
lean_object* l_Lean_Meta_DepElim_withGoalOf___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_MVarRenaming_apply(lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
extern lean_object* l_Lean_unitToExpr___lambda__1___closed__3;
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1(lean_object*, lean_object*);
lean_object* l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2___boxed(lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone___boxed(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(lean_object*, lean_object*);
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_expand___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___closed__3;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1;
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(uint8_t, lean_object*);
uint8_t l_List_elem___main___at_Lean_Occurrences_contains___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3;
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar___boxed(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1;
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_7__localDeclsToMVars(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_MVarRenaming_isEmpty(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_Inhabited;
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_3__copyMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_State_getUnusedLevelParam(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3;
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1;
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElimTester(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwOther___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__1(lean_object*);
lean_object* l_Std_HashSetImp_moveEntries___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__2(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getArrayArgType(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___boxed(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_Inhabited___boxed(lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___main___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition(lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5;
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11;
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___main(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7;
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3;
extern lean_object* l_Lean_Meta_caseValue___closed__2;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(lean_object*);
extern lean_object* l_Lean_arrayHasFormat___rarg___closed__1;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___closed__1;
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4;
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3;
lean_object* l_Lean_Meta_DepElim_Problem_Inhabited___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst(lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(lean_object*);
extern lean_object* l_Lean_MessageData_coeOfArrayExpr___closed__2;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tracer___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___boxed(lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1;
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___main___boxed(lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5;
lean_object* l_Lean_Meta_addContext(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_assignGoalOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5;
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_AssocList_isEmpty___rarg(lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toTraceMessageData___closed__4;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_varsToUnderscore(lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12;
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1;
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_List_map___main___at_Lean_Meta_DiscrTree_Trie_format___main___spec__2___rarg___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___main___rarg(lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_DepElim_Problem_Inhabited;
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern(lean_object*);
lean_object* l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_MessageData_joinSep___main(lean_object*, lean_object*);
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashSet___at_Lean_Meta_DepElim_mkElim___spec__2(lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Meta_MVarRenaming_find_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8;
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3;
uint8_t l_Std_AssocList_any___main___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition(lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_copyCore(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashSet_Inhabited___closed__1;
lean_object* l_List_join___main___rarg(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___boxed(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_counterExamplesToMessageData(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4;
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6;
lean_object* l_Lean_Meta_withLocalDecl___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_MessageData_coeOfListExpr___spec__1(lean_object*);
lean_object* l_Lean_Meta_MVarRenaming_find_x21(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_withGoalOf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_counterExamplesToMessageData___spec__1(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1(uint8_t, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars(lean_object*, lean_object*, lean_object*);
lean_object* l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___closed__4;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10;
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1;
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_admit(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3;
extern lean_object* l_Lean_Format_paren___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElimTester___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__1(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__1(lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_varsToUnderscore___main(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___boxed(lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_examplesToMessageData___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___closed__1;
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3;
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1;
lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2;
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Position_lt___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_Inhabited(uint8_t);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3;
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_arrayExpr_toMessageData___main___closed__2;
lean_object* l_Lean_Meta_DepElim_assignGoalOf(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1;
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1;
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___boxed(lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition(lean_object*);
lean_object* l_Std_HashSetImp_insert___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7;
lean_object* l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_toMessageData___main(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
extern lean_object* l_Lean_Format_paren___closed__3;
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_isClassQuick___main___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_withGoalOf(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected(lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9;
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_Inhabited;
extern lean_object* l_Lean_Meta_CaseValueSubgoals_inhabited;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___boxed(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5;
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Alt_Inhabited___closed__1;
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2;
lean_object* l_Lean_Meta_DepElim_mkElimTester___closed__2;
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8;
lean_object* l_Lean_Meta_DepElim_mkElimTester___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_beqOfEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_12__regTraceClasses___closed__2;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1;
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes(lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2;
lean_object* l_Lean_Meta_DepElim_mkElimTester___closed__1;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1;
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__2(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_Inhabited___closed__1;
lean_object* l_Lean_Meta_caseArraySizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_main___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_37__regTraceClasses(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___main(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_generalizeTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DepElim_Example_toMessageData(lean_object*);
uint8_t l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9;
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
lean_object* l_Lean_Meta_DepElim_Pattern_Inhabited(uint8_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_Inhabited___closed__1;
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_Inhabited___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Meta_DepElim_Pattern_Inhabited(x_2);
return x_3;
}
}
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Meta_Exception_toTraceMessageData___closed__4;
x_7 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_1, x_4);
x_9 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_2 = x_9;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(".(");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Format_paren___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Format_paren___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("val!(");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("@");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3;
x_6 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4;
x_8 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
case 1:
{
if (x_1 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Lean_mkFVar(x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_mkMVar(x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
case 2:
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_2, 3);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5;
x_21 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_MessageData_Inhabited___closed__1;
x_23 = l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1(x_1, x_22, x_15);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4;
x_26 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
case 3:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8;
x_30 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
case 4:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
lean_dec(x_2);
x_34 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(x_1, x_33);
x_35 = l_Lean_MessageData_arrayExpr_toMessageData___main___closed__2;
x_36 = l_Lean_MessageData_joinSep___main(x_34, x_35);
lean_dec(x_34);
x_37 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_38 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_MessageData_arrayExpr_toMessageData___main___closed__1;
x_40 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
default: 
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_2, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_2, 1);
lean_inc(x_42);
lean_dec(x_2);
x_43 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_1, x_42);
if (x_1 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = l_Lean_mkFVar(x_41);
x_45 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11;
x_47 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_43);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = l_Lean_mkMVar(x_41);
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11;
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_43);
return x_53;
}
}
}
}
}
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_List_foldl___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__1(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toMessageData___main___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toMessageData___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Meta_DepElim_Pattern_toMessageData(x_3, x_2);
return x_4;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_10 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(x_1, x_9, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_3);
x_29 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_1, x_27, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(x_1, x_28, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_28);
lean_dec(x_3);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_44 = x_29;
} else {
 lean_dec_ref(x_29);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_10 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(x_1, x_9, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_3);
x_29 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_1, x_27, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(x_1, x_28, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_28);
lean_dec(x_3);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_44 = x_29;
} else {
 lean_dec_ref(x_29);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___main(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_dec(x_3);
if (x_1 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_mkFVar(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_mkMVar(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 3);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(x_1, x_14, x_3, x_4);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Lean_mkConst(x_11, x_12);
x_19 = l_List_append___rarg(x_13, x_17);
x_20 = l_List_redLength___main___rarg(x_19);
x_21 = lean_mk_empty_array_with_capacity(x_20);
lean_dec(x_20);
x_22 = l_List_toArrayAux___main___rarg(x_19, x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_22, x_22, x_23, x_18);
lean_dec(x_22);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = l_Lean_mkConst(x_11, x_12);
x_28 = l_List_append___rarg(x_13, x_25);
x_29 = l_List_redLength___main___rarg(x_28);
x_30 = lean_mk_empty_array_with_capacity(x_29);
lean_dec(x_29);
x_31 = l_List_toArrayAux___main___rarg(x_28, x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_31, x_31, x_32, x_27);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_26);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
case 4:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
lean_dec(x_2);
lean_inc(x_3);
x_41 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(x_1, x_40, x_3, x_4);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Meta_mkArrayLit(x_39, x_42, x_3, x_43);
return x_44;
}
else
{
uint8_t x_45; 
lean_dec(x_39);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_41, 0);
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_41);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
case 5:
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_2, 1);
lean_inc(x_49);
lean_dec(x_2);
x_2 = x_49;
goto _start;
}
default: 
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_3);
x_51 = lean_ctor_get(x_2, 0);
lean_inc(x_51);
lean_dec(x_2);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_4);
return x_52;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__1(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_toExpr___main___spec__2(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Meta_DepElim_Pattern_toExpr(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_FVarSubst_apply(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Meta_FVarSubst_apply(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
case 1:
{
return x_2;
}
case 2:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 3);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(x_1, x_10);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(x_1, x_11);
lean_ctor_set(x_2, 3, x_13);
lean_ctor_set(x_2, 2, x_12);
return x_2;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_2, 2);
x_17 = lean_ctor_get(x_2, 3);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_18 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(x_1, x_16);
x_19 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(x_1, x_17);
x_20 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_19);
return x_20;
}
}
case 3:
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = l_Lean_Meta_FVarSubst_apply(x_1, x_22);
lean_ctor_set(x_2, 0, x_23);
return x_2;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = l_Lean_Meta_FVarSubst_apply(x_1, x_24);
x_26 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
case 4:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_2);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_2, 0);
x_29 = lean_ctor_get(x_2, 1);
x_30 = l_Lean_Meta_FVarSubst_apply(x_1, x_28);
x_31 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(x_1, x_29);
lean_ctor_set(x_2, 1, x_31);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_2);
x_34 = l_Lean_Meta_FVarSubst_apply(x_1, x_32);
x_35 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(x_1, x_33);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
default: 
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_2);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_2, 1);
x_39 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_38);
lean_ctor_set(x_2, 1, x_39);
return x_2;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_2, 0);
x_41 = lean_ctor_get(x_2, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_2);
x_42 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_41);
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyFVarSubst___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_instantiateMVars(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_instantiateMVars(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = l_Lean_Meta_instantiateMVars(x_5, x_2, x_3);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_ctor_set(x_1, 0, x_8);
lean_ctor_set(x_6, 0, x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_6);
lean_ctor_set(x_1, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l_Lean_Meta_instantiateMVars(x_12, x_2, x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_14);
if (lean_is_scalar(x_16)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_16;
}
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
x_21 = lean_metavar_ctx_get_expr_assignment(x_20, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_21, 0);
lean_inc(x_25);
lean_dec(x_21);
x_26 = l_Lean_Meta_instantiateMVars(x_25, x_2, x_3);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_28);
lean_ctor_set(x_26, 0, x_1);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_26);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
x_32 = lean_ctor_get(x_21, 0);
lean_inc(x_32);
lean_dec(x_21);
x_33 = l_Lean_Meta_instantiateMVars(x_32, x_2, x_3);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_34);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
}
case 2:
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_1);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_ctor_get(x_1, 2);
x_41 = lean_ctor_get(x_1, 3);
x_42 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(x_40, x_2, x_3);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_41, x_2, x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 0);
lean_ctor_set(x_1, 3, x_47);
lean_ctor_set(x_1, 2, x_43);
lean_ctor_set(x_45, 0, x_1);
return x_45;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_45, 0);
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_45);
lean_ctor_set(x_1, 3, x_48);
lean_ctor_set(x_1, 2, x_43);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get(x_1, 1);
x_53 = lean_ctor_get(x_1, 2);
x_54 = lean_ctor_get(x_1, 3);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_1);
x_55 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(x_53, x_2, x_3);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_54, x_2, x_57);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_62, 0, x_51);
lean_ctor_set(x_62, 1, x_52);
lean_ctor_set(x_62, 2, x_56);
lean_ctor_set(x_62, 3, x_59);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
return x_63;
}
}
case 3:
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_1);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_65 = lean_ctor_get(x_1, 0);
x_66 = l_Lean_Meta_instantiateMVars(x_65, x_2, x_3);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_ctor_set(x_1, 0, x_68);
lean_ctor_set(x_66, 0, x_1);
return x_66;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_66, 0);
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_66);
lean_ctor_set(x_1, 0, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_72 = lean_ctor_get(x_1, 0);
lean_inc(x_72);
lean_dec(x_1);
x_73 = l_Lean_Meta_instantiateMVars(x_72, x_2, x_3);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_77, 0, x_74);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
case 4:
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_1);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_80 = lean_ctor_get(x_1, 0);
x_81 = lean_ctor_get(x_1, 1);
x_82 = l_Lean_Meta_instantiateMVars(x_80, x_2, x_3);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_81, x_2, x_84);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_85, 0);
lean_ctor_set(x_1, 1, x_87);
lean_ctor_set(x_1, 0, x_83);
lean_ctor_set(x_85, 0, x_1);
return x_85;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_85, 0);
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_85);
lean_ctor_set(x_1, 1, x_88);
lean_ctor_set(x_1, 0, x_83);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_1);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_91 = lean_ctor_get(x_1, 0);
x_92 = lean_ctor_get(x_1, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_1);
x_93 = l_Lean_Meta_instantiateMVars(x_91, x_2, x_3);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_92, x_2, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_99 = x_96;
} else {
 lean_dec_ref(x_96);
 x_99 = lean_box(0);
}
x_100 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_100, 0, x_94);
lean_ctor_set(x_100, 1, x_97);
if (lean_is_scalar(x_99)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_99;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_98);
return x_101;
}
}
default: 
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_1);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_103 = lean_ctor_get(x_1, 0);
x_104 = lean_ctor_get(x_1, 1);
x_105 = lean_ctor_get(x_3, 1);
lean_inc(x_105);
lean_inc(x_103);
x_106 = lean_metavar_ctx_get_expr_assignment(x_105, x_103);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; uint8_t x_108; 
x_107 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_104, x_2, x_3);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_107, 0);
lean_ctor_set(x_1, 1, x_109);
lean_ctor_set(x_107, 0, x_1);
return x_107;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_107, 0);
x_111 = lean_ctor_get(x_107, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_107);
lean_ctor_set(x_1, 1, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_1);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
else
{
lean_dec(x_106);
lean_free_object(x_1);
lean_dec(x_103);
x_1 = x_104;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_1, 0);
x_115 = lean_ctor_get(x_1, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_1);
x_116 = lean_ctor_get(x_3, 1);
lean_inc(x_116);
lean_inc(x_114);
x_117 = lean_metavar_ctx_get_expr_assignment(x_116, x_114);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_118 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_115, x_2, x_3);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
x_122 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_122, 0, x_114);
lean_ctor_set(x_122, 1, x_119);
if (lean_is_scalar(x_121)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_121;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_120);
return x_123;
}
else
{
lean_dec(x_117);
lean_dec(x_114);
x_1 = x_115;
goto _start;
}
}
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at_Lean_Meta_DepElim_Pattern_instantiateMVars___main___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_instantiateMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Pattern_instantiateMVars(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_MVarRenaming_apply(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_MVarRenaming_apply(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Meta_MVarRenaming_apply(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Meta_MVarRenaming_apply(x_1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = l_Std_RBNode_find___main___at_Lean_Meta_MVarRenaming_find_x3f___spec__1(x_1, x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
return x_2;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
case 2:
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_2, 2);
x_18 = lean_ctor_get(x_2, 3);
x_19 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(x_1, x_17);
x_20 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(x_1, x_18);
lean_ctor_set(x_2, 3, x_20);
lean_ctor_set(x_2, 2, x_19);
return x_2;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_25 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(x_1, x_23);
x_26 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(x_1, x_24);
x_27 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_25);
lean_ctor_set(x_27, 3, x_26);
return x_27;
}
}
case 3:
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_2, 0);
x_30 = l_Lean_Meta_MVarRenaming_apply(x_1, x_29);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
lean_dec(x_2);
x_32 = l_Lean_Meta_MVarRenaming_apply(x_1, x_31);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
case 4:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_2);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_2, 0);
x_36 = lean_ctor_get(x_2, 1);
x_37 = l_Lean_Meta_MVarRenaming_apply(x_1, x_35);
x_38 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(x_1, x_36);
lean_ctor_set(x_2, 1, x_38);
lean_ctor_set(x_2, 0, x_37);
return x_2;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_2, 0);
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_2);
x_41 = l_Lean_Meta_MVarRenaming_apply(x_1, x_39);
x_42 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(x_1, x_40);
x_43 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
default: 
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_2);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_2, 0);
x_46 = lean_ctor_get(x_2, 1);
x_47 = l_Std_RBNode_find___main___at_Lean_Meta_MVarRenaming_find_x3f___spec__1(x_1, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_46);
lean_ctor_set(x_2, 1, x_48);
return x_2;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_46);
lean_ctor_set(x_2, 1, x_50);
lean_ctor_set(x_2, 0, x_49);
return x_2;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_2, 0);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_2);
x_53 = l_Std_RBNode_find___main___at_Lean_Meta_MVarRenaming_find_x3f___spec__1(x_1, x_51);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_52);
x_55 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_55, 0, x_51);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_51);
x_56 = lean_ctor_get(x_53, 0);
lean_inc(x_56);
lean_dec(x_53);
x_57 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_52);
x_58 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_FVarSubst_apply(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = l_Lean_Meta_DepElim_Pattern_Inhabited(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Meta_FVarSubst_apply(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
case 1:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = l_Lean_Meta_FVarSubst_get(x_1, x_10);
if (lean_obj_tag(x_11) == 2)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_2, 0, x_12);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_11);
lean_free_object(x_2);
x_13 = l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1;
x_14 = l_unreachable_x21___rarg(x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = l_Lean_Meta_FVarSubst_get(x_1, x_15);
if (lean_obj_tag(x_16) == 2)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
x_19 = l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1;
x_20 = l_unreachable_x21___rarg(x_19);
return x_20;
}
}
}
case 2:
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_ctor_get(x_2, 3);
x_24 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(x_1, x_22);
x_25 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(x_1, x_23);
lean_ctor_set(x_2, 3, x_25);
lean_ctor_set(x_2, 2, x_24);
return x_2;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_2, 0);
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_2, 2);
x_29 = lean_ctor_get(x_2, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_2);
x_30 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(x_1, x_28);
x_31 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(x_1, x_29);
x_32 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_27);
lean_ctor_set(x_32, 2, x_30);
lean_ctor_set(x_32, 3, x_31);
return x_32;
}
}
case 3:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_2, 0);
x_35 = l_Lean_Meta_FVarSubst_apply(x_1, x_34);
lean_ctor_set(x_2, 0, x_35);
return x_2;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
lean_dec(x_2);
x_37 = l_Lean_Meta_FVarSubst_apply(x_1, x_36);
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
case 4:
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_2);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_2, 0);
x_41 = lean_ctor_get(x_2, 1);
x_42 = l_Lean_Meta_FVarSubst_apply(x_1, x_40);
x_43 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(x_1, x_41);
lean_ctor_set(x_2, 1, x_43);
lean_ctor_set(x_2, 0, x_42);
return x_2;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_2, 0);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_2);
x_46 = l_Lean_Meta_FVarSubst_apply(x_1, x_44);
x_47 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(x_1, x_45);
x_48 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
default: 
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_2);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_2, 0);
x_51 = lean_ctor_get(x_2, 1);
x_52 = l_Lean_Meta_FVarSubst_get(x_1, x_50);
if (lean_obj_tag(x_52) == 2)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_51);
lean_ctor_set(x_2, 1, x_54);
lean_ctor_set(x_2, 0, x_53);
return x_2;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_52);
lean_free_object(x_2);
lean_dec(x_51);
x_55 = l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1;
x_56 = l_unreachable_x21___rarg(x_55);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_2, 0);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_2);
x_59 = l_Lean_Meta_FVarSubst_get(x_1, x_57);
if (lean_obj_tag(x_59) == 2)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
lean_dec(x_59);
x_61 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_58);
x_62 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_59);
lean_dec(x_58);
x_63 = l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1;
x_64 = l_unreachable_x21___rarg(x_63);
return x_64;
}
}
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Pattern_toIPattern___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Pattern_toIPattern___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Pattern_toIPattern(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Expr_Inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_DepElim_Alt_Inhabited___closed__1;
return x_1;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_mkMVar(x_4);
x_7 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_mkMVar(x_8);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = 1;
x_7 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_6, x_4);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__2(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = 1;
x_12 = l_Lean_Meta_DepElim_Pattern_toMessageData___main(x_11, x_9);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__2(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" |- ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Alt_toMessageData___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Alt_toMessageData___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_map___main___at_Lean_Meta_DiscrTree_Trie_format___main___spec__2___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__1(x_4);
x_6 = l_List_map___main___at_Lean_MessageData_coeOfListExpr___spec__1(x_5);
x_7 = l_Lean_MessageData_ofList(x_6);
lean_dec(x_6);
x_8 = l_Lean_Meta_DepElim_Alt_toMessageData___closed__3;
x_9 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_Alt_toMessageData___spec__2(x_10);
x_12 = l_Lean_MessageData_ofList(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_DepElim_Alt_toMessageData___closed__4;
x_15 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Meta_addContext(x_18, x_2, x_3);
return x_19;
}
}
lean_object* l_Lean_Meta_DepElim_Alt_toMessageData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Alt_toMessageData(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_LocalContext_contains(x_1, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_85; 
x_85 = l_Std_AssocList_isEmpty___rarg(x_1);
if (x_85 == 0)
{
lean_object* x_86; 
x_86 = lean_box(0);
x_6 = x_86;
goto block_84;
}
else
{
uint8_t x_87; 
x_87 = l_Lean_Meta_MVarRenaming_isEmpty(x_2);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_box(0);
x_6 = x_88;
goto block_84;
}
else
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_4);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_2);
lean_ctor_set(x_89, 1, x_3);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_5);
return x_90;
}
}
block_84:
{
lean_object* x_7; 
lean_dec(x_6);
lean_inc(x_3);
x_7 = l_Lean_Meta_getMVarDecl(x_3, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
x_11 = l_Lean_Meta_instantiateMVars(x_10, x_4, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_15 = l_Lean_Meta_FVarSubst_apply(x_1, x_13);
x_16 = l_Lean_Meta_MVarRenaming_apply(x_2, x_15);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1___boxed), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Std_AssocList_any___main___rarg(x_18, x_1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = lean_expr_eqv(x_16, x_13);
lean_dec(x_13);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; uint8_t x_24; 
lean_free_object(x_11);
x_21 = lean_box(0);
x_22 = 0;
x_23 = l_Lean_Meta_mkFreshExprMVar(x_16, x_21, x_22, x_4, x_14);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = l_Lean_Expr_mvarId_x21(x_25);
lean_dec(x_25);
lean_inc(x_26);
x_27 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = l_Lean_Expr_mvarId_x21(x_29);
lean_dec(x_29);
lean_inc(x_31);
x_32 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_16);
lean_dec(x_4);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_3);
lean_ctor_set(x_11, 0, x_35);
return x_11;
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; uint8_t x_39; 
lean_free_object(x_11);
lean_dec(x_13);
x_36 = lean_box(0);
x_37 = 0;
x_38 = l_Lean_Meta_mkFreshExprMVar(x_16, x_36, x_37, x_4, x_14);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = l_Lean_Expr_mvarId_x21(x_40);
lean_dec(x_40);
lean_inc(x_41);
x_42 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_38, 0, x_43);
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = l_Lean_Expr_mvarId_x21(x_44);
lean_dec(x_44);
lean_inc(x_46);
x_47 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_11, 0);
x_51 = lean_ctor_get(x_11, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_11);
lean_inc(x_50);
x_52 = l_Lean_Meta_FVarSubst_apply(x_1, x_50);
x_53 = l_Lean_Meta_MVarRenaming_apply(x_2, x_52);
x_54 = lean_ctor_get(x_8, 1);
lean_inc(x_54);
lean_dec(x_8);
x_55 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1___boxed), 3, 1);
lean_closure_set(x_55, 0, x_54);
x_56 = l_Std_AssocList_any___main___rarg(x_55, x_1);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = lean_expr_eqv(x_53, x_50);
lean_dec(x_50);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_58 = lean_box(0);
x_59 = 0;
x_60 = l_Lean_Meta_mkFreshExprMVar(x_53, x_58, x_59, x_4, x_51);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
x_64 = l_Lean_Expr_mvarId_x21(x_61);
lean_dec(x_61);
lean_inc(x_64);
x_65 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
if (lean_is_scalar(x_63)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_63;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_62);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_53);
lean_dec(x_4);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_2);
lean_ctor_set(x_68, 1, x_3);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_51);
return x_69;
}
}
else
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_50);
x_70 = lean_box(0);
x_71 = 0;
x_72 = l_Lean_Meta_mkFreshExprMVar(x_53, x_70, x_71, x_4, x_51);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = l_Lean_Expr_mvarId_x21(x_73);
lean_dec(x_73);
lean_inc(x_76);
x_77 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_2, x_3, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
if (lean_is_scalar(x_75)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_75;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_74);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_7);
if (x_80 == 0)
{
return x_7;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_7, 0);
x_82 = lean_ctor_get(x_7, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_7);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_4);
lean_inc(x_8);
lean_inc(x_1);
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar(x_1, x_10, x_8, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
x_18 = lean_name_eq(x_8, x_17);
lean_inc(x_17);
lean_ctor_set(x_3, 1, x_11);
lean_ctor_set(x_3, 0, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_16, x_8, x_17);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_13, 0, x_19);
x_2 = x_13;
x_3 = x_9;
x_5 = x_14;
goto _start;
}
else
{
lean_dec(x_17);
lean_dec(x_8);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_13;
x_3 = x_9;
x_5 = x_14;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_name_eq(x_8, x_23);
lean_inc(x_23);
lean_ctor_set(x_3, 1, x_11);
lean_ctor_set(x_3, 0, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_22, x_8, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
x_2 = x_26;
x_3 = x_9;
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_8);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_3);
x_2 = x_28;
x_3 = x_9;
x_5 = x_14;
goto _start;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_11);
lean_free_object(x_3);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_3, 0);
x_35 = lean_ctor_get(x_3, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_3);
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_2, 1);
lean_inc(x_37);
lean_dec(x_2);
lean_inc(x_4);
lean_inc(x_34);
lean_inc(x_1);
x_38 = l___private_Lean_Meta_EqnCompiler_DepElim_1__convertMVar(x_1, x_36, x_34, x_4, x_5);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
x_44 = lean_name_eq(x_34, x_42);
lean_inc(x_42);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_37);
if (x_44 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_41, x_34, x_42);
if (lean_is_scalar(x_43)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_43;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_2 = x_47;
x_3 = x_35;
x_5 = x_40;
goto _start;
}
else
{
lean_object* x_49; 
lean_dec(x_42);
lean_dec(x_34);
if (lean_is_scalar(x_43)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_43;
}
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_45);
x_2 = x_49;
x_3 = x_35;
x_5 = x_40;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_4);
lean_dec(x_1);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_38, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_53 = x_38;
} else {
 lean_dec_ref(x_38);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1;
x_6 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___spec__1(x_1, x_5, x_2, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = l_List_reverse___rarg(x_10);
lean_ctor_set(x_8, 1, x_11);
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = l_List_reverse___rarg(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_6, 0, x_15);
return x_6;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_6);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_20 = x_16;
} else {
 lean_dec_ref(x_16);
 x_20 = lean_box(0);
}
x_21 = l_List_reverse___rarg(x_19);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_6);
x_9 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_2, x_8);
x_10 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = l_Lean_Meta_DepElim_Pattern_applyFVarSubst___main(x_1, x_11);
x_14 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_2, x_13);
x_15 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_2, x_12);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Alt_applyFVarSubst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
lean_inc(x_1);
x_10 = l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_13, x_9);
x_16 = l_Lean_Meta_FVarSubst_apply(x_1, x_7);
lean_dec(x_1);
x_17 = l_Lean_Meta_MVarRenaming_apply(x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 3, x_15);
lean_ctor_set(x_2, 2, x_14);
lean_ctor_set(x_2, 1, x_17);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_20, x_9);
x_23 = l_Lean_Meta_FVarSubst_apply(x_1, x_7);
lean_dec(x_1);
x_24 = l_Lean_Meta_MVarRenaming_apply(x_20, x_23);
lean_dec(x_20);
lean_ctor_set(x_2, 3, x_22);
lean_ctor_set(x_2, 2, x_21);
lean_ctor_set(x_2, 1, x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_19);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = lean_ctor_get(x_2, 1);
x_32 = lean_ctor_get(x_2, 2);
x_33 = lean_ctor_get(x_2, 3);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_2);
lean_inc(x_1);
x_34 = l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars(x_1, x_32, x_3, x_4);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_38, x_33);
x_41 = l_Lean_Meta_FVarSubst_apply(x_1, x_31);
lean_dec(x_1);
x_42 = l_Lean_Meta_MVarRenaming_apply(x_38, x_41);
lean_dec(x_38);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_30);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_39);
lean_ctor_set(x_43, 3, x_40);
if (lean_is_scalar(x_37)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_37;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_36);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_1);
x_45 = lean_ctor_get(x_34, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_34, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_47 = x_34;
} else {
 lean_dec_ref(x_34);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at_Lean_Meta_DepElim_Alt_applyFVarSubst___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_3__copyMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
x_5 = l_Lean_Meta_getMVarDecl(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Meta_instantiateMVars(x_8, x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_MVarRenaming_apply(x_1, x_10);
x_13 = lean_box(0);
x_14 = 0;
x_15 = l_Lean_Meta_mkFreshExprMVar(x_12, x_13, x_14, x_3, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Lean_Expr_mvarId_x21(x_17);
lean_dec(x_17);
lean_inc(x_18);
x_19 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = l_Lean_Expr_mvarId_x21(x_21);
lean_dec(x_21);
lean_inc(x_23);
x_24 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_2, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_5);
if (x_27 == 0)
{
return x_5;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_5, 0);
x_29 = lean_ctor_get(x_5, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_5);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_3);
x_11 = l___private_Lean_Meta_EqnCompiler_DepElim_3__copyMVar(x_9, x_7, x_3, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 1);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_15);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_12;
x_2 = x_8;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_2);
x_1 = x_19;
x_2 = x_8;
x_4 = x_13;
goto _start;
}
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
return x_11;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_2);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_dec(x_1);
lean_inc(x_3);
x_29 = l___private_Lean_Meta_EqnCompiler_DepElim_3__copyMVar(x_27, x_25, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_34 = x_30;
} else {
 lean_dec_ref(x_30);
 x_34 = lean_box(0);
}
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_28);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_35);
x_1 = x_36;
x_2 = x_26;
x_4 = x_31;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_3);
x_38 = lean_ctor_get(x_29, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_40 = x_29;
} else {
 lean_dec_ref(x_29);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1;
x_5 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars___spec__1(x_4, x_1, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
x_10 = l_List_reverse___rarg(x_9);
lean_ctor_set(x_7, 1, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = l_List_reverse___rarg(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_19 = x_15;
} else {
 lean_dec_ref(x_15);
 x_19 = lean_box(0);
}
x_20 = l_List_reverse___rarg(x_18);
if (lean_is_scalar(x_19)) {
 x_21 = lean_alloc_ctor(0, 2, 0);
} else {
 x_21 = x_19;
}
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_5);
if (x_23 == 0)
{
return x_5;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_5, 0);
x_25 = lean_ctor_get(x_5, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_5);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_applyMVarRenaming___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Alt_copyCore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
x_9 = l___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars(x_7, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_13, x_8);
x_16 = l_Lean_Meta_MVarRenaming_apply(x_13, x_6);
lean_ctor_set(x_1, 3, x_15);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_11, 1, x_1);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_17, x_8);
x_20 = l_Lean_Meta_MVarRenaming_apply(x_17, x_6);
lean_ctor_set(x_1, 3, x_19);
lean_ctor_set(x_1, 2, x_18);
lean_ctor_set(x_1, 1, x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_1);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_26 = x_22;
} else {
 lean_dec_ref(x_22);
 x_26 = lean_box(0);
}
x_27 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_24, x_8);
x_28 = l_Lean_Meta_MVarRenaming_apply(x_24, x_6);
lean_ctor_set(x_1, 3, x_27);
lean_ctor_set(x_1, 2, x_25);
lean_ctor_set(x_1, 1, x_28);
if (lean_is_scalar(x_26)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_26;
}
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_1);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_23);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_9);
if (x_31 == 0)
{
return x_9;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_9, 0);
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_9);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get(x_1, 1);
x_37 = lean_ctor_get(x_1, 2);
x_38 = lean_ctor_get(x_1, 3);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_1);
x_39 = l___private_Lean_Meta_EqnCompiler_DepElim_4__copyMVars(x_37, x_2, x_3);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_45 = x_40;
} else {
 lean_dec_ref(x_40);
 x_45 = lean_box(0);
}
x_46 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_43, x_38);
x_47 = l_Lean_Meta_MVarRenaming_apply(x_43, x_36);
x_48 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_48, 0, x_35);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_48, 3, x_46);
if (lean_is_scalar(x_45)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_45;
}
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
if (lean_is_scalar(x_42)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_42;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_41);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_35);
x_51 = lean_ctor_get(x_39, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_39, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_53 = x_39;
} else {
 lean_dec_ref(x_39);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Alt_copyCore___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Alt_copy(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Alt_copyCore(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_6);
x_9 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_10);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(x_1, x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_6);
x_9 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_10);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(x_1, x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_name_eq(x_4, x_1);
lean_dec(x_4);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
case 2:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(x_1, x_2, x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
case 4:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(x_1, x_2, x_14);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(x_1, x_2, x_16);
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
default: 
{
return x_3;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at_Lean_Meta_DepElim_Example_replaceFVarId___main___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Example_replaceFVarId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Example_replaceFVarId(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_5);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_9);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Meta_FVarSubst_get(x_1, x_4);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; 
lean_dec(x_5);
lean_free_object(x_2);
x_7 = lean_box(1);
return x_7;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_Meta_FVarSubst_get(x_1, x_8);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(1);
return x_12;
}
}
}
case 2:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(x_1, x_14);
lean_ctor_set(x_2, 1, x_15);
return x_2;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_2);
x_18 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(x_1, x_17);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
case 4:
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(x_1, x_21);
lean_ctor_set(x_2, 0, x_22);
return x_2;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
lean_dec(x_2);
x_24 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(x_1, x_23);
x_25 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
default: 
{
return x_2;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at_Lean_Meta_DepElim_Example_applyFVarSubst___main___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_Example_applyFVarSubst___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_DepElim_Example_applyFVarSubst(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Meta_DepElim_Example_varsToUnderscore___main(x_4);
x_7 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_Meta_DepElim_Example_varsToUnderscore___main(x_8);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Example_varsToUnderscore___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = lean_box(1);
return x_2;
}
case 2:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_4);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_7);
x_9 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
case 4:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_11);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = l_List_map___main___at_Lean_Meta_DepElim_Example_varsToUnderscore___main___spec__1(x_13);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
default: 
{
return x_1;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Example_varsToUnderscore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DepElim_Example_varsToUnderscore___main(x_1);
return x_2;
}
}
lean_object* l_List_foldl___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Meta_Exception_toTraceMessageData___closed__4;
x_6 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_3);
x_8 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_1 = x_8;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_4);
x_7 = l_List_map___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__2(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_8);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_mkHole___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_arrayHasFormat___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_Example_toMessageData___main(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Lean_mkFVar(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
case 1:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2;
return x_5;
}
case 2:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = l_Lean_mkConst(x_7, x_8);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = l_Lean_mkConst(x_11, x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5;
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_MessageData_Inhabited___closed__1;
x_18 = l_List_foldl___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__1(x_17, x_6);
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4;
x_21 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
case 3:
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
default: 
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = l_List_map___main___at_Lean_Meta_DepElim_Example_toMessageData___main___spec__2(x_24);
x_26 = l_Lean_MessageData_ofList(x_25);
lean_dec(x_25);
x_27 = l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3;
x_28 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_Example_toMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_1);
return x_2;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_examplesToMessageData___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Meta_DepElim_Example_varsToUnderscore___main(x_4);
x_7 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_6);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_examplesToMessageData___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Meta_DepElim_Example_varsToUnderscore___main(x_9);
x_12 = l_Lean_Meta_DepElim_Example_toMessageData___main(x_11);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_examplesToMessageData___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_examplesToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_List_map___main___at_Lean_Meta_DepElim_examplesToMessageData___spec__1(x_1);
x_3 = l_Lean_MessageData_arrayExpr_toMessageData___main___closed__2;
x_4 = l_Lean_MessageData_joinSep___main(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_withGoalOf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_Meta_getMVarDecl(x_5, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 4);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Lean_Meta_withLocalContext___rarg(x_9, x_10, x_2, x_3, x_8);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
return x_6;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_6);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_withGoalOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_withGoalOf___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_withGoalOf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_DepElim_Problem_Inhabited___closed__1;
return x_1;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_DepElim_Alt_toMessageData(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_DepElim_Alt_toMessageData(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("vars ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("examples: ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = l_List_redLength___main___rarg(x_5);
x_7 = lean_mk_empty_array_with_capacity(x_6);
lean_dec(x_6);
x_8 = l_List_toArrayAux___main___rarg(x_5, x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_MessageData_coeOfArrayExpr___closed__2;
x_11 = l_Lean_MessageData_arrayExpr_toMessageData___main(x_8, x_9, x_10);
lean_dec(x_8);
x_12 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_MessageData_ofList___closed__3;
x_15 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_MessageData_joinSep___main(x_2, x_14);
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
x_19 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Meta_DepElim_examplesToMessageData(x_21);
x_23 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_14);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_4);
return x_25;
}
}
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___boxed), 4, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
x_8 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_1, x_7, x_2, x_3);
return x_8;
}
}
lean_object* l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at_Lean_Meta_DepElim_Problem_toMessageData___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Meta_DepElim_Problem_toMessageData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DepElim_Problem_toMessageData(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DepElim_counterExampleToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DepElim_examplesToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_counterExamplesToMessageData___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Meta_DepElim_examplesToMessageData(x_4);
x_7 = l_List_map___main___at_Lean_Meta_DepElim_counterExamplesToMessageData___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_Meta_DepElim_examplesToMessageData(x_8);
x_11 = l_List_map___main___at_Lean_Meta_DepElim_counterExamplesToMessageData___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_counterExamplesToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_List_map___main___at_Lean_Meta_DepElim_counterExamplesToMessageData___spec__1(x_1);
x_3 = l_Lean_MessageData_ofList___closed__3;
x_4 = l_Lean_MessageData_joinSep___main(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1(x_1, x_2, x_5);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthAux___main___rarg(x_7, x_8);
x_10 = lean_nat_dec_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
return x_6;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("incorrect number of patterns");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_1);
x_6 = 0;
x_7 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1(x_5, x_6, x_2);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3;
x_11 = lean_box(0);
x_12 = l_Lean_Meta_throwOther___rarg(x_10, x_11, x_3, x_4);
return x_12;
}
}
}
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___spec__1(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_6 = l_List_reverse___rarg(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = l_Lean_LocalDecl_type(x_10);
x_13 = l_Lean_Meta_FVarSubst_apply(x_3, x_12);
x_14 = lean_box(0);
x_15 = 0;
lean_inc(x_4);
x_16 = l_Lean_Meta_mkFreshExprMVar(x_13, x_14, x_15, x_4, x_5);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_LocalDecl_fvarId(x_10);
lean_dec(x_10);
lean_inc(x_17);
x_20 = l_Lean_Meta_FVarSubst_insert(x_3, x_19, x_17);
x_21 = l_Lean_Expr_mvarId_x21(x_17);
lean_dec(x_17);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_21);
{
lean_object* _tmp_0 = x_11;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_20;
lean_object* _tmp_4 = x_18;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
x_25 = l_Lean_LocalDecl_type(x_23);
x_26 = l_Lean_Meta_FVarSubst_apply(x_3, x_25);
x_27 = lean_box(0);
x_28 = 0;
lean_inc(x_4);
x_29 = l_Lean_Meta_mkFreshExprMVar(x_26, x_27, x_28, x_4, x_5);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_LocalDecl_fvarId(x_23);
lean_dec(x_23);
lean_inc(x_30);
x_33 = l_Lean_Meta_FVarSubst_insert(x_3, x_32, x_30);
x_34 = l_Lean_Expr_mvarId_x21(x_30);
lean_dec(x_30);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
x_1 = x_24;
x_2 = x_35;
x_3 = x_33;
x_5 = x_31;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_7__localDeclsToMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_box(0);
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_6__localDeclsToMVarsAux___main(x_1, x_4, x_5, x_2, x_3);
return x_6;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = l_Lean_LocalDecl_toExpr(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fset(x_2, x_1, x_10);
x_12 = x_9;
x_13 = 0;
lean_inc(x_3);
x_14 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_13, x_12, x_3, x_4);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_1, x_17);
x_19 = x_15;
x_20 = lean_array_fset(x_11, x_1, x_19);
lean_dec(x_1);
x_1 = x_18;
x_2 = x_20;
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_5);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_9);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_5);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_DepElim_Pattern_toIPattern___main(x_1, x_9);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_3, x_3, x_6, x_1);
x_8 = l_Lean_Meta_mkForall(x_2, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Array_isEmpty___rarg(x_1);
lean_inc(x_10);
x_14 = lean_array_push(x_2, x_10);
lean_inc(x_11);
x_15 = l___private_Lean_Meta_EqnCompiler_DepElim_7__localDeclsToMVars(x_3, x_11, x_12);
if (x_13 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_1, x_1, x_18, x_10);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(x_21, x_4);
x_23 = l_Lean_Meta_FVarSubst_apply(x_21, x_19);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_20);
lean_ctor_set(x_24, 3, x_22);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
x_26 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(x_7, x_8, x_25, x_14, x_9, x_11, x_17);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_15, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_dec(x_15);
x_29 = l_Lean_unitToExpr___lambda__1___closed__3;
x_30 = l_Lean_mkApp(x_10, x_29);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(x_32, x_4);
x_34 = l_Lean_Meta_FVarSubst_apply(x_32, x_30);
lean_dec(x_32);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_5);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_31);
lean_ctor_set(x_35, 3, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_6);
x_37 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(x_7, x_8, x_36, x_14, x_9, x_11, x_28);
return x_37;
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("EqnCompiler");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Basic_12__regTraceClasses___closed__2;
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matchDebug");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2;
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("minor premise ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = l_List_reverse___rarg(x_3);
x_9 = lean_apply_4(x_5, x_8, x_4, x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = l_List_redLength___main___rarg(x_12);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_dec(x_13);
lean_inc(x_12);
x_15 = l_List_toArrayAux___main___rarg(x_12, x_14);
x_16 = x_15;
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__1(x_17, x_16);
x_19 = x_18;
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = l_List_redLength___main___rarg(x_20);
x_22 = lean_mk_empty_array_with_capacity(x_21);
lean_dec(x_21);
lean_inc(x_20);
x_23 = l_List_toArrayAux___main___rarg(x_20, x_22);
x_24 = x_23;
x_25 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__2), 4, 2);
lean_closure_set(x_25, 0, x_17);
lean_closure_set(x_25, 1, x_24);
x_26 = x_25;
lean_inc(x_19);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_19);
x_28 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
lean_inc(x_6);
lean_inc(x_12);
x_29 = l_Lean_Meta_withExistingLocalDecls___rarg(x_12, x_28, x_6, x_7);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Expr_isForall(x_30);
x_33 = l_List_lengthAux___main___rarg(x_3, x_17);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_33, x_34);
x_36 = l_Lean_Meta_caseValue___closed__2;
x_37 = l_Lean_Name_appendIndexAfter(x_36, x_35);
x_38 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2___boxed), 12, 9);
lean_closure_set(x_38, 0, x_19);
lean_closure_set(x_38, 1, x_4);
lean_closure_set(x_38, 2, x_12);
lean_closure_set(x_38, 3, x_20);
lean_closure_set(x_38, 4, x_33);
lean_closure_set(x_38, 5, x_3);
lean_closure_set(x_38, 6, x_1);
lean_closure_set(x_38, 7, x_11);
lean_closure_set(x_38, 8, x_5);
if (x_32 == 0)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_31, 4);
lean_inc(x_39);
x_40 = lean_ctor_get_uint8(x_39, sizeof(void*)*1);
lean_dec(x_39);
x_41 = l_Lean_mkThunkType(x_30);
if (x_40 == 0)
{
uint8_t x_42; lean_object* x_43; 
x_42 = 0;
x_43 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_41, x_42, x_38, x_6, x_31);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
x_45 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_44, x_6, x_31);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = 0;
x_50 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_41, x_49, x_38, x_6, x_48);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
lean_dec(x_45);
lean_inc(x_37);
x_52 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_52, 0, x_37);
x_53 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7;
x_54 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_56 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_41);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_41);
x_58 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_44, x_58, x_6, x_51);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = 0;
x_62 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_41, x_61, x_38, x_6, x_60);
return x_62;
}
}
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_31, 4);
lean_inc(x_63);
x_64 = lean_ctor_get_uint8(x_63, sizeof(void*)*1);
lean_dec(x_63);
if (x_64 == 0)
{
uint8_t x_65; lean_object* x_66; 
x_65 = 0;
x_66 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_30, x_65, x_38, x_6, x_31);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
x_68 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_67, x_6, x_31);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_unbox(x_69);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
x_72 = 0;
x_73 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_30, x_72, x_38, x_6, x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; 
x_74 = lean_ctor_get(x_68, 1);
lean_inc(x_74);
lean_dec(x_68);
lean_inc(x_37);
x_75 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_75, 0, x_37);
x_76 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7;
x_77 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_79 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_inc(x_30);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_30);
x_81 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_67, x_81, x_6, x_74);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = 0;
x_85 = l_Lean_Meta_withLocalDecl___rarg(x_37, x_30, x_84, x_38, x_6, x_83);
return x_85;
}
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_29);
if (x_86 == 0)
{
return x_29;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_29, 0);
x_88 = lean_ctor_get(x_29, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_29);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg), 7, 0);
return x_2;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___spec__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = l_Array_empty___closed__1;
x_8 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg(x_1, x_2, x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_assignGoalOf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_assignExprMVar___boxed), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_2);
x_7 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_1, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l_Lean_Meta_DepElim_assignGoalOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DepElim_assignGoalOf(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = l_List_isEmpty___rarg(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_4) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 3);
if (lean_obj_tag(x_6) == 0)
{
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_7) == 5)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
return x_5;
}
}
}
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 0;
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1(x_1, x_6);
switch (lean_obj_tag(x_7)) {
case 0:
{
return x_8;
}
case 1:
{
return x_8;
}
default: 
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 1;
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_2, 1);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
}
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 1;
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___main___at___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_1, 0, x_11);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_1 = x_16;
x_2 = x_13;
goto _start;
}
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_5, 0);
switch (lean_obj_tag(x_18)) {
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_2, 1);
x_21 = lean_ctor_get(x_1, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_3, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_3, 0, x_25);
x_2 = x_20;
goto _start;
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
lean_dec(x_3);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set(x_1, 1, x_30);
x_2 = x_20;
goto _start;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_35 = x_3;
} else {
 lean_dec_ref(x_3);
 x_35 = lean_box(0);
}
x_36 = 1;
x_37 = lean_box(x_36);
if (lean_is_scalar(x_35)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_35;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
x_1 = x_39;
x_2 = x_32;
goto _start;
}
}
case 2:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_1, 1);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_3);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_3, 1);
lean_dec(x_45);
x_46 = 1;
x_47 = lean_box(x_46);
lean_ctor_set(x_3, 1, x_47);
x_2 = x_42;
goto _start;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_3, 0);
lean_inc(x_49);
lean_dec(x_3);
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_1, 1, x_52);
x_2 = x_42;
goto _start;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_2, 1);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
lean_dec(x_1);
x_56 = lean_ctor_get(x_3, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_57 = x_3;
} else {
 lean_dec_ref(x_3);
 x_57 = lean_box(0);
}
x_58 = 1;
x_59 = lean_box(x_58);
if (lean_is_scalar(x_57)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_57;
}
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
x_1 = x_61;
x_2 = x_54;
goto _start;
}
}
default: 
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_1);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_1, 1);
lean_dec(x_64);
x_65 = lean_ctor_get(x_1, 0);
lean_dec(x_65);
x_66 = lean_ctor_get(x_2, 1);
x_67 = 0;
x_68 = lean_box(x_67);
lean_ctor_set(x_1, 0, x_68);
x_2 = x_66;
goto _start;
}
else
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_1);
x_70 = lean_ctor_get(x_2, 1);
x_71 = 0;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_3);
x_1 = x_73;
x_2 = x_70;
goto _start;
}
}
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2;
x_4 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_5);
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
return x_13;
}
}
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_1, 0, x_11);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_1 = x_16;
x_2 = x_13;
goto _start;
}
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_5, 0);
switch (lean_obj_tag(x_18)) {
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_2, 1);
x_21 = lean_ctor_get(x_1, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_3, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_3, 0, x_25);
x_2 = x_20;
goto _start;
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
lean_dec(x_3);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set(x_1, 1, x_30);
x_2 = x_20;
goto _start;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_35 = x_3;
} else {
 lean_dec_ref(x_3);
 x_35 = lean_box(0);
}
x_36 = 1;
x_37 = lean_box(x_36);
if (lean_is_scalar(x_35)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_35;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
x_1 = x_39;
x_2 = x_32;
goto _start;
}
}
case 3:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_1, 1);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_3);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_3, 1);
lean_dec(x_45);
x_46 = 1;
x_47 = lean_box(x_46);
lean_ctor_set(x_3, 1, x_47);
x_2 = x_42;
goto _start;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_3, 0);
lean_inc(x_49);
lean_dec(x_3);
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_1, 1, x_52);
x_2 = x_42;
goto _start;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_2, 1);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
lean_dec(x_1);
x_56 = lean_ctor_get(x_3, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_57 = x_3;
} else {
 lean_dec_ref(x_3);
 x_57 = lean_box(0);
}
x_58 = 1;
x_59 = lean_box(x_58);
if (lean_is_scalar(x_57)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_57;
}
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
x_1 = x_61;
x_2 = x_54;
goto _start;
}
}
default: 
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_1);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_1, 1);
lean_dec(x_64);
x_65 = lean_ctor_get(x_1, 0);
lean_dec(x_65);
x_66 = lean_ctor_get(x_2, 1);
x_67 = 0;
x_68 = lean_box(x_67);
lean_ctor_set(x_1, 0, x_68);
x_2 = x_66;
goto _start;
}
else
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_1);
x_70 = lean_ctor_get(x_2, 1);
x_71 = 0;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_3);
x_1 = x_73;
x_2 = x_70;
goto _start;
}
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2;
x_4 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_5);
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
return x_13;
}
}
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_1, 0, x_11);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_1 = x_16;
x_2 = x_13;
goto _start;
}
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_5, 0);
switch (lean_obj_tag(x_18)) {
case 1:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_2, 1);
x_21 = lean_ctor_get(x_1, 1);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_3);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_3, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_3, 0, x_25);
x_2 = x_20;
goto _start;
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
lean_dec(x_3);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set(x_1, 1, x_30);
x_2 = x_20;
goto _start;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_35 = x_3;
} else {
 lean_dec_ref(x_3);
 x_35 = lean_box(0);
}
x_36 = 1;
x_37 = lean_box(x_36);
if (lean_is_scalar(x_35)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_35;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
x_1 = x_39;
x_2 = x_32;
goto _start;
}
}
case 4:
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_1, 1);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_3);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_3, 1);
lean_dec(x_45);
x_46 = 1;
x_47 = lean_box(x_46);
lean_ctor_set(x_3, 1, x_47);
x_2 = x_42;
goto _start;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_3, 0);
lean_inc(x_49);
lean_dec(x_3);
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_1, 1, x_52);
x_2 = x_42;
goto _start;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_2, 1);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
lean_dec(x_1);
x_56 = lean_ctor_get(x_3, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_57 = x_3;
} else {
 lean_dec_ref(x_3);
 x_57 = lean_box(0);
}
x_58 = 1;
x_59 = lean_box(x_58);
if (lean_is_scalar(x_57)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_57;
}
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
x_1 = x_61;
x_2 = x_54;
goto _start;
}
}
default: 
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_1);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_1, 1);
lean_dec(x_64);
x_65 = lean_ctor_get(x_1, 0);
lean_dec(x_65);
x_66 = lean_ctor_get(x_2, 1);
x_67 = 0;
x_68 = lean_box(x_67);
lean_ctor_set(x_1, 0, x_68);
x_2 = x_66;
goto _start;
}
else
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_1);
x_70 = lean_ctor_get(x_2, 1);
x_71 = 0;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_3);
x_1 = x_73;
x_2 = x_70;
goto _start;
}
}
}
}
}
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2;
x_4 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1(x_3, x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_5);
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
return x_13;
}
}
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_4, 2);
x_10 = lean_ctor_get(x_4, 3);
x_11 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_12 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_13 = l_unreachable_x21___rarg(x_12);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
uint8_t x_14; 
lean_free_object(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 1);
x_16 = lean_ctor_get(x_10, 0);
lean_dec(x_16);
lean_ctor_set(x_4, 3, x_15);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_4);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
lean_ctor_set(x_4, 3, x_17);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_11);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_24 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
x_25 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_26 = l_unreachable_x21___rarg(x_25);
lean_ctor_set(x_1, 1, x_24);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_free_object(x_1);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_28 = x_23;
} else {
 lean_dec_ref(x_23);
 x_28 = lean_box(0);
}
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_27);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(1, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_1, 0);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_1);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_31, 3);
lean_inc(x_36);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 lean_ctor_release(x_31, 2);
 lean_ctor_release(x_31, 3);
 x_37 = x_31;
} else {
 lean_dec_ref(x_31);
 x_37 = lean_box(0);
}
x_38 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_39 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_40 = l_unreachable_x21___rarg(x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_43 = x_36;
} else {
 lean_dec_ref(x_36);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_44 = lean_alloc_ctor(0, 4, 0);
} else {
 x_44 = x_37;
}
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_34);
lean_ctor_set(x_44, 2, x_35);
lean_ctor_set(x_44, 3, x_42);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_38);
return x_45;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("match");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2;
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("non variable step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_23; uint8_t x_24; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_23 = lean_ctor_get(x_5, 4);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_23, sizeof(void*)*1);
lean_dec(x_23);
if (x_24 == 0)
{
x_7 = x_5;
goto block_22;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_26 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_25, x_4, x_5);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_7 = x_29;
goto block_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5;
x_32 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_25, x_31, x_4, x_30);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_7 = x_33;
goto block_22;
}
}
block_22:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___spec__1(x_12);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_dec(x_16);
lean_ctor_set(x_2, 2, x_13);
lean_ctor_set(x_2, 1, x_11);
x_17 = lean_apply_4(x_1, x_2, x_3, x_4, x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_11);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_apply_4(x_1, x_20, x_3, x_4, x_7);
return x_21;
}
}
}
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 1, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_array_get_size(x_1);
x_15 = lean_usize_of_nat(x_12);
x_16 = lean_usize_modn(x_15, x_14);
lean_dec(x_14);
x_17 = lean_array_uget(x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_array_uset(x_1, x_16, x_18);
x_1 = x_19;
x_2 = x_13;
goto _start;
}
}
}
}
lean_object* l_Std_HashSetImp_moveEntries___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashSetImp_expand___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashSetImp_moveEntries___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__3(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_nat_dec_eq(x_5, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(x_6, x_2, x_3);
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
lean_dec(x_5);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_nat_dec_eq(x_9, x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(x_10, x_2, x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_9);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
}
}
}
lean_object* l_Std_HashSetImp_insert___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_2);
x_8 = lean_usize_modn(x_7, x_6);
x_9 = lean_array_uget(x_5, x_8);
x_10 = l_List_elem___main___at_Lean_Occurrences_contains___spec__1(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
x_14 = lean_array_uset(x_5, x_8, x_13);
x_15 = lean_nat_dec_le(x_12, x_6);
lean_dec(x_6);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_1);
x_16 = l_Std_HashSetImp_expand___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__2(x_12, x_14);
return x_16;
}
else
{
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_inc(x_2);
x_17 = l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(x_9, x_2, x_2);
lean_dec(x_2);
x_18 = lean_array_uset(x_5, x_8, x_17);
lean_ctor_set(x_1, 1, x_18);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_2);
x_23 = lean_usize_modn(x_22, x_21);
x_24 = lean_array_uget(x_20, x_23);
x_25 = l_List_elem___main___at_Lean_Occurrences_contains___spec__1(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_19, x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_array_uset(x_20, x_23, x_28);
x_30 = lean_nat_dec_le(x_27, x_21);
lean_dec(x_21);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = l_Std_HashSetImp_expand___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__2(x_27, x_29);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_21);
lean_inc(x_2);
x_33 = l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(x_24, x_2, x_2);
lean_dec(x_2);
x_34 = lean_array_uset(x_20, x_23, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_2, 1, x_10);
x_11 = 1;
x_12 = l_Lean_Meta_admit(x_6, x_11, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_2);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_24);
x_26 = 1;
x_27 = l_Lean_Meta_admit(x_6, x_26, x_3, x_4);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_25);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_33 = x_27;
} else {
 lean_dec_ref(x_27);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(1, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_5, 0);
lean_inc(x_35);
lean_dec(x_5);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = !lean_is_exclusive(x_2);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_2, 0);
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
lean_dec(x_35);
x_40 = l_Std_HashSetImp_insert___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__1(x_38, x_39);
lean_ctor_set(x_2, 0, x_40);
x_41 = l_Lean_Meta_DepElim_assignGoalOf(x_1, x_36, x_3, x_4);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_2);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_2, 0);
x_51 = lean_ctor_get(x_2, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_2);
x_52 = lean_ctor_get(x_35, 0);
lean_inc(x_52);
lean_dec(x_35);
x_53 = l_Std_HashSetImp_insert___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__1(x_50, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
x_55 = l_Lean_Meta_DepElim_assignGoalOf(x_1, x_36, x_3, x_4);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_54);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_54);
x_59 = lean_ctor_get(x_55, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_61 = x_55;
} else {
 lean_dec_ref(x_55);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
}
lean_object* l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_replace___main___at___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_name_eq(x_4, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_5, x_2);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_free_object(x_1);
lean_dec(x_4);
return x_5;
}
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_name_eq(x_8, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_9, x_2);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_dec(x_8);
return x_9;
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_25; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_9 = x_2;
} else {
 lean_dec_ref(x_2);
 x_9 = lean_box(0);
}
x_25 = lean_ctor_get(x_7, 3);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 5)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_7);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 1);
x_30 = lean_ctor_get(x_7, 2);
x_31 = lean_ctor_get(x_7, 3);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_25, 1);
x_34 = lean_ctor_get(x_25, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_26, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_dec(x_26);
lean_inc(x_1);
lean_inc(x_35);
x_37 = l_Lean_Meta_assignExprMVar(x_35, x_1, x_3, x_4);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Meta_instantiateMVars(x_29, x_3, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_30, x_35);
lean_dec(x_35);
lean_ctor_set(x_25, 0, x_36);
x_43 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_25, x_3, x_41);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_ctor_set(x_7, 3, x_44);
lean_ctor_set(x_7, 2, x_42);
lean_ctor_set(x_7, 1, x_40);
x_10 = x_7;
x_11 = x_45;
goto block_24;
}
else
{
uint8_t x_46; 
lean_dec(x_36);
lean_dec(x_35);
lean_free_object(x_25);
lean_dec(x_33);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
return x_37;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_37, 0);
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_37);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_25, 1);
lean_inc(x_50);
lean_dec(x_25);
x_51 = lean_ctor_get(x_26, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_26, 1);
lean_inc(x_52);
lean_dec(x_26);
lean_inc(x_1);
lean_inc(x_51);
x_53 = l_Lean_Meta_assignExprMVar(x_51, x_1, x_3, x_4);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_Meta_instantiateMVars(x_29, x_3, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_30, x_51);
lean_dec(x_51);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_52);
lean_ctor_set(x_59, 1, x_50);
x_60 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_59, x_3, x_57);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_ctor_set(x_7, 3, x_61);
lean_ctor_set(x_7, 2, x_58);
lean_ctor_set(x_7, 1, x_56);
x_10 = x_7;
x_11 = x_62;
goto block_24;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_free_object(x_7);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_63 = lean_ctor_get(x_53, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_53, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_65 = x_53;
} else {
 lean_dec_ref(x_53);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_67 = lean_ctor_get(x_7, 0);
x_68 = lean_ctor_get(x_7, 1);
x_69 = lean_ctor_get(x_7, 2);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_7);
x_70 = lean_ctor_get(x_25, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_71 = x_25;
} else {
 lean_dec_ref(x_25);
 x_71 = lean_box(0);
}
x_72 = lean_ctor_get(x_26, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_26, 1);
lean_inc(x_73);
lean_dec(x_26);
lean_inc(x_1);
lean_inc(x_72);
x_74 = l_Lean_Meta_assignExprMVar(x_72, x_1, x_3, x_4);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = l_Lean_Meta_instantiateMVars(x_68, x_3, x_75);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_69, x_72);
lean_dec(x_72);
if (lean_is_scalar(x_71)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_71;
}
lean_ctor_set(x_80, 0, x_73);
lean_ctor_set(x_80, 1, x_70);
x_81 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_80, x_3, x_78);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_84, 0, x_67);
lean_ctor_set(x_84, 1, x_77);
lean_ctor_set(x_84, 2, x_79);
lean_ctor_set(x_84, 3, x_82);
x_10 = x_84;
x_11 = x_83;
goto block_24;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_85 = lean_ctor_get(x_74, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_74, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_87 = x_74;
} else {
 lean_dec_ref(x_74);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
else
{
lean_dec(x_26);
lean_dec(x_25);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
}
block_24:
{
lean_object* x_12; 
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3(x_1, x_8, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
if (lean_is_scalar(x_9)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_9;
}
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
if (lean_is_scalar(x_9)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_9;
}
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("as-pattern step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_29; uint8_t x_30; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_29 = lean_ctor_get(x_5, 4);
lean_inc(x_29);
x_30 = lean_ctor_get_uint8(x_29, sizeof(void*)*1);
lean_dec(x_29);
if (x_30 == 0)
{
x_7 = x_5;
goto block_28;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_32 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_31, x_4, x_5);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_7 = x_35;
goto block_28;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3;
x_38 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_31, x_37, x_4, x_36);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_7 = x_39;
goto block_28;
}
}
block_28:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3(x_11, x_12, x_4, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_2, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_dec(x_18);
lean_ctor_set(x_2, 2, x_14);
x_19 = lean_apply_4(x_1, x_2, x_3, x_4, x_15);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set(x_22, 2, x_14);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_apply_4(x_1, x_22, x_3, x_4, x_15);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
}
lean_object* l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_25; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_9 = x_2;
} else {
 lean_dec_ref(x_2);
 x_9 = lean_box(0);
}
x_25 = lean_ctor_get(x_7, 3);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_26 = l_Lean_Meta_isClassQuick___main___closed__1;
x_27 = l_unreachable_x21___rarg(x_26);
lean_inc(x_3);
x_28 = lean_apply_2(x_27, x_3, x_4);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_10 = x_29;
x_11 = x_30;
goto block_24;
}
else
{
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_25, 0);
lean_inc(x_35);
switch (lean_obj_tag(x_35)) {
case 0:
{
uint8_t x_36; 
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_7);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_7, 3);
lean_dec(x_37);
x_38 = lean_ctor_get(x_25, 1);
lean_inc(x_38);
lean_dec(x_25);
lean_ctor_set(x_7, 3, x_38);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_7, 0);
x_40 = lean_ctor_get(x_7, 1);
x_41 = lean_ctor_get(x_7, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_7);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_dec(x_25);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set(x_43, 1, x_40);
lean_ctor_set(x_43, 2, x_41);
lean_ctor_set(x_43, 3, x_42);
x_10 = x_43;
x_11 = x_4;
goto block_24;
}
}
case 1:
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_7);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_7, 0);
x_46 = lean_ctor_get(x_7, 1);
x_47 = lean_ctor_get(x_7, 2);
x_48 = lean_ctor_get(x_7, 3);
lean_dec(x_48);
x_49 = lean_ctor_get(x_25, 1);
lean_inc(x_49);
lean_dec(x_25);
x_50 = lean_ctor_get(x_35, 0);
lean_inc(x_50);
lean_dec(x_35);
lean_inc(x_1);
lean_inc(x_50);
x_51 = l_Lean_Meta_assignExprMVar(x_50, x_1, x_3, x_4);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_Lean_Meta_instantiateMVars(x_46, x_3, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_47, x_50);
lean_dec(x_50);
x_57 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(x_49, x_3, x_55);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_ctor_set(x_7, 3, x_58);
lean_ctor_set(x_7, 2, x_56);
lean_ctor_set(x_7, 1, x_54);
x_10 = x_7;
x_11 = x_59;
goto block_24;
}
else
{
uint8_t x_60; 
lean_dec(x_50);
lean_dec(x_49);
lean_free_object(x_7);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_51);
if (x_60 == 0)
{
return x_51;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_51, 0);
x_62 = lean_ctor_get(x_51, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_51);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_7, 0);
x_65 = lean_ctor_get(x_7, 1);
x_66 = lean_ctor_get(x_7, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_7);
x_67 = lean_ctor_get(x_25, 1);
lean_inc(x_67);
lean_dec(x_25);
x_68 = lean_ctor_get(x_35, 0);
lean_inc(x_68);
lean_dec(x_35);
lean_inc(x_1);
lean_inc(x_68);
x_69 = l_Lean_Meta_assignExprMVar(x_68, x_1, x_3, x_4);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l_Lean_Meta_instantiateMVars(x_65, x_3, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_66, x_68);
lean_dec(x_68);
x_75 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(x_67, x_3, x_73);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_64);
lean_ctor_set(x_78, 1, x_72);
lean_ctor_set(x_78, 2, x_74);
lean_ctor_set(x_78, 3, x_76);
x_10 = x_78;
x_11 = x_77;
goto block_24;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_79 = lean_ctor_get(x_69, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_69, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_81 = x_69;
} else {
 lean_dec_ref(x_69);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
default: 
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_7);
x_83 = l_Lean_Meta_isClassQuick___main___closed__1;
x_84 = l_unreachable_x21___rarg(x_83);
lean_inc(x_3);
x_85 = lean_apply_2(x_84, x_3, x_4);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_10 = x_86;
x_11 = x_87;
goto block_24;
}
else
{
uint8_t x_88; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_85);
if (x_88 == 0)
{
return x_85;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_85, 0);
x_90 = lean_ctor_get(x_85, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_85);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
}
block_24:
{
lean_object* x_12; 
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__2(x_1, x_8, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
if (lean_is_scalar(x_9)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_9;
}
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
if (lean_is_scalar(x_9)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_9;
}
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("variable step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_30; uint8_t x_31; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_30 = lean_ctor_get(x_5, 4);
lean_inc(x_30);
x_31 = lean_ctor_get_uint8(x_30, sizeof(void*)*1);
lean_dec(x_30);
if (x_31 == 0)
{
x_7 = x_5;
goto block_29;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_33 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_32, x_4, x_5);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_7 = x_36;
goto block_29;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3;
x_39 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_32, x_38, x_4, x_37);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_7 = x_40;
goto block_29;
}
}
block_29:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
lean_inc(x_4);
x_14 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__2(x_11, x_13, x_4, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_2, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_dec(x_19);
lean_ctor_set(x_2, 2, x_15);
lean_ctor_set(x_2, 1, x_12);
x_20 = lean_apply_4(x_1, x_2, x_3, x_4, x_16);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 3);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_12);
lean_ctor_set(x_23, 2, x_15);
lean_ctor_set(x_23, 3, x_22);
x_24 = lean_apply_4(x_1, x_23, x_3, x_4, x_16);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_name_eq(x_6, x_1);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_5);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_FVarSubst_apply(x_1, x_9);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(x_5);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_box(1);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(x_11);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Expr_fvarId_x21(x_1);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_9, 1);
x_11 = l_Array_toList___rarg(x_10);
x_12 = lean_ctor_get(x_2, 1);
x_13 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(x_11);
lean_inc(x_12);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_8, x_14, x_6);
lean_dec(x_14);
lean_dec(x_8);
x_16 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_16);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_19 = l_Lean_Expr_fvarId_x21(x_1);
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_20, 1);
x_22 = l_Array_toList___rarg(x_21);
x_23 = lean_ctor_get(x_2, 1);
x_24 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__2(x_22);
lean_inc(x_23);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_19, x_25, x_17);
lean_dec(x_25);
lean_dec(x_19);
x_27 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(x_1, x_2, x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_8, x_5);
x_10 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(x_1, x_6);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_13, 2);
x_15 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_14, x_11);
x_16 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(x_1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor(x_8, x_6);
if (x_9 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 1);
x_15 = l___private_Lean_Meta_EqnCompiler_DepElim_22__isFirstPatternCtor(x_14, x_12);
if (x_15 == 0)
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_13;
x_3 = x_17;
goto _start;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_4, 2);
x_10 = lean_ctor_get(x_4, 3);
x_11 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_12 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_13 = l_unreachable_x21___rarg(x_12);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
lean_object* x_14; 
lean_free_object(x_1);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 2)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_10, 1);
x_17 = lean_ctor_get(x_10, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_14, 3);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_List_append___rarg(x_18, x_16);
lean_ctor_set(x_4, 3, x_19);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_4);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_ctor_get(x_14, 3);
lean_inc(x_21);
lean_dec(x_14);
x_22 = l_List_append___rarg(x_21, x_20);
lean_ctor_set(x_4, 3, x_22);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_11);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_14);
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_10, 1);
lean_dec(x_25);
x_26 = lean_ctor_get(x_10, 0);
lean_dec(x_26);
x_27 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_28 = l_unreachable_x21___rarg(x_27);
lean_ctor_set(x_10, 1, x_11);
lean_ctor_set(x_10, 0, x_28);
return x_10;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_10);
x_29 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_30 = l_unreachable_x21___rarg(x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_11);
return x_31;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_1, 1);
x_33 = lean_ctor_get(x_4, 0);
x_34 = lean_ctor_get(x_4, 1);
x_35 = lean_ctor_get(x_4, 2);
x_36 = lean_ctor_get(x_4, 3);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_4);
x_37 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(x_32);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_38 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_39 = l_unreachable_x21___rarg(x_38);
lean_ctor_set(x_1, 1, x_37);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; 
lean_free_object(x_1);
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 2)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_42 = x_36;
} else {
 lean_dec_ref(x_36);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_40, 3);
lean_inc(x_43);
lean_dec(x_40);
x_44 = l_List_append___rarg(x_43, x_41);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_33);
lean_ctor_set(x_45, 1, x_34);
lean_ctor_set(x_45, 2, x_35);
lean_ctor_set(x_45, 3, x_44);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_37);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_40);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_47 = x_36;
} else {
 lean_dec_ref(x_36);
 x_47 = lean_box(0);
}
x_48 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_49 = l_unreachable_x21___rarg(x_48);
if (lean_is_scalar(x_47)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_47;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_37);
return x_50;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get(x_1, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_1);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_51, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_51, 3);
lean_inc(x_56);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 lean_ctor_release(x_51, 2);
 lean_ctor_release(x_51, 3);
 x_57 = x_51;
} else {
 lean_dec_ref(x_51);
 x_57 = lean_box(0);
}
x_58 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(x_52);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
x_59 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_60 = l_unreachable_x21___rarg(x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
else
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_56, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 2)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_64 = x_56;
} else {
 lean_dec_ref(x_56);
 x_64 = lean_box(0);
}
x_65 = lean_ctor_get(x_62, 3);
lean_inc(x_65);
lean_dec(x_62);
x_66 = l_List_append___rarg(x_65, x_63);
if (lean_is_scalar(x_57)) {
 x_67 = lean_alloc_ctor(0, 4, 0);
} else {
 x_67 = x_57;
}
lean_ctor_set(x_67, 0, x_53);
lean_ctor_set(x_67, 1, x_54);
lean_ctor_set(x_67, 2, x_55);
lean_ctor_set(x_67, 3, x_66);
if (lean_is_scalar(x_64)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_64;
}
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_58);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_62);
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_69 = x_56;
} else {
 lean_dec_ref(x_56);
 x_69 = lean_box(0);
}
x_70 = l_Lean_Meta_DepElim_Alt_Inhabited;
x_71 = l_unreachable_x21___rarg(x_70);
if (lean_is_scalar(x_69)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_69;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_58);
return x_72;
}
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__7(x_1, x_9, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_29 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_27, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__7(x_1, x_28, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_28);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_44 = x_29;
} else {
 lean_dec_ref(x_29);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_9 = l_Lean_Meta_DepElim_Alt_copy(x_7, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_8, x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_free_object(x_1);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_1, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_1);
lean_inc(x_2);
x_28 = l_Lean_Meta_DepElim_Alt_copy(x_26, x_2, x_3);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_27, x_2, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_32);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_39 = x_31;
} else {
 lean_dec_ref(x_31);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_27);
lean_dec(x_2);
x_41 = lean_ctor_get(x_28, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_43 = x_28;
} else {
 lean_dec_ref(x_28);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_7);
x_13 = lean_nat_dec_lt(x_8, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_15 = lean_array_fget(x_7, x_8);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_8, x_16);
lean_dec(x_8);
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_Array_toList___rarg(x_20);
lean_dec(x_20);
lean_inc(x_4);
x_23 = l_List_append___rarg(x_22, x_4);
x_24 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(x_21, x_23);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
x_26 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(x_3, x_15, x_25);
x_27 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(x_15, x_26);
x_28 = lean_ctor_get(x_2, 2);
lean_inc(x_28);
x_29 = lean_box(0);
x_30 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5(x_15, x_28, x_29);
lean_dec(x_15);
x_31 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__6(x_30);
lean_inc(x_10);
x_32 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__7(x_21, x_31, x_10, x_11);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_10);
x_35 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_33, x_10, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_19);
lean_ctor_set(x_38, 1, x_24);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set(x_38, 3, x_27);
lean_inc(x_1);
lean_inc(x_10);
x_39 = lean_apply_4(x_1, x_38, x_9, x_10, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_8 = x_17;
x_9 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_39);
if (x_43 == 0)
{
return x_39;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_39);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_35);
if (x_47 == 0)
{
return x_35;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_35, 0);
x_49 = lean_ctor_get(x_35, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_35);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_32);
if (x_51 == 0)
{
return x_32;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_32, 0);
x_53 = lean_ctor_get(x_32, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_32);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("constructor step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_27; uint8_t x_28; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_27 = lean_ctor_get(x_5, 4);
lean_inc(x_27);
x_28 = lean_ctor_get_uint8(x_27, sizeof(void*)*1);
lean_dec(x_27);
if (x_28 == 0)
{
x_7 = x_5;
goto block_26;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_30 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_29, x_4, x_5);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_7 = x_33;
goto block_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3;
x_36 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_29, x_35, x_4, x_34);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_7 = x_37;
goto block_26;
}
}
block_26:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = l_Lean_Expr_fvarId_x21(x_11);
x_15 = l_Array_empty___closed__1;
x_16 = 0;
lean_inc(x_14);
x_17 = l_Lean_Meta_Cases_cases(x_13, x_14, x_15, x_16, x_4, x_7);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9(x_1, x_2, x_11, x_12, x_14, x_18, x_18, x_20, x_3, x_4, x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_11);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__5(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_12;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compile pattern matching, inductive type expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_1);
x_5 = l_Lean_indentExpr(x_4);
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3;
x_7 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_box(0);
x_9 = l_Lean_Meta_throwOther___rarg(x_7, x_8, x_2, x_3);
return x_9;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_8, x_2, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = l_Lean_Meta_DepElim_Pattern_instantiateMVars___main(x_18, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_19, x_2, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_24);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
uint8_t l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_name_eq(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_name_eq(x_6, x_1);
x_9 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(x_1, x_2, x_7);
if (x_8 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
lean_ctor_set(x_3, 1, x_10);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = l_Array_toList___rarg(x_2);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = lean_name_eq(x_13, x_1);
x_16 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(x_1, x_2, x_14);
if (x_15 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
x_20 = l_Array_toList___rarg(x_2);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
}
}
}
}
lean_object* l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_7);
x_10 = lean_metavar_ctx_is_expr_assigned(x_9, x_7);
if (x_10 == 0)
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_8;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_free_object(x_1);
lean_dec(x_7);
x_1 = x_8;
goto _start;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_inc(x_13);
x_16 = lean_metavar_ctx_is_expr_assigned(x_15, x_13);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_2);
x_1 = x_14;
x_2 = x_17;
goto _start;
}
else
{
lean_dec(x_13);
x_1 = x_14;
goto _start;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ill-format alternative");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_6);
x_13 = lean_nat_dec_lt(x_7, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
x_14 = l_Array_toList___rarg(x_5);
x_15 = l_Array_toList___rarg(x_9);
lean_dec(x_9);
x_16 = 1;
x_17 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_4);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_15);
lean_inc(x_10);
lean_inc(x_17);
x_18 = l_Lean_Meta_DepElim_Pattern_toExpr___main(x_16, x_17, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
x_24 = lean_ctor_get(x_1, 2);
x_25 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_26 = l_Lean_Meta_assignExprMVar(x_2, x_19, x_10, x_20);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_25, x_10, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_17);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_Meta_instantiateMVars(x_23, x_10, x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2(x_2, x_24);
x_36 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(x_2, x_8, x_24);
lean_dec(x_8);
lean_dec(x_2);
x_37 = l_List_join___main___rarg(x_36);
x_38 = lean_box(0);
if (x_35 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_37);
lean_dec(x_33);
lean_dec(x_31);
lean_free_object(x_1);
lean_dec(x_22);
x_39 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3;
x_40 = lean_box(0);
x_41 = l_Lean_Meta_throwOther___rarg(x_39, x_40, x_10, x_34);
lean_dec(x_10);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; uint8_t x_47; 
x_46 = l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4(x_37, x_38, x_10, x_34);
lean_dec(x_10);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = l_List_reverse___rarg(x_48);
lean_ctor_set(x_1, 3, x_31);
lean_ctor_set(x_1, 2, x_49);
lean_ctor_set(x_1, 1, x_33);
lean_ctor_set(x_46, 0, x_1);
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_46, 0);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_46);
x_52 = l_List_reverse___rarg(x_50);
lean_ctor_set(x_1, 3, x_31);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_33);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_free_object(x_1);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_26);
if (x_54 == 0)
{
return x_26;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_26, 0);
x_56 = lean_ctor_get(x_26, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_26);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_1, 0);
x_59 = lean_ctor_get(x_1, 1);
x_60 = lean_ctor_get(x_1, 2);
x_61 = lean_ctor_get(x_1, 3);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_1);
lean_inc(x_2);
x_62 = l_Lean_Meta_assignExprMVar(x_2, x_19, x_10, x_20);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_61, x_10, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_17);
lean_ctor_set(x_67, 1, x_65);
x_68 = l_Lean_Meta_instantiateMVars(x_59, x_10, x_66);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2(x_2, x_60);
x_72 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(x_2, x_8, x_60);
lean_dec(x_8);
lean_dec(x_2);
x_73 = l_List_join___main___rarg(x_72);
x_74 = lean_box(0);
if (x_71 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_73);
lean_dec(x_69);
lean_dec(x_67);
lean_dec(x_58);
x_75 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3;
x_76 = lean_box(0);
x_77 = l_Lean_Meta_throwOther___rarg(x_75, x_76, x_10, x_70);
lean_dec(x_10);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_82 = l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4(x_73, x_74, x_10, x_70);
lean_dec(x_10);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_85 = x_82;
} else {
 lean_dec_ref(x_82);
 x_85 = lean_box(0);
}
x_86 = l_List_reverse___rarg(x_83);
x_87 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_87, 0, x_58);
lean_ctor_set(x_87, 1, x_69);
lean_ctor_set(x_87, 2, x_86);
lean_ctor_set(x_87, 3, x_67);
if (lean_is_scalar(x_85)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_85;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_84);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_2);
x_89 = lean_ctor_get(x_62, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_62, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_91 = x_62;
} else {
 lean_dec_ref(x_62);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_18);
if (x_93 == 0)
{
return x_18;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_18, 0);
x_95 = lean_ctor_get(x_18, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_18);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_array_fget(x_6, x_7);
x_98 = l_Lean_Meta_instantiateMVars(x_97, x_10, x_11);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
if (lean_obj_tag(x_99) == 2)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_108 = lean_ctor_get(x_99, 0);
lean_inc(x_108);
lean_dec(x_99);
x_109 = lean_unsigned_to_nat(1u);
x_110 = lean_nat_add(x_7, x_109);
lean_dec(x_7);
lean_inc(x_108);
x_111 = lean_array_push(x_8, x_108);
x_112 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_112, 0, x_108);
x_113 = lean_array_push(x_9, x_112);
x_7 = x_110;
x_8 = x_111;
x_9 = x_113;
x_11 = x_100;
goto _start;
}
else
{
lean_object* x_115; 
x_115 = lean_box(0);
x_101 = x_115;
goto block_107;
}
block_107:
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_101);
x_102 = lean_unsigned_to_nat(1u);
x_103 = lean_nat_add(x_7, x_102);
lean_dec(x_7);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_99);
x_105 = lean_array_push(x_9, x_104);
x_7 = x_103;
x_9 = x_105;
x_11 = x_100;
goto _start;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_filterAuxM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ctorName: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", resultType: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", expectedType: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Lean_mkConst(x_3, x_4);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_5, x_5, x_10, x_9);
lean_inc(x_7);
x_12 = l_Lean_Meta_inferType(x_11, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = 0;
lean_inc(x_7);
x_17 = l_Lean_Meta_forallMetaTelescopeReducing(x_13, x_15, x_16, x_7, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_50; uint8_t x_51; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_50 = lean_ctor_get(x_20, 4);
lean_inc(x_50);
x_51 = lean_ctor_get_uint8(x_50, sizeof(void*)*1);
lean_dec(x_50);
if (x_51 == 0)
{
x_23 = x_20;
goto block_49;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
x_53 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_52, x_7, x_20);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_23 = x_56;
goto block_49;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
lean_inc(x_3);
x_58 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_58, 0, x_3);
x_59 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3;
x_60 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6;
x_62 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
lean_inc(x_22);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_22);
x_64 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9;
x_66 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_6);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_6);
x_68 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_52, x_68, x_7, x_57);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_23 = x_70;
goto block_49;
}
}
block_49:
{
lean_object* x_24; 
lean_inc(x_7);
x_24 = l_Lean_Meta_isExprDefEq(x_22, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
lean_ctor_set(x_24, 0, x_15);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_15);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = l_Array_empty___closed__1;
x_33 = l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main(x_1, x_2, x_3, x_4, x_5, x_21, x_10, x_32, x_32, x_7, x_31);
lean_dec(x_21);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_33);
if (x_41 == 0)
{
return x_33;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_33, 0);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_33);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_24);
if (x_45 == 0)
{
return x_24;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_24, 0);
x_47 = lean_ctor_get(x_24, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_24);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_17);
if (x_71 == 0)
{
return x_17;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_17, 0);
x_73 = lean_ctor_get(x_17, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_17);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_12);
if (x_75 == 0)
{
return x_12;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_12, 0);
x_77 = lean_ctor_get(x_12, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_12);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_inc(x_1);
x_13 = l_Lean_Meta_DepElim_Alt_copyCore(x_1, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Meta_MVarRenaming_find_x21(x_16, x_2);
lean_dec(x_16);
lean_inc(x_18);
x_19 = l_Lean_Meta_getMVarDecl(x_18, x_7, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 2);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_7);
x_23 = l_Lean_Meta_whnfD(x_22, x_7, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Expr_getAppNumArgsAux___main(x_24, x_26);
x_28 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_27);
x_29 = lean_mk_array(x_27, x_28);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_sub(x_27, x_30);
lean_dec(x_27);
lean_inc(x_24);
x_32 = l___private_Lean_Expr_3__getAppArgsAux___main(x_24, x_29, x_31);
x_33 = lean_ctor_get(x_4, 1);
x_34 = l_Array_extract___rarg(x_32, x_26, x_33);
lean_dec(x_32);
lean_inc(x_7);
lean_inc(x_3);
x_35 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f(x_17, x_18, x_11, x_3, x_34, x_24, x_7, x_25);
lean_dec(x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
lean_free_object(x_6);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_6 = x_12;
x_8 = x_37;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
lean_dec(x_36);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_6, 0, x_40);
x_5 = x_6;
x_6 = x_12;
x_8 = x_39;
goto _start;
}
}
else
{
uint8_t x_42; 
lean_free_object(x_6);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_35);
if (x_42 == 0)
{
return x_35;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_35, 0);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_35);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_17);
lean_free_object(x_6);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
return x_23;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_23, 0);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_23);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_18);
lean_dec(x_17);
lean_free_object(x_6);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_19);
if (x_50 == 0)
{
return x_19;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_19, 0);
x_52 = lean_ctor_get(x_19, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_19);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_free_object(x_6);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_13);
if (x_54 == 0)
{
return x_13;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_13, 0);
x_56 = lean_ctor_get(x_13, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_13);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_6, 0);
x_59 = lean_ctor_get(x_6, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_6);
lean_inc(x_7);
lean_inc(x_1);
x_60 = l_Lean_Meta_DepElim_Alt_copyCore(x_1, x_7, x_8);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = l_Lean_Meta_MVarRenaming_find_x21(x_63, x_2);
lean_dec(x_63);
lean_inc(x_65);
x_66 = l_Lean_Meta_getMVarDecl(x_65, x_7, x_62);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 2);
lean_inc(x_69);
lean_dec(x_67);
lean_inc(x_7);
x_70 = l_Lean_Meta_whnfD(x_69, x_7, x_68);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_unsigned_to_nat(0u);
x_74 = l_Lean_Expr_getAppNumArgsAux___main(x_71, x_73);
x_75 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_74);
x_76 = lean_mk_array(x_74, x_75);
x_77 = lean_unsigned_to_nat(1u);
x_78 = lean_nat_sub(x_74, x_77);
lean_dec(x_74);
lean_inc(x_71);
x_79 = l___private_Lean_Expr_3__getAppArgsAux___main(x_71, x_76, x_78);
x_80 = lean_ctor_get(x_4, 1);
x_81 = l_Array_extract___rarg(x_79, x_73, x_80);
lean_dec(x_79);
lean_inc(x_7);
lean_inc(x_3);
x_82 = l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f(x_64, x_65, x_58, x_3, x_81, x_71, x_7, x_72);
lean_dec(x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_6 = x_59;
x_8 = x_84;
goto _start;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_86);
lean_dec(x_82);
x_87 = lean_ctor_get(x_83, 0);
lean_inc(x_87);
lean_dec(x_83);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_5);
x_5 = x_88;
x_6 = x_59;
x_8 = x_86;
goto _start;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_59);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_90 = lean_ctor_get(x_82, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_82, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_92 = x_82;
} else {
 lean_dec_ref(x_82);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_94 = lean_ctor_get(x_70, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_70, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_96 = x_70;
} else {
 lean_dec_ref(x_70);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_98 = lean_ctor_get(x_66, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_66, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_100 = x_66;
} else {
 lean_dec_ref(x_66);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_102 = lean_ctor_get(x_60, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_60, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_104 = x_60;
} else {
 lean_dec_ref(x_60);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_inc(x_2);
x_6 = l_Lean_Meta_getMVarDecl(x_2, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_3);
x_10 = l_Lean_Meta_whnfD(x_9, x_3, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_getAppFn___main(x_11);
if (lean_obj_tag(x_13) == 4)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_environment_find(x_5, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(x_11, x_3, x_12);
lean_dec(x_3);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 5)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = lean_ctor_get(x_19, 4);
lean_inc(x_21);
x_22 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1(x_1, x_2, x_15, x_19, x_20, x_21, x_3, x_12);
lean_dec(x_19);
lean_dec(x_2);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(x_11, x_3, x_12);
lean_dec(x_3);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg(x_11, x_3, x_12);
lean_dec(x_3);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_6);
if (x_29 == 0)
{
return x_6;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_6, 0);
x_31 = lean_ctor_get(x_6, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_6);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_Meta_isClassQuick___main___closed__1;
x_10 = l_unreachable_x21___rarg(x_9);
lean_inc(x_3);
x_11 = lean_apply_2(x_10, x_3, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_1 = x_12;
x_2 = x_8;
x_4 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_7, 0);
lean_inc(x_19);
switch (lean_obj_tag(x_19)) {
case 1:
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_6);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_6, 3);
lean_dec(x_22);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
lean_ctor_set(x_6, 3, x_23);
lean_inc(x_3);
x_25 = l___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt(x_6, x_24, x_3, x_4);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_List_append___rarg(x_26, x_1);
x_1 = x_28;
x_2 = x_20;
x_4 = x_27;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_6, 0);
x_35 = lean_ctor_get(x_6, 1);
x_36 = lean_ctor_get(x_6, 2);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_6);
x_37 = lean_ctor_get(x_7, 1);
lean_inc(x_37);
lean_dec(x_7);
x_38 = lean_ctor_get(x_19, 0);
lean_inc(x_38);
lean_dec(x_19);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_34);
lean_ctor_set(x_39, 1, x_35);
lean_ctor_set(x_39, 2, x_36);
lean_ctor_set(x_39, 3, x_37);
lean_inc(x_3);
x_40 = l___private_Lean_Meta_EqnCompiler_DepElim_27__expandAlt(x_39, x_38, x_3, x_4);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_List_append___rarg(x_41, x_1);
x_1 = x_43;
x_2 = x_20;
x_4 = x_42;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_1);
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
case 2:
{
uint8_t x_49; 
lean_dec(x_19);
x_49 = !lean_is_exclusive(x_7);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_7, 1);
lean_dec(x_50);
x_51 = lean_ctor_get(x_7, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_6);
x_1 = x_7;
x_2 = x_52;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_7);
x_54 = lean_ctor_get(x_2, 1);
lean_inc(x_54);
lean_dec(x_2);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_6);
lean_ctor_set(x_55, 1, x_1);
x_1 = x_55;
x_2 = x_54;
goto _start;
}
}
default: 
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_57 = lean_ctor_get(x_2, 1);
lean_inc(x_57);
lean_dec(x_2);
x_58 = l_Lean_Meta_isClassQuick___main___closed__1;
x_59 = l_unreachable_x21___rarg(x_58);
lean_inc(x_3);
x_60 = lean_apply_2(x_59, x_3, x_4);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_1 = x_61;
x_2 = x_57;
x_4 = x_62;
goto _start;
}
else
{
uint8_t x_64; 
lean_dec(x_57);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_60);
if (x_64 == 0)
{
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_60, 0);
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_60);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_box(0);
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
x_13 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___spec__1(x_7, x_11, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_List_reverse___rarg(x_14);
lean_ctor_set(x_1, 2, x_16);
x_17 = lean_apply_4(x_2, x_1, x_3, x_5, x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
x_24 = lean_ctor_get(x_1, 2);
x_25 = lean_ctor_get(x_1, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
lean_inc(x_5);
x_26 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___spec__1(x_7, x_24, x_5, x_6);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_List_reverse___rarg(x_27);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_23);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_25);
x_31 = lean_apply_4(x_2, x_30, x_3, x_5, x_28);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_34 = x_26;
} else {
 lean_dec_ref(x_26);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getEnv___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("complete step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1___boxed), 6, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_3);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1;
x_8 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = lean_ctor_get(x_5, 4);
lean_inc(x_9);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_2, x_8, x_4, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_13 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_12, x_4, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_2, x_8, x_4, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4;
x_20 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_12, x_19, x_4, x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_2, x_8, x_4, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
if (lean_obj_tag(x_7) == 3)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Array_contains___at_Lean_Meta_CheckAssignment_check___main___spec__2(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_1, x_9);
x_1 = x_11;
x_2 = x_8;
goto _start;
}
else
{
lean_dec(x_9);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_14; 
lean_dec(x_7);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_2 = x_14;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Array_empty___closed__1;
x_4 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues___spec__1(x_3, x_2);
return x_4;
}
}
uint8_t l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_4) == 1)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar(x_5);
if (x_7 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_30__isFirstPatternVar(x_10);
if (x_12 == 0)
{
lean_dec(x_10);
x_1 = x_11;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_1);
x_10 = l___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues(x_1);
x_11 = l_Lean_Expr_fvarId_x21(x_2);
x_12 = lean_array_fget(x_10, x_3);
lean_dec(x_10);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_11, x_13, x_8);
lean_dec(x_13);
lean_dec(x_11);
x_15 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(x_1, x_2, x_3, lean_box(0), x_9);
lean_ctor_set(x_5, 1, x_15);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
lean_inc(x_1);
x_18 = l___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues(x_1);
x_19 = l_Lean_Expr_fvarId_x21(x_2);
x_20 = lean_array_fget(x_18, x_3);
lean_dec(x_18);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_19, x_21, x_16);
lean_dec(x_21);
lean_dec(x_19);
x_23 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(x_1, x_2, x_3, lean_box(0), x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Meta_CaseValueSubgoals_inhabited;
x_9 = lean_array_get(x_8, x_1, x_2);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_10, x_6);
lean_dec(x_10);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = l_Lean_Meta_CaseValueSubgoals_inhabited;
x_16 = lean_array_get(x_15, x_1, x_2);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_17, x_13);
lean_dec(x_17);
x_19 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(x_1, x_2, x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 1:
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
case 3:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_expr_eqv(x_15, x_1);
lean_dec(x_15);
if (x_16 == 0)
{
lean_free_object(x_6);
lean_dec(x_5);
x_2 = x_14;
goto _start;
}
else
{
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
default: 
{
lean_object* x_19; 
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_5);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
x_2 = x_19;
goto _start;
}
}
}
else
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_6, 0);
lean_inc(x_21);
lean_dec(x_6);
switch (lean_obj_tag(x_21)) {
case 1:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_3);
x_2 = x_22;
x_3 = x_23;
goto _start;
}
case 3:
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_expr_eqv(x_26, x_1);
lean_dec(x_26);
if (x_27 == 0)
{
lean_dec(x_5);
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_5);
lean_ctor_set(x_29, 1, x_3);
x_2 = x_25;
x_3 = x_29;
goto _start;
}
}
default: 
{
lean_object* x_31; 
lean_dec(x_21);
lean_dec(x_5);
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
x_2 = x_31;
goto _start;
}
}
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__5(x_1, x_9, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_29 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_27, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__5(x_1, x_28, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_28);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_44 = x_29;
} else {
 lean_dec_ref(x_29);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_25; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_9 = x_2;
} else {
 lean_dec_ref(x_2);
 x_9 = lean_box(0);
}
x_25 = lean_ctor_get(x_7, 3);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_26 = l_Lean_Meta_isClassQuick___main___closed__1;
x_27 = l_unreachable_x21___rarg(x_26);
lean_inc(x_3);
x_28 = lean_apply_2(x_27, x_3, x_4);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_10 = x_29;
x_11 = x_30;
goto block_24;
}
else
{
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_25, 0);
lean_inc(x_35);
switch (lean_obj_tag(x_35)) {
case 1:
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_7);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_7, 0);
x_38 = lean_ctor_get(x_7, 1);
x_39 = lean_ctor_get(x_7, 2);
x_40 = lean_ctor_get(x_7, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_dec(x_25);
x_42 = lean_ctor_get(x_35, 0);
lean_inc(x_42);
lean_dec(x_35);
lean_inc(x_1);
lean_inc(x_42);
x_43 = l_Lean_Meta_assignExprMVar(x_42, x_1, x_3, x_4);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_41, x_3, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l_Lean_Meta_instantiateMVars(x_38, x_3, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_39, x_42);
lean_dec(x_42);
lean_ctor_set(x_7, 3, x_46);
lean_ctor_set(x_7, 2, x_51);
lean_ctor_set(x_7, 1, x_49);
x_10 = x_7;
x_11 = x_50;
goto block_24;
}
else
{
uint8_t x_52; 
lean_dec(x_42);
lean_dec(x_41);
lean_free_object(x_7);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_43);
if (x_52 == 0)
{
return x_43;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_43, 0);
x_54 = lean_ctor_get(x_43, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_43);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_7, 0);
x_57 = lean_ctor_get(x_7, 1);
x_58 = lean_ctor_get(x_7, 2);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_7);
x_59 = lean_ctor_get(x_25, 1);
lean_inc(x_59);
lean_dec(x_25);
x_60 = lean_ctor_get(x_35, 0);
lean_inc(x_60);
lean_dec(x_35);
lean_inc(x_1);
lean_inc(x_60);
x_61 = l_Lean_Meta_assignExprMVar(x_60, x_1, x_3, x_4);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_59, x_3, x_62);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = l_Lean_Meta_instantiateMVars(x_57, x_3, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_58, x_60);
lean_dec(x_60);
x_70 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set(x_70, 3, x_64);
x_10 = x_70;
x_11 = x_68;
goto block_24;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_71 = lean_ctor_get(x_61, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_61, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_73 = x_61;
} else {
 lean_dec_ref(x_61);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
case 3:
{
uint8_t x_75; 
lean_dec(x_35);
x_75 = !lean_is_exclusive(x_7);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_7, 3);
lean_dec(x_76);
x_77 = lean_ctor_get(x_25, 1);
lean_inc(x_77);
lean_dec(x_25);
lean_ctor_set(x_7, 3, x_77);
x_10 = x_7;
x_11 = x_4;
goto block_24;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_7, 0);
x_79 = lean_ctor_get(x_7, 1);
x_80 = lean_ctor_get(x_7, 2);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_7);
x_81 = lean_ctor_get(x_25, 1);
lean_inc(x_81);
lean_dec(x_25);
x_82 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_82, 0, x_78);
lean_ctor_set(x_82, 1, x_79);
lean_ctor_set(x_82, 2, x_80);
lean_ctor_set(x_82, 3, x_81);
x_10 = x_82;
x_11 = x_4;
goto block_24;
}
}
default: 
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_7);
x_83 = l_Lean_Meta_isClassQuick___main___closed__1;
x_84 = l_unreachable_x21___rarg(x_83);
lean_inc(x_3);
x_85 = lean_apply_2(x_84, x_3, x_4);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_10 = x_86;
x_11 = x_87;
goto block_24;
}
else
{
uint8_t x_88; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_85);
if (x_88 == 0)
{
return x_85;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_85, 0);
x_90 = lean_ctor_get(x_85, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_85);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
}
block_24:
{
lean_object* x_12; 
x_12 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__6(x_1, x_8, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
if (lean_is_scalar(x_9)) {
 x_15 = lean_alloc_ctor(1, 2, 0);
} else {
 x_15 = x_9;
}
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
if (lean_is_scalar(x_9)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_9;
}
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_5);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_FVarSubst_apply(x_1, x_9);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_10, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_10, x_16);
lean_dec(x_10);
x_18 = lean_nat_sub(x_9, x_17);
x_19 = lean_nat_sub(x_18, x_16);
lean_dec(x_18);
x_20 = l_Lean_Meta_CaseValueSubgoals_inhabited;
x_21 = lean_array_get(x_20, x_8, x_19);
x_22 = lean_array_get_size(x_6);
x_23 = lean_nat_dec_lt(x_19, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_19);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
x_26 = lean_box(0);
x_27 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__1(x_24, x_26);
lean_inc(x_12);
x_28 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_27, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
lean_inc(x_3);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_25);
lean_inc(x_1);
lean_inc(x_12);
x_33 = lean_apply_4(x_1, x_32, x_11, x_12, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_10 = x_17;
x_11 = x_34;
x_13 = x_35;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_33);
if (x_37 == 0)
{
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 0);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_33);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_28);
if (x_41 == 0)
{
return x_28;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_28, 0);
x_43 = lean_ctor_get(x_28, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_28);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_array_fget(x_6, x_19);
x_46 = lean_ctor_get(x_21, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_21, 2);
lean_inc(x_47);
lean_dec(x_21);
x_48 = lean_ctor_get(x_2, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_2, 3);
lean_inc(x_49);
lean_inc(x_2);
x_50 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(x_2, x_4, x_19, lean_box(0), x_49);
x_51 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(x_8, x_19, x_50);
lean_dec(x_19);
x_52 = lean_box(0);
x_53 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4(x_45, x_48, x_52);
lean_inc(x_12);
lean_inc(x_47);
x_54 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__5(x_47, x_53, x_12, x_13);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_12);
x_57 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_55, x_12, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_12);
x_60 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__6(x_45, x_58, x_12, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_5);
x_63 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(x_47, x_5);
lean_dec(x_47);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_46);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_61);
lean_ctor_set(x_64, 3, x_51);
lean_inc(x_1);
lean_inc(x_12);
x_65 = lean_apply_4(x_1, x_64, x_11, x_12, x_62);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_10 = x_17;
x_11 = x_66;
x_13 = x_67;
goto _start;
}
else
{
uint8_t x_69; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_65);
if (x_69 == 0)
{
return x_65;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_65, 0);
x_71 = lean_ctor_get(x_65, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_65);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_51);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_60);
if (x_73 == 0)
{
return x_60;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_60, 0);
x_75 = lean_ctor_get(x_60, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_60);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_51);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_57);
if (x_77 == 0)
{
return x_57;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_57, 0);
x_79 = lean_ctor_get(x_57, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_57);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_51);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_54);
if (x_81 == 0)
{
return x_54;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_54, 0);
x_83 = lean_ctor_get(x_54, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_54);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
lean_object* x_85; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_11);
lean_ctor_set(x_85, 1, x_13);
return x_85;
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("value step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_27; uint8_t x_28; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_27 = lean_ctor_get(x_5, 4);
lean_inc(x_27);
x_28 = lean_ctor_get_uint8(x_27, sizeof(void*)*1);
lean_dec(x_27);
if (x_28 == 0)
{
x_7 = x_5;
goto block_26;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_30 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_29, x_4, x_5);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_7 = x_33;
goto block_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3;
x_36 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_29, x_35, x_4, x_34);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_7 = x_37;
goto block_26;
}
}
block_26:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_2);
x_13 = l___private_Lean_Meta_EqnCompiler_DepElim_29__collectValues(x_2);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = l_Lean_Expr_fvarId_x21(x_11);
x_16 = l_Lean_Meta_caseValue___closed__2;
lean_inc(x_15);
x_17 = l_Lean_Meta_caseValues(x_14, x_15, x_13, x_16, x_4, x_7);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
lean_inc(x_20);
x_21 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8(x_1, x_2, x_6, x_11, x_12, x_13, x_15, x_18, x_20, x_20, x_3, x_4, x_19);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_11);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_7, 1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthAux___main___rarg(x_9, x_10);
x_12 = l_Array_contains___at___private_Lean_Meta_FunInfo_3__collectDepsAux___main___spec__2(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_push(x_1, x_11);
x_1 = x_13;
x_2 = x_8;
goto _start;
}
else
{
lean_dec(x_11);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_2, 1);
x_2 = x_16;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = l_Array_empty___closed__1;
x_4 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_mkFVar(x_4);
x_7 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_mkFVar(x_8);
x_11 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_Lean_Meta_FVarSubst_apply(x_1, x_5);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_11 = l_Lean_Meta_FVarSubst_apply(x_1, x_9);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = l_Lean_Expr_fvarId_x21(x_1);
x_10 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
x_11 = lean_array_get(x_10, x_2, x_3);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Array_toList___rarg(x_12);
lean_dec(x_12);
x_14 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(x_13);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_9, x_15, x_7);
lean_dec(x_15);
lean_dec(x_9);
x_17 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(x_1, x_2, x_3, x_8);
lean_ctor_set(x_4, 1, x_17);
lean_ctor_set(x_4, 0, x_16);
return x_4;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = l_Lean_Expr_fvarId_x21(x_1);
x_21 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
x_22 = lean_array_get(x_21, x_2, x_3);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Array_toList___rarg(x_23);
lean_dec(x_23);
x_25 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__3(x_24);
x_26 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Meta_DepElim_Example_replaceFVarId___main(x_20, x_26, x_18);
lean_dec(x_26);
lean_dec(x_20);
x_28 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(x_1, x_2, x_3, x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
x_9 = lean_array_get(x_8, x_1, x_2);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_10, x_6);
lean_dec(x_10);
x_12 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
x_16 = lean_array_get(x_15, x_1, x_2);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Meta_DepElim_Example_applyFVarSubst___main(x_17, x_13);
lean_dec(x_17);
x_19 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(x_1, x_2, x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 1:
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
case 4:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_List_lengthAux___main___rarg(x_15, x_16);
lean_dec(x_15);
x_18 = lean_nat_dec_eq(x_17, x_1);
lean_dec(x_17);
if (x_18 == 0)
{
lean_free_object(x_6);
lean_dec(x_5);
x_2 = x_14;
goto _start;
}
else
{
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_5);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
default: 
{
lean_object* x_21; 
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_5);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_2 = x_21;
goto _start;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
switch (lean_obj_tag(x_23)) {
case 1:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_3);
x_2 = x_24;
x_3 = x_25;
goto _start;
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_List_lengthAux___main___rarg(x_28, x_29);
lean_dec(x_28);
x_31 = lean_nat_dec_eq(x_30, x_1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_5);
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_5);
lean_ctor_set(x_33, 1, x_3);
x_2 = x_27;
x_3 = x_33;
goto _start;
}
}
default: 
{
lean_object* x_35; 
lean_dec(x_23);
lean_dec(x_5);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
lean_dec(x_2);
x_2 = x_35;
goto _start;
}
}
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__7(x_1, x_9, x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_11);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_free_object(x_2);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_29 = l_Lean_Meta_DepElim_Alt_applyFVarSubst(x_1, x_27, x_3, x_4);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__7(x_1, x_28, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_30);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_40 = x_32;
} else {
 lean_dec_ref(x_32);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_28);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_ctor_get(x_29, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_44 = x_29;
} else {
 lean_dec_ref(x_29);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = 0;
lean_inc(x_5);
lean_inc(x_1);
x_13 = l_Lean_Meta_mkFreshExprMVar(x_1, x_11, x_12, x_5, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_10;
x_4 = x_16;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Expr_mvarId_x21(x_4);
lean_dec(x_4);
x_7 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_Expr_mvarId_x21(x_8);
lean_dec(x_8);
x_11 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Expr_mvarId_x21(x_4);
lean_dec(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Expr_mvarId_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_26; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_10 = x_3;
} else {
 lean_dec_ref(x_3);
 x_10 = lean_box(0);
}
x_26 = lean_ctor_get(x_8, 3);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_8);
x_27 = l_Lean_Meta_isClassQuick___main___closed__1;
x_28 = l_unreachable_x21___rarg(x_27);
lean_inc(x_4);
x_29 = lean_apply_2(x_28, x_4, x_5);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_11 = x_30;
x_12 = x_31;
goto block_25;
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_26, 0);
lean_inc(x_36);
switch (lean_obj_tag(x_36)) {
case 1:
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_8);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_8, 0);
x_39 = lean_ctor_get(x_8, 1);
x_40 = lean_ctor_get(x_8, 2);
x_41 = lean_ctor_get(x_8, 3);
lean_dec(x_41);
x_42 = lean_ctor_get(x_26, 1);
lean_inc(x_42);
lean_dec(x_26);
x_43 = lean_ctor_get(x_36, 0);
lean_inc(x_43);
lean_dec(x_36);
lean_inc(x_4);
lean_inc(x_1);
x_44 = l_Lean_Meta_getArrayArgType(x_1, x_4, x_5);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_box(0);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_45);
x_48 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8(x_45, x_2, x_2, x_47, x_4, x_46);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_4);
lean_inc(x_49);
x_51 = l_Lean_Meta_mkArrayLit(x_45, x_49, x_4, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_43);
x_54 = l_Lean_Meta_assignExprMVar(x_43, x_52, x_4, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_42, x_4, x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Meta_instantiateMVars(x_39, x_4, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_40, x_43);
lean_dec(x_43);
lean_inc(x_49);
x_63 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(x_49);
x_64 = l_List_append___rarg(x_63, x_62);
x_65 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(x_49);
x_66 = l_List_append___rarg(x_65, x_57);
lean_ctor_set(x_8, 3, x_66);
lean_ctor_set(x_8, 2, x_64);
lean_ctor_set(x_8, 1, x_60);
x_11 = x_8;
x_12 = x_61;
goto block_25;
}
else
{
uint8_t x_67; 
lean_dec(x_49);
lean_dec(x_43);
lean_dec(x_42);
lean_free_object(x_8);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_54);
if (x_67 == 0)
{
return x_54;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_54, 0);
x_69 = lean_ctor_get(x_54, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_54);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_49);
lean_dec(x_43);
lean_dec(x_42);
lean_free_object(x_8);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_51);
if (x_71 == 0)
{
return x_51;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_51, 0);
x_73 = lean_ctor_get(x_51, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_51);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_43);
lean_dec(x_42);
lean_free_object(x_8);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_44);
if (x_75 == 0)
{
return x_44;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_44, 0);
x_77 = lean_ctor_get(x_44, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_44);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_8, 0);
x_80 = lean_ctor_get(x_8, 1);
x_81 = lean_ctor_get(x_8, 2);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_8);
x_82 = lean_ctor_get(x_26, 1);
lean_inc(x_82);
lean_dec(x_26);
x_83 = lean_ctor_get(x_36, 0);
lean_inc(x_83);
lean_dec(x_36);
lean_inc(x_4);
lean_inc(x_1);
x_84 = l_Lean_Meta_getArrayArgType(x_1, x_4, x_5);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_box(0);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_85);
x_88 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8(x_85, x_2, x_2, x_87, x_4, x_86);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
lean_inc(x_4);
lean_inc(x_89);
x_91 = l_Lean_Meta_mkArrayLit(x_85, x_89, x_4, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
lean_inc(x_83);
x_94 = l_Lean_Meta_assignExprMVar(x_83, x_92, x_4, x_93);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_96 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___spec__1(x_82, x_4, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_Meta_instantiateMVars(x_80, x_4, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = l_List_erase___main___at___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___spec__1(x_81, x_83);
lean_dec(x_83);
lean_inc(x_89);
x_103 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__9(x_89);
x_104 = l_List_append___rarg(x_103, x_102);
x_105 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__10(x_89);
x_106 = l_List_append___rarg(x_105, x_97);
x_107 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_107, 0, x_79);
lean_ctor_set(x_107, 1, x_100);
lean_ctor_set(x_107, 2, x_104);
lean_ctor_set(x_107, 3, x_106);
x_11 = x_107;
x_12 = x_101;
goto block_25;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_89);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_108 = lean_ctor_get(x_94, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_94, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_110 = x_94;
} else {
 lean_dec_ref(x_94);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_89);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_112 = lean_ctor_get(x_91, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_91, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_114 = x_91;
} else {
 lean_dec_ref(x_91);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_116 = lean_ctor_get(x_84, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_84, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_118 = x_84;
} else {
 lean_dec_ref(x_84);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
case 4:
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_8);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_8, 3);
lean_dec(x_121);
x_122 = lean_ctor_get(x_26, 1);
lean_inc(x_122);
lean_dec(x_26);
x_123 = lean_ctor_get(x_36, 1);
lean_inc(x_123);
lean_dec(x_36);
x_124 = l_List_append___rarg(x_123, x_122);
lean_ctor_set(x_8, 3, x_124);
x_11 = x_8;
x_12 = x_5;
goto block_25;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_125 = lean_ctor_get(x_8, 0);
x_126 = lean_ctor_get(x_8, 1);
x_127 = lean_ctor_get(x_8, 2);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_8);
x_128 = lean_ctor_get(x_26, 1);
lean_inc(x_128);
lean_dec(x_26);
x_129 = lean_ctor_get(x_36, 1);
lean_inc(x_129);
lean_dec(x_36);
x_130 = l_List_append___rarg(x_129, x_128);
x_131 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_131, 0, x_125);
lean_ctor_set(x_131, 1, x_126);
lean_ctor_set(x_131, 2, x_127);
lean_ctor_set(x_131, 3, x_130);
x_11 = x_131;
x_12 = x_5;
goto block_25;
}
}
default: 
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_36);
lean_dec(x_26);
lean_dec(x_8);
x_132 = l_Lean_Meta_isClassQuick___main___closed__1;
x_133 = l_unreachable_x21___rarg(x_132);
lean_inc(x_4);
x_134 = lean_apply_2(x_133, x_4, x_5);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_11 = x_135;
x_12 = x_136;
goto block_25;
}
else
{
uint8_t x_137; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_134);
if (x_137 == 0)
{
return x_134;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_134, 0);
x_139 = lean_ctor_get(x_134, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_134);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
}
}
block_25:
{
lean_object* x_13; 
x_13 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__11(x_1, x_2, x_9, x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
if (lean_is_scalar(x_10)) {
 x_16 = lean_alloc_ctor(1, 2, 0);
} else {
 x_16 = x_10;
}
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
if (lean_is_scalar(x_10)) {
 x_19 = lean_alloc_ctor(1, 2, 0);
} else {
 x_19 = x_10;
}
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_10, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_10, x_16);
lean_dec(x_10);
x_18 = lean_nat_sub(x_9, x_17);
x_19 = lean_nat_sub(x_18, x_16);
lean_dec(x_18);
x_20 = l_Lean_Meta_CaseArraySizesSubgoal_inhabited;
x_21 = lean_array_get(x_20, x_8, x_19);
x_22 = lean_array_get_size(x_6);
x_23 = lean_nat_dec_lt(x_19, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_19);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
x_26 = lean_box(0);
x_27 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___spec__1(x_24, x_26);
lean_inc(x_12);
x_28 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_27, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
lean_inc(x_3);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_25);
lean_inc(x_1);
lean_inc(x_12);
x_33 = lean_apply_4(x_1, x_32, x_11, x_12, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_10 = x_17;
x_11 = x_34;
x_13 = x_35;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_33);
if (x_37 == 0)
{
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 0);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_33);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_28);
if (x_41 == 0)
{
return x_28;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_28, 0);
x_43 = lean_ctor_get(x_28, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_28);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_45 = l_Nat_Inhabited;
x_46 = lean_array_get(x_45, x_6, x_19);
x_47 = lean_ctor_get(x_21, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_21, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_21, 3);
lean_inc(x_49);
lean_dec(x_21);
x_50 = l_Array_toList___rarg(x_48);
lean_dec(x_48);
x_51 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__1(x_50);
lean_inc(x_5);
x_52 = l_List_append___rarg(x_51, x_5);
x_53 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(x_49, x_52);
x_54 = lean_ctor_get(x_2, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_2, 3);
lean_inc(x_55);
x_56 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(x_4, x_8, x_19, x_55);
x_57 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(x_8, x_19, x_56);
lean_dec(x_19);
x_58 = lean_box(0);
x_59 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6(x_46, x_54, x_58);
lean_inc(x_12);
x_60 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__7(x_49, x_59, x_12, x_13);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_12);
x_63 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___spec__8(x_61, x_12, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_12);
lean_inc(x_4);
x_66 = l_List_mapM___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__11(x_4, x_46, x_64, x_12, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_47);
lean_ctor_set(x_69, 1, x_53);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_57);
lean_inc(x_1);
lean_inc(x_12);
x_70 = lean_apply_4(x_1, x_69, x_11, x_12, x_68);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_10 = x_17;
x_11 = x_71;
x_13 = x_72;
goto _start;
}
else
{
uint8_t x_74; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_70);
if (x_74 == 0)
{
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_70, 0);
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_70);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_47);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_66);
if (x_78 == 0)
{
return x_66;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_66, 0);
x_80 = lean_ctor_get(x_66, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_66);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_63);
if (x_82 == 0)
{
return x_63;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_63, 0);
x_84 = lean_ctor_get(x_63, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_63);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_60);
if (x_86 == 0)
{
return x_60;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_60, 0);
x_88 = lean_ctor_get(x_60, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_60);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
else
{
lean_object* x_90; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_11);
lean_ctor_set(x_90, 1, x_13);
return x_90;
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("array literal step");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_28; uint8_t x_29; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_28 = lean_ctor_get(x_5, 4);
lean_inc(x_28);
x_29 = lean_ctor_get_uint8(x_28, sizeof(void*)*1);
lean_dec(x_28);
if (x_29 == 0)
{
x_7 = x_5;
goto block_27;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_31 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_30, x_4, x_5);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_7 = x_34;
goto block_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3;
x_37 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_30, x_36, x_4, x_35);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_7 = x_38;
goto block_27;
}
}
block_27:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Meta_isClassQuick___main___closed__1;
x_9 = l_unreachable_x21___rarg(x_8);
x_10 = lean_apply_2(x_9, x_4, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_13 = l___private_Lean_Meta_EqnCompiler_DepElim_32__collectArraySizes(x_2);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = l_Lean_Expr_fvarId_x21(x_11);
x_16 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_17 = l_Lean_Meta_caseValue___closed__2;
lean_inc(x_4);
lean_inc(x_13);
lean_inc(x_15);
x_18 = l_Lean_Meta_caseArraySizes(x_14, x_15, x_13, x_16, x_17, x_4, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_array_get_size(x_19);
lean_inc(x_21);
x_22 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12(x_1, x_2, x_6, x_11, x_12, x_13, x_15, x_19, x_21, x_21, x_3, x_4, x_20);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_13);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_map___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_filterAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__6(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Nat_foldMAux___main___at___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_1, x_3, x_4);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_3 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_Meta_DepElim_Problem_toMessageData(x_1, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_2, x_9, x_4, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1___boxed), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_tracer___closed__3;
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main), 4, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("not implement yet ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2___boxed), 5, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2;
x_8 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_isClassExpensive___main___spec__4___rarg), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = l___private_Lean_Meta_EqnCompiler_DepElim_10__isDone(x_1);
x_10 = lean_ctor_get(x_3, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 4);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_10, x_11);
if (x_9 == 0)
{
if (x_12 == 0)
{
uint8_t x_106; 
x_106 = 0;
x_13 = x_106;
goto block_105;
}
else
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_107 = l_Lean_Meta_withIncRecDepth___rarg___closed__3;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_4);
return x_108;
}
}
else
{
if (x_12 == 0)
{
uint8_t x_109; 
x_109 = 1;
x_13 = x_109;
goto block_105;
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_110 = l_Lean_Meta_withIncRecDepth___rarg___closed__3;
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_4);
return x_111;
}
}
block_105:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_3, 4);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 3);
lean_dec(x_16);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_10, x_17);
lean_dec(x_10);
lean_ctor_set(x_3, 3, x_18);
lean_inc(x_1);
x_19 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_1, x_8, x_3, x_4);
if (lean_obj_tag(x_19) == 0)
{
if (x_13 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern(x_1);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_24 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable(x_23, x_1, x_2, x_3, x_20);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition(x_1);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition(x_1);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition(x_1);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition(x_1);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition(x_1);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_2);
x_30 = l_Lean_Meta_DepElim_Problem_toMessageData(x_1, x_3, x_20);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6;
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_box(0);
x_36 = l_Lean_Meta_throwOther___rarg(x_34, x_35, x_3, x_32);
lean_dec(x_3);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
return x_30;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_42 = l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit(x_41, x_1, x_2, x_3, x_20);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_44 = l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue(x_43, x_1, x_2, x_3, x_20);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_46 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete(x_45, x_1, x_2, x_3, x_20);
lean_dec(x_3);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_48 = l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor(x_47, x_1, x_2, x_3, x_20);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_50 = l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable(x_49, x_1, x_2, x_3, x_20);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_52 = l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern(x_51, x_1, x_2, x_3, x_20);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_19, 1);
lean_inc(x_53);
lean_dec(x_19);
x_54 = l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf(x_1, x_2, x_3, x_53);
lean_dec(x_3);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_19);
if (x_55 == 0)
{
return x_19;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_19, 0);
x_57 = lean_ctor_get(x_19, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_19);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_3, 0);
x_60 = lean_ctor_get(x_3, 1);
x_61 = lean_ctor_get(x_3, 2);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_3);
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_10, x_62);
lean_dec(x_10);
x_64 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set(x_64, 2, x_61);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_64, 4, x_11);
lean_inc(x_1);
x_65 = l_Lean_Meta_DepElim_withGoalOf___rarg(x_1, x_8, x_64, x_4);
if (lean_obj_tag(x_65) == 0)
{
if (x_13 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = l___private_Lean_Meta_EqnCompiler_DepElim_12__hasAsPattern(x_1);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = l___private_Lean_Meta_EqnCompiler_DepElim_11__isNextVar(x_1);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_70 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable(x_69, x_1, x_2, x_64, x_66);
return x_70;
}
else
{
uint8_t x_71; 
x_71 = l___private_Lean_Meta_EqnCompiler_DepElim_13__isVariableTransition(x_1);
if (x_71 == 0)
{
uint8_t x_72; 
x_72 = l___private_Lean_Meta_EqnCompiler_DepElim_14__isConstructorTransition(x_1);
if (x_72 == 0)
{
uint8_t x_73; 
x_73 = l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition(x_1);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l___private_Lean_Meta_EqnCompiler_DepElim_16__isValueTransition(x_1);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = l___private_Lean_Meta_EqnCompiler_DepElim_17__isArrayLitTransition(x_1);
if (x_75 == 0)
{
lean_object* x_76; 
lean_dec(x_2);
x_76 = l_Lean_Meta_DepElim_Problem_toMessageData(x_1, x_64, x_66);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6;
x_80 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
x_81 = lean_box(0);
x_82 = l_Lean_Meta_throwOther___rarg(x_80, x_81, x_64, x_78);
lean_dec(x_64);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_64);
x_83 = lean_ctor_get(x_76, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_76, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_85 = x_76;
} else {
 lean_dec_ref(x_76);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_88 = l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit(x_87, x_1, x_2, x_64, x_66);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_90 = l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue(x_89, x_1, x_2, x_64, x_66);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_92 = l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete(x_91, x_1, x_2, x_64, x_66);
lean_dec(x_64);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; 
x_93 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_94 = l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor(x_93, x_1, x_2, x_64, x_66);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_96 = l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable(x_95, x_1, x_2, x_64, x_66);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3;
x_98 = l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern(x_97, x_1, x_2, x_64, x_66);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_65, 1);
lean_inc(x_99);
lean_dec(x_65);
x_100 = l___private_Lean_Meta_EqnCompiler_DepElim_19__processLeaf(x_1, x_2, x_64, x_99);
lean_dec(x_64);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_64);
lean_dec(x_2);
lean_dec(x_1);
x_101 = lean_ctor_get(x_65, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_65, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_103 = x_65;
} else {
 lean_dec_ref(x_65);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___lambda__2(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_34__process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_List_map___main___at_Lean_Meta_DepElim_mkElim___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Expr_fvarId_x21(x_4);
lean_dec(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___main___at_Lean_Meta_DepElim_mkElim___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Expr_fvarId_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___main___at_Lean_Meta_DepElim_mkElim___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Std_mkHashSet___at_Lean_Meta_DepElim_mkElim___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
uint8_t l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_List_elem___main___at_Lean_Occurrences_contains___spec__1(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
x_10 = lean_nat_sub(x_3, x_4);
lean_dec(x_4);
x_11 = lean_ctor_get(x_2, 0);
x_12 = l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_5);
x_4 = x_9;
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Position_lt___closed__1;
x_2 = lean_alloc_closure((void*)(l_beqOfEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eliminator: ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eliminator value: ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\ntype: ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_11 = lean_box(0);
x_12 = 0;
lean_inc(x_9);
lean_inc(x_1);
x_13 = l_Lean_Meta_mkFreshExprMVar(x_1, x_11, x_12, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Array_toList___rarg(x_2);
lean_inc(x_16);
x_17 = l_List_map___main___at_Lean_Meta_DepElim_mkElim___spec__1(x_16);
x_18 = l_Lean_Expr_mvarId_x21(x_14);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_7);
lean_ctor_set(x_19, 3, x_17);
x_20 = lean_box(0);
x_21 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3;
lean_inc(x_9);
x_22 = l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main(x_19, x_21, x_9, x_15);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkOptionalNode___closed__2;
x_26 = lean_array_push(x_25, x_3);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_2, x_2, x_27, x_26);
x_29 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_8, x_8, x_27, x_28);
lean_inc(x_9);
lean_inc(x_29);
x_30 = l_Lean_Meta_mkForall(x_29, x_1, x_9, x_24);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_9);
x_33 = l_Lean_Meta_mkLambda(x_29, x_14, x_9, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_96; uint8_t x_97; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_96 = lean_ctor_get(x_35, 4);
lean_inc(x_96);
x_97 = lean_ctor_get_uint8(x_96, sizeof(void*)*1);
lean_dec(x_96);
if (x_97 == 0)
{
x_36 = x_35;
goto block_95;
}
else
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
lean_inc(x_6);
x_98 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_6, x_9, x_35);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_unbox(x_99);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec(x_98);
x_36 = x_101;
goto block_95;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
lean_dec(x_98);
lean_inc(x_34);
x_103 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_103, 0, x_34);
x_104 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9;
x_105 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12;
x_107 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
lean_inc(x_31);
x_108 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_108, 0, x_31);
x_109 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
lean_inc(x_6);
x_110 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_6, x_109, x_9, x_102);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_36 = x_111;
goto block_95;
}
}
block_95:
{
lean_object* x_37; 
lean_inc(x_9);
lean_inc(x_4);
x_37 = l_Lean_Meta_mkAuxDefinition(x_4, x_31, x_34, x_9, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_List_lengthAux___main___rarg(x_5, x_27);
x_41 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1;
lean_inc(x_40);
x_42 = l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4(x_41, x_23, x_40, x_40, x_20);
lean_dec(x_40);
x_43 = lean_ctor_get(x_23, 1);
lean_inc(x_43);
lean_dec(x_23);
x_44 = l_List_reverse___rarg(x_42);
lean_inc(x_38);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_38);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_44);
x_46 = 0;
x_47 = l_Lean_Meta_setInlineAttribute(x_4, x_46, x_9, x_39);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_47, 1);
x_50 = lean_ctor_get(x_47, 0);
lean_dec(x_50);
x_51 = lean_ctor_get(x_49, 4);
lean_inc(x_51);
x_52 = lean_ctor_get_uint8(x_51, sizeof(void*)*1);
lean_dec(x_51);
if (x_52 == 0)
{
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_6);
lean_ctor_set(x_47, 0, x_45);
return x_47;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_free_object(x_47);
lean_inc(x_6);
x_53 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_6, x_9, x_49);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
if (x_55 == 0)
{
uint8_t x_56; 
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_6);
x_56 = !lean_is_exclusive(x_53);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_53, 0);
lean_dec(x_57);
lean_ctor_set(x_53, 0, x_45);
return x_53;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
lean_dec(x_53);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_45);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_dec(x_53);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_38);
x_62 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6;
x_63 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_6, x_63, x_9, x_60);
lean_dec(x_9);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_64, 0);
lean_dec(x_66);
lean_ctor_set(x_64, 0, x_45);
return x_64;
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_dec(x_64);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_45);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_69 = lean_ctor_get(x_47, 1);
lean_inc(x_69);
lean_dec(x_47);
x_70 = lean_ctor_get(x_69, 4);
lean_inc(x_70);
x_71 = lean_ctor_get_uint8(x_70, sizeof(void*)*1);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_6);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_45);
lean_ctor_set(x_72, 1, x_69);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
lean_inc(x_6);
x_73 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_6, x_9, x_69);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_unbox(x_74);
lean_dec(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_6);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_77 = x_73;
} else {
 lean_dec_ref(x_73);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_45);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_ctor_get(x_73, 1);
lean_inc(x_79);
lean_dec(x_73);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_38);
x_81 = l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6;
x_82 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_6, x_82, x_9, x_79);
lean_dec(x_9);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_85 = x_83;
} else {
 lean_dec_ref(x_83);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_45);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_45);
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_6);
x_87 = !lean_is_exclusive(x_47);
if (x_87 == 0)
{
return x_47;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_47, 0);
x_89 = lean_ctor_get(x_47, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_47);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_37);
if (x_91 == 0)
{
return x_37;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_37, 0);
x_93 = lean_ctor_get(x_37, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_37);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_31);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_112 = !lean_is_exclusive(x_33);
if (x_112 == 0)
{
return x_33;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_33, 0);
x_114 = lean_ctor_get(x_33, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_33);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
x_116 = !lean_is_exclusive(x_30);
if (x_116 == 0)
{
return x_30;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_30, 0);
x_118 = lean_ctor_get(x_30, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_30);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_120 = !lean_is_exclusive(x_22);
if (x_120 == 0)
{
return x_22;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_22, 0);
x_122 = lean_ctor_get(x_22, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_22);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("target: ");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_9 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_4, x_4, x_8, x_1);
x_10 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_4);
lean_inc(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_mkElim___lambda__1___boxed), 10, 6);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_1);
lean_closure_set(x_11, 3, x_2);
lean_closure_set(x_11, 4, x_3);
lean_closure_set(x_11, 5, x_10);
x_12 = l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns(x_4, x_3, x_6, x_7);
lean_dec(x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_14, sizeof(void*)*1);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_9);
x_16 = l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg(x_1, x_3, x_11, x_6, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_isLevelDefEqAux___main___spec__2(x_10, x_6, x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_9);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg(x_1, x_3, x_11, x_6, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_9);
x_24 = l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3;
x_25 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_MonadTracerAdapter_addTrace___at_Lean_Meta_isLevelDefEqAux___main___spec__1(x_10, x_25, x_6, x_22);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l___private_Lean_Meta_EqnCompiler_DepElim_9__withAlts___rarg(x_1, x_3, x_11, x_6, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_12);
if (x_29 == 0)
{
return x_12;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_mkElim___lambda__2___boxed), 7, 3);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
x_8 = l_Lean_Meta_forallTelescopeReducing___rarg(x_3, x_7, x_5, x_6);
return x_8;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("motive");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElim___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_DepElim_mkElim___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_mkElim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_mkElim___lambda__3), 6, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_2);
x_7 = l_Lean_Meta_DepElim_mkElim___closed__2;
x_8 = 0;
x_9 = l_Lean_Meta_withLocalDecl___rarg(x_7, x_2, x_8, x_6, x_4, x_5);
return x_9;
}
}
lean_object* l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_HashSetImp_contains___at_Lean_Meta_DepElim_mkElim___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldAux___main___at_Lean_Meta_DepElim_mkElim___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_DepElim_mkElim___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Meta_DepElim_mkElim___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_DepElim_mkElim___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Lean_Meta_instantiateMVars(x_6, x_3, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_9);
x_11 = l_Lean_Meta_inferType(x_9, x_3, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_instantiateMVars(x_12, x_3, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_CollectLevelParams_main___main(x_9, x_1);
x_18 = l_Lean_CollectLevelParams_main___main(x_15, x_17);
x_1 = x_18;
x_2 = x_7;
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_HashSet_Inhabited___closed__1;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("v");
return x_1;
}
}
lean_object* _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1;
x_6 = l_List_foldlM___main___at___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___spec__1(x_5, x_1, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3;
x_10 = l_Lean_CollectLevelParams_State_getUnusedLevelParam(x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3;
x_14 = l_Lean_CollectLevelParams_State_getUnusedLevelParam(x_11, x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
return x_6;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_3 == 0)
{
lean_object* x_6; 
x_6 = l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_mkSort(x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = l_Lean_mkSort(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
lean_dec(x_1);
x_18 = l_Lean_Expr_getAppArgs___closed__1;
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_DepElim_mkElimTester___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
x_7 = l_Lean_Meta_mkForall(x_4, x_1, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Meta_DepElim_mkElim(x_2, x_8, x_3, x_5, x_9);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElimTester___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_d");
return x_1;
}
}
lean_object* _init_l_Lean_Meta_DepElim_mkElimTester___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_DepElim_mkElimTester___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DepElim_mkElimTester(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_2);
x_7 = l___private_Lean_Meta_EqnCompiler_DepElim_36__mkElimSort(x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_List_redLength___main___rarg(x_2);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_dec(x_10);
x_12 = l_List_toArrayAux___main___rarg(x_2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_DepElim_mkElimTester___lambda__1), 6, 3);
lean_closure_set(x_13, 0, x_8);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_3);
x_14 = l_Lean_Meta_DepElim_mkElimTester___closed__2;
x_15 = l_Lean_Meta_generalizeTelescope___rarg(x_12, x_14, x_13, x_5, x_9);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_DepElim_mkElimTester___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Lean_Meta_DepElim_mkElimTester(x_1, x_2, x_3, x_7, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_EqnCompiler_DepElim_37__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Cases(lean_object*);
lean_object* initialize_Lean_Meta_GeneralizeTelescope(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_MVarRenaming(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_CaseValues(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_CaseArraySizes(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_EqnCompiler_DepElim(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_GeneralizeTelescope(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_MVarRenaming(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_CaseValues(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_CaseArraySizes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__1);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__2);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__3);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__4);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__5);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__6);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__7);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__8);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__9);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__10);
l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11 = _init_l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toMessageData___main___closed__11);
l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1 = _init_l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Pattern_toIPattern___main___closed__1);
l_Lean_Meta_DepElim_Alt_Inhabited___closed__1 = _init_l_Lean_Meta_DepElim_Alt_Inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_Inhabited___closed__1);
l_Lean_Meta_DepElim_Alt_Inhabited = _init_l_Lean_Meta_DepElim_Alt_Inhabited();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_Inhabited);
l_Lean_Meta_DepElim_Alt_toMessageData___closed__1 = _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_toMessageData___closed__1);
l_Lean_Meta_DepElim_Alt_toMessageData___closed__2 = _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_toMessageData___closed__2);
l_Lean_Meta_DepElim_Alt_toMessageData___closed__3 = _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_toMessageData___closed__3);
l_Lean_Meta_DepElim_Alt_toMessageData___closed__4 = _init_l_Lean_Meta_DepElim_Alt_toMessageData___closed__4();
lean_mark_persistent(l_Lean_Meta_DepElim_Alt_toMessageData___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_2__convertMVars___closed__1);
l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1 = _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Example_toMessageData___main___closed__1);
l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2 = _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_Example_toMessageData___main___closed__2);
l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3 = _init_l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_Example_toMessageData___main___closed__3);
l_Lean_Meta_DepElim_Problem_Inhabited___closed__1 = _init_l_Lean_Meta_DepElim_Problem_Inhabited___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_Inhabited___closed__1);
l_Lean_Meta_DepElim_Problem_Inhabited = _init_l_Lean_Meta_DepElim_Problem_Inhabited();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_Inhabited);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__1);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__2);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__3);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__4);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__5);
l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6 = _init_l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Meta_DepElim_Problem_toMessageData___lambda__1___closed__6);
l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_5__checkNumPatterns___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__5);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__6);
l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_8__withAltsAux___main___rarg___closed__7);
l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_15__isCompleteTransition___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_18__processNonVariable___closed__5);
l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_20__processAsPattern___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_21__processVariable___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_23__processConstructor___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_24__throwInductiveTypeExpected___rarg___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_25__tryConstructorAux___main___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__5);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__6);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__7);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__8);
l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_26__tryConstructor_x3f___closed__9);
l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_28__processComplete___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_31__processValue___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_33__processArrayLit___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__3);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__4);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__5);
l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_34__process___main___closed__6);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__1);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__2);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__3);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__4);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__5);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__6);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__7);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__8);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__9);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__10);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__11);
l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12 = _init_l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__1___closed__12);
l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1 = _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__2___closed__1);
l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2 = _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__2___closed__2);
l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3 = _init_l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___lambda__2___closed__3);
l_Lean_Meta_DepElim_mkElim___closed__1 = _init_l_Lean_Meta_DepElim_mkElim___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___closed__1);
l_Lean_Meta_DepElim_mkElim___closed__2 = _init_l_Lean_Meta_DepElim_mkElim___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElim___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__1);
l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__2);
l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3 = _init_l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3();
lean_mark_persistent(l___private_Lean_Meta_EqnCompiler_DepElim_35__getUnusedLevelParam___closed__3);
l_Lean_Meta_DepElim_mkElimTester___closed__1 = _init_l_Lean_Meta_DepElim_mkElimTester___closed__1();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElimTester___closed__1);
l_Lean_Meta_DepElim_mkElimTester___closed__2 = _init_l_Lean_Meta_DepElim_mkElimTester___closed__2();
lean_mark_persistent(l_Lean_Meta_DepElim_mkElimTester___closed__2);
res = l___private_Lean_Meta_EqnCompiler_DepElim_37__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
