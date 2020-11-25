// Lean compiler output
// Module: Lean.Meta.Basic
// Imports: Init Lean.Data.LOption Lean.Environment Lean.Class Lean.ReducibilityAttrs Lean.Util.Trace Lean.Util.RecDepth Lean.Util.PPExt Lean.Compiler.InlineAttrs Lean.Meta.TransparencyMode Lean.Meta.DiscrTreeTypes Lean.Eval Lean.CoreM
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
lean_object* l_Lean_Meta_withConfig___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey;
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConstNoEx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl_match__1(lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarKind___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1;
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_synthInstance___default;
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Config_transparency___default;
lean_object* l_Lean_Meta_withLetDecl(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedParamInfo___closed__1;
lean_object* l_Lean_Meta_mkFreshExprMVar___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Lean_Meta_TransparencyMode_hash(uint8_t);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey(lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fullApproxDefEqImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthPending___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_map1MetaM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__2(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_MetavarContext_findLevelDepth_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux_match__1(lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
uint8_t l_Lean_Meta_Config_zetaNonDep___default;
lean_object* l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Meta_mkForallFVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*);
lean_object* l_Lean_Meta_synthPending___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapMetaM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___rarg(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2;
lean_object* l_Lean_Meta_mkForallUsedOnly___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_InternalExceptionId_toString___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1;
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_savingCache(lean_object*);
lean_object* l_Lean_Meta_orelse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3;
lean_object* l_Lean_Meta_withMCtx___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_ppExprImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_run(lean_object*);
lean_object* l_Lean_Meta_mapError(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*);
lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2;
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1(lean_object*);
lean_object* l_Lean_Meta_setPostponed___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instOrElseMetaM___closed__1;
extern lean_object* l_StateRefT_x27_instMonadLiftStateRefT_x27___closed__1;
lean_object* l_Lean_Meta_getLocalDeclFromUserName_match__1(lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1;
lean_object* l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_run_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg___closed__1;
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1(lean_object*);
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Meta_State_postponed___default;
lean_object* l_Lean_Meta_getPostponed___rarg___closed__2;
lean_object* l_Lean_Meta_withExistingLocalDecls___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_State_mctx___default;
lean_object* l_Lean_Meta_savingCache___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3;
lean_object* l_Lean_Meta_lambdaTelescope(lean_object*);
lean_object* l_Lean_Meta_elimMVarDeps(lean_object*);
lean_object* l_Lean_MetavarContext_setMVarKind(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_dependsOn___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_modifyPostponed___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency___rarg(lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedState___closed__1;
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__2(lean_object*);
lean_object* l_Lean_Meta_forallTelescope(lean_object*);
lean_object* l_Lean_Meta_dependsOn(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConstNoEx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Meta_mkFreshTypeMVar___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_elimMVarDepsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentArray_empty___closed__1;
extern lean_object* l_Std_PersistentHashMap_root___default___closed__2;
lean_object* l_Lean_Meta_modifyPostponed___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_fullApproxDefEq(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*);
lean_object* l_Lean_Meta_withLetDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVars(lean_object*);
lean_object* l_Lean_Meta_map1MetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_delayed_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getParamNamesImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__2(lean_object*);
lean_object* l_Lean_Meta_orelse(lean_object*);
lean_object* l_Lean_Meta_withTransparency___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_State_zetaFVarIds___default;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarKind___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3;
lean_object* l_Lean_Meta_setMCtx___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarType(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*);
lean_object* l_Lean_Meta_withLCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_funInfo___default;
lean_object* l_Lean_Meta_withReducible___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_approxDefEqImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVars___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallUsedOnlyImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Meta_orelseMergeErrors(lean_object*, lean_object*);
lean_object* l_Lean_Meta_fullApproxDefEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_renameMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_renameMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___closed__2;
lean_object* l_Lean_Meta_orelseMergeErrors___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*);
lean_object* l_Lean_Meta_map1MetaM___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___closed__1;
lean_object* l_Lean_Meta_whnfD___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3;
lean_object* l_Lean_Meta_mkArrow___rarg___closed__3;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3;
lean_object* l_Lean_Meta_withConfig___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar_match__1(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Meta_instantiateMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_resettingSynthInstanceCacheImpl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3_(lean_object*);
lean_object* l_Lean_Meta_getConfig___rarg(lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg(lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapMetaM(lean_object*);
extern lean_object* l_Lean_throwUnknownConstant___rarg___closed__2;
lean_object* l_Lean_Meta_withTransparency___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedException___closed__1;
lean_object* l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1;
lean_object* l_Lean_Meta_forallTelescopeReducing(lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp_match__1(lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2;
lean_object* l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_synthInstance___default___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarKind___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLiftReaderT(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownFVar___rarg___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownFVar___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel(lean_object*);
lean_object* l_Lean_Meta_shouldReduceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel___rarg___closed__1;
lean_object* l_Lean_Meta_withNewLocalInstances___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___closed__2;
lean_object* l_Lean_Meta_instInhabitedMetaM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstance___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_elimMVarDeps___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Compiler_inlineAttrs;
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadEnvCoreM;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameGenerator_instInhabitedNameGenerator___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setPostponed___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Config_isDefEqStuckEx___default;
lean_object* l_Lean_Meta_instMonadLCtxMetaM___closed__3;
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds(lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_map2MetaM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownFVar(lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*);
lean_object* l_Lean_Meta_map2MetaM(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_toIO(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_State_cache___default___closed__1;
lean_object* l_Lean_Meta_withTrackingZeta___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process(lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__2(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_level_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1;
lean_object* l_Lean_Meta_ppExprImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars(lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___closed__4;
lean_object* l_Lean_Meta_withMCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1;
lean_object* l_Lean_Meta_inferType___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ParamInfo_isExplicit___boxed(lean_object*);
lean_object* l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg___closed__1;
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2;
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarType___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2;
lean_object* l_Lean_Meta_isDefEqStuckExceptionId;
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_instMonadLCtxMetaM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withTransparency(lean_object*);
lean_object* l_Lean_Meta_renameMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2;
lean_object* l_Lean_Meta_inferType___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___rarg(lean_object*);
extern lean_object* l_Lean_MetavarContext_instInhabitedMetavarContext___closed__1;
lean_object* l_Lean_Meta_instAddMessageContextMetaM___closed__1;
lean_object* l_Lean_Meta_mkForallUsedOnly(lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_elimMVarDeps(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1;
lean_object* l_Lean_Meta_instantiateLocalDeclMVars(lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2;
lean_object* l_Lean_Meta_liftMetaM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLCtx___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_map2MetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_renameMVar(lean_object*);
extern lean_object* l_Lean_LocalContext_instInhabitedLocalContext___closed__1;
extern lean_object* l_Lean_Expr_instInhabitedExpr___closed__1;
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___boxed(lean_object*);
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_hasFwdDeps___default;
lean_object* l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDelayedAssigned___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_savingCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferTypeRef;
lean_object* l_Lean_Meta_getDelayedAssignment_x3f(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_setMVarType(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__1(lean_object*);
lean_object* l_Lean_Meta_orelseMergeErrors___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___rarg___closed__1;
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyExprMVar(lean_object*);
lean_object* l_Lean_Meta_elimMVarDepsImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp(lean_object*);
lean_object* l_Lean_Meta_MetaM_run_x27(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_instImplicit___default;
lean_object* l_Lean_Meta_setMVarKind(lean_object*);
lean_object* l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___closed__1;
uint8_t l_Lean_Meta_Config_constApprox___default;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1;
lean_object* l_Lean_Meta_map2MetaM___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process(lean_object*);
lean_object* l_Lean_instMonadEnv___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaMetaTelescope(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1;
lean_object* l_Lean_Meta_setMVarKind___rarg___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_toIO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___rarg___closed__2;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDelayedAssigned___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_approxDefEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_renameMVar___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1;
lean_object* l_Lean_Meta_Cache_whnfAll___default;
lean_object* l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printTraces___at_Lean_Core_instMetaEvalCoreM___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances(lean_object*);
lean_object* l_Lean_Meta_mkArrow___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_approxDefEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp(lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1;
uint8_t l_Lean_Meta_TransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Config_ctxApprox___default;
lean_object* l_Lean_Meta_map1MetaM(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarType___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___rarg(lean_object*);
lean_object* l_Lean_ppExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_State_cache___default;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_getLocalInstances(lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f(lean_object*);
lean_object* l_Lean_Meta_instMonadLCtxMetaM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
lean_object* l_Lean_Meta_ParamInfo_backDeps___default;
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2;
uint8_t l_Lean_Meta_Config_quasiPatternApprox___default;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_throwUnknownConstant___rarg___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_liftMetaM(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1;
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg(lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*);
lean_object* l_Lean_Meta_getConst_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallBoundedTelescopeImp(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_getParamNamesImp___closed__1;
lean_object* l_Lean_Meta_withLocalDecl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___closed__5;
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* l_instMonadLiftT__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__2(lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*);
lean_object* l_Lean_Meta_instInhabitedParamInfo;
lean_object* l_Lean_Meta_instantiateLevelMVarsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*);
lean_object* l_Lean_Meta_Context_config___default;
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_approxDefEq(lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls(lean_object*);
uint8_t l_Lean_Meta_Config_foApprox___default;
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_exprDependsOn(lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth(lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*);
lean_object* l_Lean_Meta_instMetaEvalMetaM(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_level_update_imax(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_toIO_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1;
lean_object* l_Lean_Meta_instInhabitedMetaM___rarg(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FunInfo_paramInfo___default;
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVarsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FunInfo_resultDeps___default;
lean_object* l_Lean_Meta_withLetDecl___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1;
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f(lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*);
lean_object* l_Lean_Meta_mkArrow___rarg___closed__1;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1;
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_Meta_resettingSynthInstanceCache(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___rarg___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp_match__1(lean_object*);
lean_object* l_Lean_getMaxRecDepth(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp(lean_object*);
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM;
lean_object* l_Lean_Meta_throwUnknownFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_elimMVarDeps___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownFVar___rarg___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux_match__1(lean_object*);
lean_object* l_Lean_MetavarContext_addExprMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVarsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instOrElseMetaM(lean_object*);
lean_object* l_Lean_Meta_synthPendingRef;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1(lean_object*);
lean_object* l_Lean_Meta_getConst_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallBoundedTelescopeImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_incDepth(lean_object*);
lean_object* l_Lean_Meta_Context_lctx___default;
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Config_trackZeta___default;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_funInfo___default___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM(lean_object*);
lean_object* l_Lean_Meta_whnfRef;
lean_object* l_Lean_Meta_synthPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2;
lean_object* l_Lean_Meta_isExprDefEqAuxRef;
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp(lean_object*);
lean_object* l_Lean_Meta_withLCtx(lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___closed__3;
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_resettingSynthInstanceCacheImpl(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withReducible___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*);
uint8_t lean_get_reducibility_status(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_fullApproxDefEq___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_withAtLeastTransparency(lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__1(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_savingCacheImpl(lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadLCtxMetaM___closed__1;
lean_object* l_Lean_Meta_instMonadLCtxMetaM___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_approxDefEqImp(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency___rarg___closed__1;
lean_object* l_Lean_Meta_getLocalDeclFromUserName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getParamNames___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow(lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Meta_restoreSynthInstanceCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDelayedAssigned(lean_object*);
uint8_t l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl_match__1(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*);
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___boxed(lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___rarg(lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Context_config___default___closed__1;
lean_object* l_Lean_Meta_instantiateLocalDeclMVars_match__1(lean_object*);
lean_object* l_Lean_Meta_getTransparency(lean_object*);
lean_object* l_Lean_Meta_getConstNoEx_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withTransparency___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedState;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey_match__1(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_inferType___default___closed__1;
size_t lean_usize_mix_hash(size_t, size_t);
lean_object* l_Lean_Meta_forallMetaTelescope___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getParamNamesImp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_instInhabitedHashMap___closed__1;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1;
lean_object* l_Lean_Meta_withNewLocalInstance___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency___rarg___closed__2;
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*);
lean_object* l_Lean_Meta_modifyPostponed(lean_object*);
lean_object* l_Lean_Meta_withConfig(lean_object*);
lean_object* l_Lean_Meta_inferType___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_whnfDefault___default;
lean_object* l_Lean_Meta_dependsOn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MetaM_toIO_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly(lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg___closed__1;
lean_object* l_Lean_Meta_mkFreshTypeMVar(lean_object*);
lean_object* l_Lean_EnumAttributes_setValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process_match__1(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__3(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setPostponed___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fullApproxDefEqImp(lean_object*);
lean_object* l_Lean_Meta_withTrackingZeta___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___closed__1;
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute_match__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*);
lean_object* l_Lean_Meta_withTrackingZeta(lean_object*);
lean_object* l_Lean_Meta_Context_localInstances___default;
extern lean_object* l_Lean_Unhygienic_run___rarg___closed__1;
lean_object* l_Lean_Meta_normalizeLevel___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalInstance_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getParamNamesImp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_funInfo___default___closed__2;
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__2(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(lean_object*);
lean_object* l_Lean_Meta_whnfForall___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallUsedOnlyImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__2___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_implicit___default;
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadLCtxMetaM;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDelayedAssigned___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_dependsOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig___rarg___closed__1;
lean_object* l_Lean_Meta_mapError___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPostponed(lean_object*);
lean_object* l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getParamNames(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_setMCtx(lean_object*);
lean_object* l_Lean_Meta_whnfD___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isReadOnlyLevelMVar(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithId(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstance(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMVarType___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setPostponed(lean_object*);
lean_object* l_Lean_Meta_modifyPostponed___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withReducible(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars_match__1(lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig(lean_object*);
lean_object* l_Lean_Meta_forallTelescope___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__1(lean_object*);
lean_object* l_Lean_Meta_getConstNoEx_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1;
lean_object* l_Lean_Meta_Cache_inferType___default;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cache_funInfo___default___closed__3;
lean_object* l_Lean_Meta_withNewMCtxDepth___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMCtx(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl_match__1(lean_object*);
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1;
lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaMetaTelescope___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr___rarg(lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig___rarg___closed__2;
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_Meta_mapError___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1;
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_instantiateForall___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Meta_mkFreshTypeMVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getConfig___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux_match__1(lean_object*);
extern lean_object* l_Lean_TraceState_instInhabitedTraceState___closed__1;
lean_object* l_Lean_Meta_getLocalDecl___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDecl_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_savingCacheImpl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrow___rarg___closed__2;
uint8_t l_Lean_MetavarContext_hasAssignableMVar(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*);
lean_object* l_Lean_Meta_resetZetaFVarIds(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1(lean_object*);
lean_object* l_Lean_Meta_commitWhenSome_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withTransparency___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("isDefEqStuck");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2;
x_3 = l_Lean_registerInternalExceptionId(x_2, x_1);
return x_3;
}
}
static uint8_t _init_l_Lean_Meta_Config_foApprox___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_ctxApprox___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_quasiPatternApprox___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_constApprox___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_isDefEqStuckEx___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_transparency___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_zetaNonDep___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Config_trackZeta___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_ParamInfo_implicit___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_ParamInfo_instImplicit___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_ParamInfo_hasFwdDeps___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_ParamInfo_backDeps___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedParamInfo___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedParamInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instInhabitedParamInfo___closed__1;
return x_1;
}
}
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
}
lean_object* l_Lean_Meta_ParamInfo_isExplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_ParamInfo_isExplicit(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_FunInfo_paramInfo___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_FunInfo_resultDeps___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = l_Lean_Expr_instInhabitedExpr___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1;
return x_1;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(x_3);
x_7 = lean_apply_3(x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey_match__1___rarg), 2, 0);
return x_2;
}
}
size_t l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Lean_Meta_TransparencyMode_hash(x_2);
x_6 = l_Lean_Expr_hash(x_3);
if (lean_obj_tag(x_4) == 0)
{
size_t x_7; size_t x_8; size_t x_9; 
x_7 = 11;
x_8 = lean_usize_mix_hash(x_6, x_7);
x_9 = lean_usize_mix_hash(x_5, x_8);
return x_9;
}
else
{
lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_usize_of_nat(x_10);
x_12 = 13;
x_13 = lean_usize_mix_hash(x_11, x_12);
x_14 = lean_usize_mix_hash(x_6, x_13);
x_15 = lean_usize_mix_hash(x_5, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(x_3);
x_7 = lean_apply_3(x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(x_3);
x_7 = lean_apply_3(x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey_match__2___rarg), 2, 0);
return x_2;
}
}
uint8_t l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_Meta_TransparencyMode_beq(x_3, x_6);
x_10 = lean_expr_eqv(x_4, x_7);
if (lean_obj_tag(x_5) == 0)
{
if (lean_obj_tag(x_8) == 0)
{
if (x_9 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
return x_10;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
else
{
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
else
{
if (x_9 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_nat_dec_eq(x_15, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
else
{
return x_10;
}
}
}
}
}
}
lean_object* l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Cache_inferType___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_PersistentHashMap_root___default___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Cache_inferType___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Cache_inferType___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_funInfo___default___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instBEqInfoCacheKey___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_funInfo___default___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_funInfo___default___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_PersistentHashMap_root___default___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Cache_funInfo___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Cache_funInfo___default___closed__3;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_synthInstance___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_PersistentHashMap_root___default___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Cache_synthInstance___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Cache_synthInstance___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_whnfDefault___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Cache_inferType___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Cache_whnfAll___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Cache_inferType___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_State_mctx___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarContext_instInhabitedMetavarContext___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_State_cache___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_Cache_inferType___default___closed__1;
x_2 = l_Lean_Meta_Cache_funInfo___default___closed__3;
x_3 = l_Lean_Meta_Cache_synthInstance___default___closed__1;
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_1);
lean_ctor_set(x_4, 4, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_State_cache___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_State_cache___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_State_zetaFVarIds___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_NameSet_empty;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_State_postponed___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentArray_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedState___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_MetavarContext_instInhabitedMetavarContext___closed__1;
x_2 = l_Lean_Meta_State_cache___default___closed__1;
x_3 = l_Lean_NameSet_empty;
x_4 = l_Std_PersistentArray_empty___closed__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedState() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instInhabitedState___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Context_config___default___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_1 = 0;
x_2 = 1;
x_3 = 1;
x_4 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_4, 0, x_1);
lean_ctor_set_uint8(x_4, 1, x_1);
lean_ctor_set_uint8(x_4, 2, x_1);
lean_ctor_set_uint8(x_4, 3, x_1);
lean_ctor_set_uint8(x_4, 4, x_1);
lean_ctor_set_uint8(x_4, 5, x_2);
lean_ctor_set_uint8(x_4, 6, x_3);
lean_ctor_set_uint8(x_4, 7, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Context_config___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Context_config___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Context_lctx___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_instInhabitedLocalContext___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Context_localInstances___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
lean_object* l_Lean_Meta_instInhabitedMetaM___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_instInhabitedException___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_instInhabitedMetaM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_instInhabitedMetaM(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_apply_6(x_2, x_9, x_3, x_4, x_5, x_6, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_instMonadLCtxMetaM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_instMonadLCtxMetaM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instMonadLCtxMetaM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadLCtxMetaM___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instMonadLCtxMetaM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_instMonadLCtxMetaM___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instMonadLCtxMetaM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__3;
return x_1;
}
}
lean_object* l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ReaderT_read___at_Lean_Meta_instMonadLCtxMetaM___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_instMonadLCtxMetaM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instMonadLCtxMetaM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_2, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_apply_1(x_1, x_11);
lean_ctor_set(x_8, 0, x_12);
x_13 = lean_st_ref_set(x_3, x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_24 = lean_apply_1(x_1, x_20);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
x_26 = lean_st_ref_set(x_3, x_25, x_9);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMCtxMetaM___lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMCtxMetaM___lambda__2___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadMCtxMetaM___closed__1;
x_2 = l_Lean_Meta_instMonadMCtxMetaM___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMCtxMetaM___lambda__3___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_2 = l_Lean_Meta_instMonadMCtxMetaM___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instMonadMCtxMetaM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instMonadMCtxMetaM___closed__5;
return x_1;
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_instMonadMCtxMetaM___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instMonadMCtxMetaM___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_instMonadMCtxMetaM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instMonadMCtxMetaM___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_3, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
lean_inc(x_15);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_4, 0);
lean_inc(x_23);
lean_inc(x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_10);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
return x_26;
}
}
}
static lean_object* _init_l_Lean_Meta_instAddMessageContextMetaM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instAddMessageContextMetaM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instAddMessageContextMetaM___closed__1;
return x_1;
}
}
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_MetaM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_st_mk_ref(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_8);
x_10 = lean_apply_5(x_1, x_2, x_8, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_8, x_12);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
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
x_19 = lean_alloc_ctor(0, 2, 0);
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
lean_dec(x_8);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Meta_MetaM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_run___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_MetaM_run_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_st_mk_ref(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_8);
x_10 = lean_apply_5(x_1, x_2, x_8, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_8, x_12);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_8);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_MetaM_run_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_run_x27___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_MetaM_toIO_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Meta_MetaM_toIO_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_toIO_match__1___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_MetaM_toIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_st_mk_ref(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_st_mk_ref(x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_11);
x_13 = lean_apply_5(x_1, x_4, x_11, x_2, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_11, x_15);
lean_dec(x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_8, x_18);
lean_dec(x_8);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_17);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_14);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_11);
lean_dec(x_8);
x_29 = lean_ctor_get(x_13, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_dec(x_13);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_MessageData_toString(x_31, x_30);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_13, 0);
lean_dec(x_45);
x_46 = lean_ctor_get(x_29, 0);
lean_inc(x_46);
lean_dec(x_29);
x_47 = l_Nat_repr(x_46);
x_48 = l_Lean_InternalExceptionId_toString___closed__1;
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_13, 0, x_50);
return x_13;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_13, 1);
lean_inc(x_51);
lean_dec(x_13);
x_52 = lean_ctor_get(x_29, 0);
lean_inc(x_52);
lean_dec(x_29);
x_53 = l_Nat_repr(x_52);
x_54 = l_Lean_InternalExceptionId_toString___closed__1;
x_55 = lean_string_append(x_54, x_53);
lean_dec(x_53);
x_56 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_51);
return x_57;
}
}
}
}
}
lean_object* l_Lean_Meta_MetaM_toIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_toIO___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_Context_config___default___closed__1;
x_2 = l_Lean_LocalContext_instInhabitedLocalContext___closed__1;
x_3 = l_Array_empty___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_MetavarContext_instInhabitedMetavarContext___closed__1;
x_2 = l_Lean_Meta_State_cache___default___closed__1;
x_3 = l_Lean_NameSet_empty;
x_4 = l_Std_PersistentArray_empty___closed__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_29 = l_Lean_getMaxRecDepth(x_3);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_box(0);
lean_inc(x_3);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Lean_Unhygienic_run___rarg___closed__1;
x_34 = l_Lean_NameGenerator_instInhabitedNameGenerator___closed__1;
x_35 = l_Lean_TraceState_instInhabitedTraceState___closed__1;
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_35);
x_37 = lean_st_mk_ref(x_36, x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2;
x_41 = lean_st_mk_ref(x_40, x_39);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1;
lean_inc(x_38);
lean_inc(x_32);
lean_inc(x_42);
x_45 = lean_apply_5(x_4, x_44, x_42, x_32, x_38, x_43);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_st_ref_get(x_42, x_47);
lean_dec(x_42);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_Lean_printTraces___at_Lean_Core_instMetaEvalCoreM___spec__1(x_32, x_38, x_49);
lean_dec(x_32);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_38, x_51);
lean_dec(x_38);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = 1;
x_57 = lean_box(x_56);
x_58 = lean_apply_5(x_1, x_55, x_3, x_46, x_57, x_54);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_46);
lean_dec(x_38);
lean_dec(x_3);
lean_dec(x_1);
x_59 = lean_ctor_get(x_50, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_dec(x_50);
x_7 = x_59;
x_8 = x_60;
goto block_28;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_42);
lean_dec(x_3);
lean_dec(x_1);
x_61 = lean_ctor_get(x_45, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_45, 1);
lean_inc(x_62);
lean_dec(x_45);
x_63 = l_Lean_printTraces___at_Lean_Core_instMetaEvalCoreM___spec__1(x_32, x_38, x_62);
lean_dec(x_38);
lean_dec(x_32);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_7 = x_61;
x_8 = x_64;
goto block_28;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_61);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_7 = x_65;
x_8 = x_66;
goto block_28;
}
}
block_28:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_MessageData_toString(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = l_Nat_repr(x_22);
x_24 = l_Lean_InternalExceptionId_toString___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_8);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_instMetaEvalMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instMetaEvalMetaM___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instMetaEvalMetaM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_Lean_Meta_instMetaEvalMetaM___rarg(x_1, x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_isDefEqStuckExceptionId;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_throwIsDefEqStuck___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_throwIsDefEqStuck(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_throwIsDefEqStuck___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Meta_throwIsDefEqStuck___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_throwIsDefEqStuck(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Meta");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("debug");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4;
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
lean_object* l_Lean_Meta_liftMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_liftMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_liftMetaM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mapMetaM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_3, lean_box(0), x_1);
x_10 = lean_apply_7(x_2, lean_box(0), x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_mapMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_mapMetaM___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_mapMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mapMetaM___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_map1MetaM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_1(x_1, x_3);
x_10 = lean_apply_7(x_2, lean_box(0), x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_map1MetaM___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map1MetaM___rarg___lambda__1), 8, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_apply_7(x_2, lean_box(0), x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_map1MetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_map1MetaM___rarg___lambda__2), 8, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_map1MetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_map1MetaM___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_map2MetaM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_1, x_3, x_4);
x_11 = lean_apply_7(x_2, lean_box(0), x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_map2MetaM___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_apply_7(x_2, lean_box(0), x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_map2MetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__2), 8, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_5);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_apply_2(x_10, lean_box(0), x_9);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_12, lean_box(0));
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_13);
return x_14;
}
}
lean_object* l_Lean_Meta_map2MetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalInstances___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_getLocalInstances___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalInstances___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getLocalInstances___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_getLocalInstances___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getLocalInstances___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_getLocalInstances___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getLocalInstances(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalInstances___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalInstances___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getLocalInstances___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_getConfig___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_getConfig___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getConfig___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getConfig___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_getConfig___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getConfig___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_getConfig___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getConfig(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getConfig___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getConfig___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getConfig___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_setMCtx___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_1);
x_12 = lean_st_ref_set(x_3, x_8, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_st_ref_set(x_3, x_22, x_9);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
lean_object* l_Lean_Meta_setMCtx___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_setMCtx___rarg___lambda__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_setMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setMCtx___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setMCtx___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_setMCtx___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_st_ref_take(x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 2);
lean_dec(x_10);
x_11 = l_Lean_NameSet_empty;
lean_ctor_set(x_7, 2, x_11);
x_12 = lean_st_ref_set(x_2, x_7, x_8);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
x_21 = lean_ctor_get(x_7, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_22 = l_Lean_NameSet_empty;
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_21);
x_24 = lean_st_ref_set(x_2, x_23, x_8);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
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
static lean_object* _init_l_Lean_Meta_resetZetaFVarIds___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_resetZetaFVarIds___rarg___closed__1;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_resetZetaFVarIds(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_resetZetaFVarIds___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_resetZetaFVarIds___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_getZetaFVarIds___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getZetaFVarIds___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getZetaFVarIds___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadMCtxMetaM___closed__1;
x_2 = l_Lean_Meta_getZetaFVarIds___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getZetaFVarIds___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_getZetaFVarIds___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getZetaFVarIds(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getZetaFVarIds___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getZetaFVarIds___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getZetaFVarIds___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_getPostponed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_getPostponed___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getPostponed___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getPostponed___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadMCtxMetaM___closed__1;
x_2 = l_Lean_Meta_getPostponed___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getPostponed___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_getPostponed___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getPostponed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getPostponed___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getPostponed___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getPostponed___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_setPostponed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 3);
lean_dec(x_11);
lean_ctor_set(x_8, 3, x_1);
x_12 = lean_st_ref_set(x_3, x_8, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_8, 0);
x_20 = lean_ctor_get(x_8, 1);
x_21 = lean_ctor_get(x_8, 2);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_22, 2, x_21);
lean_ctor_set(x_22, 3, x_1);
x_23 = lean_st_ref_set(x_3, x_22, x_9);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
lean_object* l_Lean_Meta_setPostponed___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_setPostponed___rarg___lambda__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_setPostponed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setPostponed___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setPostponed___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_setPostponed___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_modifyPostponed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = lean_apply_1(x_1, x_11);
lean_ctor_set(x_8, 3, x_12);
x_13 = lean_st_ref_set(x_3, x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_24 = lean_apply_1(x_1, x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_9);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Meta_modifyPostponed___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_modifyPostponed___rarg___lambda__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_modifyPostponed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_modifyPostponed___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_modifyPostponed___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_modifyPostponed___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 3);
x_9 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
lean_inc(x_8);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("whnf implementation was not set");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3;
x_8 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_7, lean_box(0), x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1;
x_3 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferType implementation was not set");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3;
x_8 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_7, lean_box(0), x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1;
x_3 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("isDefEq implementation was not set");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3;
x_9 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_8, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1;
x_3 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1;
x_3 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_1, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 1);
lean_dec(x_12);
lean_ctor_set(x_6, 1, x_10);
x_13 = l_Lean_Meta_whnfRef;
x_14 = lean_st_ref_get(x_13, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_apply_6(x_15, x_2, x_4, x_5, x_6, x_7, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 2);
x_20 = lean_ctor_get(x_6, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_10);
lean_ctor_set(x_21, 2, x_19);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Lean_Meta_whnfRef;
x_23 = lean_st_ref_get(x_22, x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_apply_6(x_24, x_2, x_4, x_5, x_21, x_7, x_25);
return x_26;
}
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 2);
lean_inc(x_8);
x_9 = lean_nat_dec_eq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Meta_whnf___rarg___lambda__2(x_2, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_1);
x_12 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_13 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_12, lean_box(0), x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_Meta_whnf___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_whnf___rarg___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_whnf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_whnf___rarg___lambda__3___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_whnf___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_whnf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnf___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_whnf___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_whnf___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_whnf___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_whnf___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfForall___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_isForall(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, lean_box(0), x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_3);
return x_10;
}
}
}
lean_object* l_Lean_Meta_whnfForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Lean_Meta_whnf___rarg(x_1, x_3);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_whnfForall___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_whnfForall(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnfForall___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_inferType___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_1, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 1);
lean_dec(x_12);
lean_ctor_set(x_6, 1, x_10);
x_13 = l_Lean_Meta_inferTypeRef;
x_14 = lean_st_ref_get(x_13, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_apply_6(x_15, x_2, x_4, x_5, x_6, x_7, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 2);
x_20 = lean_ctor_get(x_6, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_10);
lean_ctor_set(x_21, 2, x_19);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Lean_Meta_inferTypeRef;
x_23 = lean_st_ref_get(x_22, x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_apply_6(x_24, x_2, x_4, x_5, x_21, x_7, x_25);
return x_26;
}
}
}
lean_object* l_Lean_Meta_inferType___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 2);
lean_inc(x_8);
x_9 = lean_nat_dec_eq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Meta_inferType___rarg___lambda__1(x_2, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_1);
x_12 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_13 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_12, lean_box(0), x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_inferType___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_inferType___rarg___lambda__2___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_whnf___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_inferType(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_inferType___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_inferType___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_inferType___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_inferType___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_inferType___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_isExprDefEqAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 1);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_11);
x_14 = l_Lean_Meta_isExprDefEqAuxRef;
x_15 = lean_st_ref_get(x_14, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_apply_7(x_16, x_2, x_3, x_5, x_6, x_7, x_8, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 2);
x_21 = lean_ctor_get(x_7, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_11);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = l_Lean_Meta_isExprDefEqAuxRef;
x_24 = lean_st_ref_get(x_23, x_9);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_apply_7(x_25, x_2, x_3, x_5, x_6, x_22, x_8, x_26);
return x_27;
}
}
}
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Meta_isExprDefEqAux___lambda__1(x_8, x_1, x_2, x_11, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_14 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_13, lean_box(0), x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_isExprDefEqAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_isExprDefEqAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Meta_synthPending___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_1, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 1);
lean_dec(x_12);
lean_ctor_set(x_6, 1, x_10);
x_13 = l_Lean_Meta_synthPendingRef;
x_14 = lean_st_ref_get(x_13, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_apply_6(x_15, x_2, x_4, x_5, x_6, x_7, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 2);
x_20 = lean_ctor_get(x_6, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_10);
lean_ctor_set(x_21, 2, x_19);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Lean_Meta_synthPendingRef;
x_23 = lean_st_ref_get(x_22, x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_apply_6(x_24, x_2, x_4, x_5, x_21, x_7, x_25);
return x_26;
}
}
}
lean_object* l_Lean_Meta_synthPending(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Meta_synthPending___lambda__1(x_7, x_1, x_10, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_1);
x_12 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_13 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_12, lean_box(0), x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_synthPending___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_synthPending___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 1);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_11);
x_14 = lean_apply_7(x_2, lean_box(0), x_3, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_7);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
x_19 = lean_apply_7(x_2, lean_box(0), x_3, x_5, x_6, x_18, x_8, x_9);
return x_19;
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Meta_withIncRecDepth___rarg___lambda__1(x_8, x_2, x_1, x_11, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_14 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_13, lean_box(0), x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_withIncRecDepth___rarg___lambda__2), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withIncRecDepth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withIncRecDepth___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_withIncRecDepth___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_st_ref_take(x_9, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_1);
x_18 = l_Lean_MetavarContext_addExprMVarDecl(x_17, x_1, x_6, x_2, x_3, x_4, x_5, x_7);
lean_ctor_set(x_14, 0, x_18);
x_19 = lean_st_ref_set(x_9, x_14, x_15);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = l_Lean_mkMVar(x_1);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = l_Lean_mkMVar(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
x_28 = lean_ctor_get(x_14, 2);
x_29 = lean_ctor_get(x_14, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
lean_inc(x_1);
x_30 = l_Lean_MetavarContext_addExprMVarDecl(x_26, x_1, x_6, x_2, x_3, x_4, x_5, x_7);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_27);
lean_ctor_set(x_31, 2, x_28);
lean_ctor_set(x_31, 3, x_29);
x_32 = lean_st_ref_set(x_9, x_31, x_15);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = l_Lean_mkMVar(x_1);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_14;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = lean_name_mk_numeral(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
lean_ctor_set(x_14, 2, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_5);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_st_ref_set(x_1, x_26, x_15);
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
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_5);
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_name_mk_numeral(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_32, x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_st_ref_take(x_1, x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 3);
lean_inc(x_42);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_43 = x_38;
} else {
 lean_dec_ref(x_38);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 4, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_36);
lean_ctor_set(x_44, 3, x_42);
x_45 = lean_st_ref_set(x_1, x_44, x_39);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_33);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg___boxed), 2, 0);
return x_4;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(x_7, x_1, x_2, x_3, x_4, x_5, x_6, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
static lean_object* _init_l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_box(x_5);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1___boxed), 12, 6);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_8);
lean_closure_set(x_9, 4, x_6);
lean_closure_set(x_9, 5, x_7);
x_10 = l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1;
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_2(x_1, lean_box(0), x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVarAt___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Meta_mkFreshExprMVarAt___rarg___lambda__1(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_14;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Lean_Meta_mkFreshExprMVarAt___rarg(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_1);
x_12 = l_Lean_MetavarContext_addLevelMVarDecl(x_11, x_1);
lean_ctor_set(x_8, 0, x_12);
x_13 = lean_st_ref_set(x_3, x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = l_Lean_mkLevelMVar(x_1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_mkLevelMVar(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
lean_inc(x_1);
x_24 = l_Lean_MetavarContext_addLevelMVarDecl(x_20, x_1);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
x_26 = lean_st_ref_set(x_3, x_25, x_9);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = l_Lean_mkLevelMVar(x_1);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
static lean_object* _init_l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1;
x_2 = l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_mkFreshLevelMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2(x_9, x_11, x_1, x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Meta_mkFreshExprMVarAt___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__2(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_st_ref_take(x_1, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_6);
x_13 = l_Lean_MetavarContext_addLevelMVarDecl(x_12, x_6);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_1, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = l_Lean_mkLevelMVar(x_6);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_mkLevelMVar(x_6);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_6);
x_25 = l_Lean_MetavarContext_addLevelMVarDecl(x_21, x_6);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_1, x_26, x_10);
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
x_30 = l_Lean_mkLevelMVar(x_6);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_mkSort(x_10);
x_13 = 0;
x_14 = lean_box(0);
lean_inc(x_4);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(x_12, x_13, x_14, x_4, x_5, x_6, x_7, x_11);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(x_3);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___boxed), 8, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Meta_mkFreshExprMVar___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Meta_mkFreshTypeMVar___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_mkSort(x_3);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_10, x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_box(x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_apply_2(x_1, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshTypeMVar___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVar___at_Lean_Meta_mkFreshTypeMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Lean_Meta_mkFreshExprMVar___at_Lean_Meta_mkFreshTypeMVar___spec__1(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Meta_mkFreshTypeMVar___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
lean_object* l_Lean_Meta_mkFreshTypeMVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Meta_mkFreshTypeMVar___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(x_1, x_6, x_13, x_2, x_3, x_4, x_5, x_7, x_8, x_9, x_10, x_14);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_instMonadLCtxMetaM___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_box(x_4);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1___boxed), 11, 5);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_7);
lean_closure_set(x_8, 3, x_5);
lean_closure_set(x_8, 4, x_6);
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1;
x_10 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
x_11 = lean_apply_2(x_1, lean_box(0), x_10);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___lambda__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg(x_1, x_2, x_3, x_7, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVarWithIdImpl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
x_12 = l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarAtCore(x_1, x_11, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = l_Lean_Meta_mkFreshLevelMVar___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl___spec__1___rarg(x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_mkSort(x_11);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = 0;
x_16 = lean_box(0);
lean_inc(x_5);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_14, x_15, x_16, x_5, x_6, x_7, x_8, x_12);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1(x_1, x_18, x_3, x_4, x_20, x_5, x_6, x_7, x_8, x_19);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1(x_1, x_22, x_3, x_4, x_23, x_5, x_6, x_7, x_8, x_9);
return x_24;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___at_Lean_Meta_mkFreshExprMVarWithIdImpl___spec__1(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_12;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = l_Lean_Meta_mkFreshExprMVarWithIdImpl(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_11;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVarWithIdImpl___boxed), 9, 4);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
lean_closure_set(x_7, 3, x_5);
x_8 = lean_apply_2(x_1, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVarWithId___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Meta_mkFreshExprMVarWithId___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_shouldReduceAll(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_6, 5);
x_8 = 0;
x_9 = l_Lean_Meta_TransparencyMode_beq(x_7, x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
lean_object* l_Lean_Meta_shouldReduceAll___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_shouldReduceAll(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get_uint8(x_7, 5);
x_9 = 2;
x_10 = l_Lean_Meta_TransparencyMode_beq(x_8, x_9);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
static lean_object* _init_l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_shouldReduceReducibleOnly___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_shouldReduceReducibleOnly___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_getTransparency___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get_uint8(x_7, 5);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_getTransparency___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getTransparency___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getTransparency___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadLCtxMetaM___closed__1;
x_2 = l_Lean_Meta_getTransparency___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getTransparency___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_getTransparency___rarg___closed__2;
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getTransparency(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getTransparency___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getTransparency___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getTransparency___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_getMVarDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_getMVarDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getMVarDecl_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown metavariable '");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = lean_metavar_ctx_find_decl(x_2, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = l_Lean_mkMVar(x_1);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_14, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
return x_17;
}
}
}
lean_object* l_Lean_Meta_getMVarDecl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getMVarDecl___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_getMVarDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getMVarDecl___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getMVarDecl___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getMVarDecl___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_setMVarKind___rarg___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = l_Lean_MetavarContext_setMVarKind(x_12, x_1, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_4, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = l_Lean_MetavarContext_setMVarKind(x_21, x_1, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_4, x_26, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_setMVarKind___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_setMVarKind___rarg___lambda__1___boxed), 7, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_setMVarKind(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setMVarKind___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setMVarKind___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_setMVarKind___rarg___lambda__1(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_setMVarKind___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Meta_setMVarKind___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_setMVarType___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = l_Lean_MetavarContext_setMVarType(x_12, x_1, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_4, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = l_Lean_MetavarContext_setMVarType(x_21, x_1, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_4, x_26, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_setMVarType___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_setMVarType___rarg___lambda__1___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_setMVarType(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setMVarType___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setMVarType___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_setMVarType___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_metavar_ctx_find_decl(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_free_object(x_7);
x_13 = l_Lean_mkMVar(x_1);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_18, lean_box(0), x_2, x_3, x_4, x_5, x_10);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_1);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
lean_ctor_set(x_7, 0, x_20);
return x_7;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_1);
x_24 = lean_metavar_ctx_find_decl(x_23, x_1);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = l_Lean_mkMVar(x_1);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_30, lean_box(0), x_2, x_3, x_4, x_5, x_22);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_1);
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_22);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
x_14 = 1;
x_15 = lean_box(x_14);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
x_17 = lean_box(x_16);
lean_ctor_set(x_7, 0, x_17);
return x_7;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_1, 3);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_isReadOnlyExprMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyExprMVar___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isReadOnlyExprMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_8 = lean_box(x_7);
if (lean_obj_tag(x_8) == 2)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_8);
x_12 = lean_st_ref_get(x_3, x_6);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_1, 3);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_nat_dec_eq(x_16, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; 
x_19 = 1;
x_20 = lean_box(x_19);
lean_ctor_set(x_12, 0, x_20);
return x_12;
}
else
{
uint8_t x_21; lean_object* x_22; 
x_21 = 0;
x_22 = lean_box(x_21);
lean_ctor_set(x_12, 0, x_22);
return x_12;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_1, 3);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_nat_dec_eq(x_26, x_27);
lean_dec(x_27);
if (x_28 == 0)
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_24);
return x_31;
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyLevelMVar_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown universe metavariable '");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_2);
x_8 = l_Lean_MetavarContext_findLevelDepth_x3f(x_2, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_9 = l_Lean_mkLevelMVar(x_1);
x_10 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_14, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_nat_dec_eq(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_7);
return x_21;
}
else
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_7);
return x_24;
}
}
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isReadOnlyLevelMVar___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_renameMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = l_Lean_MetavarContext_renameMVar(x_12, x_1, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_4, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = l_Lean_MetavarContext_renameMVar(x_21, x_1, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_4, x_26, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_renameMVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_renameMVar___rarg___lambda__1___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_renameMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_renameMVar___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_renameMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_renameMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_metavar_ctx_is_expr_assigned(x_2, x_1);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isExprMVarAssigned___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isExprMVarAssigned___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_metavar_ctx_get_expr_assignment(x_2, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getExprMVarAssignment_x3f___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getExprMVarAssignment_x3f___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_assignExprMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = l_Lean_MetavarContext_assignExpr(x_12, x_1, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_4, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = l_Lean_MetavarContext_assignExpr(x_21, x_1, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_4, x_26, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_assignExprMVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_assignExprMVar___rarg___lambda__1___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_assignExprMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_assignExprMVar___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_assignExprMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_assignExprMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_isDelayedAssigned___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_metavar_ctx_is_delayed_assigned(x_2, x_1);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_isDelayedAssigned___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_isDelayedAssigned___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_isDelayedAssigned(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDelayedAssigned___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDelayedAssigned___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isDelayedAssigned___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_metavar_ctx_get_delayed_assignment(x_2, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_getDelayedAssignment_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getDelayedAssignment_x3f___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getDelayedAssignment_x3f___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_hasAssignableMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_MetavarContext_hasAssignableMVar(x_2, x_1);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_hasAssignableMVar___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_hasAssignableMVar___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_hasAssignableMVar___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_hasAssignableMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_hasAssignableMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownFVar___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown free variable '");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownFVar___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_throwUnknownFVar___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_throwUnknownFVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_Lean_mkFVar(x_1);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_Lean_Meta_throwUnknownFVar___rarg___closed__2;
x_10 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_12, lean_box(0), x_2, x_3, x_4, x_5, x_6);
return x_13;
}
}
lean_object* l_Lean_Meta_throwUnknownFVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_throwUnknownFVar___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_throwUnknownFVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_throwUnknownFVar___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_local_ctx_find(x_2, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_findLocalDecl_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_findLocalDecl_x3f___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_findLocalDecl_x3f___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_getLocalDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_getLocalDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDecl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = lean_local_ctx_find(x_2, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Meta_throwUnknownFVar___rarg(x_1, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
}
lean_object* l_Lean_Meta_getLocalDecl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_getLocalDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDecl___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getLocalDecl___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_local_ctx_find(x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Meta_throwUnknownFVar___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Expr_fvarId_x21(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1___boxed), 6, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getFVarLocalDecl___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_getFVarLocalDecl___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDeclFromUserName_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown local declaration '");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = lean_local_ctx_find_from_user_name(x_2, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_13, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDeclFromUserName___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_8, x_2, x_3, x_4, x_5, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_level_update_succ(x_1, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_level_update_succ(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_17);
lean_dec(x_1);
lean_inc(x_17);
x_19 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_17, x_2, x_3, x_4, x_5, x_6);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_22 = x_19;
} else {
 lean_dec_ref(x_19);
 x_22 = lean_box(0);
}
x_23 = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set_uint64(x_23, sizeof(void*)*1, x_18);
x_24 = lean_level_update_succ(x_23, x_20);
if (lean_is_scalar(x_22)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_22;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
case 2:
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_29 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_27, x_2, x_3, x_4, x_5, x_6);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_28);
x_32 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_28, x_2, x_3, x_4, x_5, x_31);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_level_update_max(x_1, x_30, x_34);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_level_update_max(x_1, x_30, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; uint64_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_1, 0);
x_41 = lean_ctor_get(x_1, 1);
x_42 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_1);
lean_inc(x_40);
x_43 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_40, x_2, x_3, x_4, x_5, x_6);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_41);
x_46 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_41, x_2, x_3, x_4, x_5, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
x_50 = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(x_50, 0, x_40);
lean_ctor_set(x_50, 1, x_41);
lean_ctor_set_uint64(x_50, sizeof(void*)*2, x_42);
x_51 = lean_level_update_max(x_50, x_44, x_47);
if (lean_is_scalar(x_49)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_49;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_48);
return x_52;
}
}
case 3:
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_54 = lean_ctor_get(x_1, 0);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_56 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_54, x_2, x_3, x_4, x_5, x_6);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
lean_inc(x_55);
x_59 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_55, x_2, x_3, x_4, x_5, x_58);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_level_update_imax(x_1, x_57, x_61);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_59, 0);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_59);
x_65 = lean_level_update_imax(x_1, x_57, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; uint64_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_67 = lean_ctor_get(x_1, 0);
x_68 = lean_ctor_get(x_1, 1);
x_69 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_1);
lean_inc(x_67);
x_70 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_67, x_2, x_3, x_4, x_5, x_6);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
lean_inc(x_68);
x_73 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_68, x_2, x_3, x_4, x_5, x_72);
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
x_77 = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(x_77, 0, x_67);
lean_ctor_set(x_77, 1, x_68);
lean_ctor_set_uint64(x_77, sizeof(void*)*2, x_69);
x_78 = lean_level_update_imax(x_77, x_71, x_74);
if (lean_is_scalar(x_76)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_76;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_75);
return x_79;
}
}
case 5:
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_1, 0);
lean_inc(x_80);
x_81 = lean_st_ref_get(x_3, x_6);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_81, 1);
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
lean_dec(x_83);
lean_inc(x_80);
x_86 = lean_metavar_ctx_get_level_assignment(x_85, x_80);
if (lean_obj_tag(x_86) == 0)
{
lean_dec(x_80);
lean_ctor_set(x_81, 0, x_1);
return x_81;
}
else
{
lean_object* x_87; uint8_t x_88; 
lean_dec(x_1);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_Lean_Level_hasMVar(x_87);
if (x_88 == 0)
{
lean_dec(x_80);
lean_ctor_set(x_81, 0, x_87);
return x_81;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
lean_free_object(x_81);
x_89 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_87, x_2, x_3, x_4, x_5, x_84);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_st_ref_take(x_3, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = !lean_is_exclusive(x_93);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_96 = lean_ctor_get(x_93, 0);
lean_inc(x_90);
x_97 = lean_metavar_ctx_assign_level(x_96, x_80, x_90);
lean_ctor_set(x_93, 0, x_97);
x_98 = lean_st_ref_set(x_3, x_93, x_94);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
lean_object* x_100; 
x_100 = lean_ctor_get(x_98, 0);
lean_dec(x_100);
lean_ctor_set(x_98, 0, x_90);
return x_98;
}
else
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec(x_98);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_90);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_103 = lean_ctor_get(x_93, 0);
x_104 = lean_ctor_get(x_93, 1);
x_105 = lean_ctor_get(x_93, 2);
x_106 = lean_ctor_get(x_93, 3);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_93);
lean_inc(x_90);
x_107 = lean_metavar_ctx_assign_level(x_103, x_80, x_90);
x_108 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_104);
lean_ctor_set(x_108, 2, x_105);
lean_ctor_set(x_108, 3, x_106);
x_109 = lean_st_ref_set(x_3, x_108, x_94);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_90);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_81, 0);
x_114 = lean_ctor_get(x_81, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_81);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
lean_dec(x_113);
lean_inc(x_80);
x_116 = lean_metavar_ctx_get_level_assignment(x_115, x_80);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; 
lean_dec(x_80);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_1);
lean_ctor_set(x_117, 1, x_114);
return x_117;
}
else
{
lean_object* x_118; uint8_t x_119; 
lean_dec(x_1);
x_118 = lean_ctor_get(x_116, 0);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_Lean_Level_hasMVar(x_118);
if (x_119 == 0)
{
lean_object* x_120; 
lean_dec(x_80);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_114);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_121 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_118, x_2, x_3, x_4, x_5, x_114);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_st_ref_take(x_3, x_123);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_125, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_125, 3);
lean_inc(x_130);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 lean_ctor_release(x_125, 2);
 lean_ctor_release(x_125, 3);
 x_131 = x_125;
} else {
 lean_dec_ref(x_125);
 x_131 = lean_box(0);
}
lean_inc(x_122);
x_132 = lean_metavar_ctx_assign_level(x_127, x_80, x_122);
if (lean_is_scalar(x_131)) {
 x_133 = lean_alloc_ctor(0, 4, 0);
} else {
 x_133 = x_131;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_128);
lean_ctor_set(x_133, 2, x_129);
lean_ctor_set(x_133, 3, x_130);
x_134 = lean_st_ref_set(x_3, x_133, x_126);
x_135 = lean_ctor_get(x_134, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_136 = x_134;
} else {
 lean_dec_ref(x_134);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_122);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
}
default: 
{
lean_object* x_138; 
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_1);
lean_ctor_set(x_138, 1, x_6);
return x_138;
}
}
}
}
lean_object* l_Lean_Meta_instantiateLevelMVarsImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_instantiateLevelMVarsImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instantiateLevelMVarsImp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_instantiateLevelMVars___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLevelMVarsImp___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_instantiateLevelMVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLevelMVars___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_9, x_2, x_3, x_4, x_5, x_6, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_level_update_succ(x_1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_level_update_succ(x_1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_18);
x_20 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_18, x_2, x_3, x_4, x_5, x_6, x_7);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_23 = x_20;
} else {
 lean_dec_ref(x_20);
 x_23 = lean_box(0);
}
x_24 = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set_uint64(x_24, sizeof(void*)*1, x_19);
x_25 = lean_level_update_succ(x_24, x_21);
if (lean_is_scalar(x_23)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_23;
}
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
case 2:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_30 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_28, x_2, x_3, x_4, x_5, x_6, x_7);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_29);
x_33 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_29, x_2, x_3, x_4, x_5, x_6, x_32);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_level_update_max(x_1, x_31, x_35);
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
x_39 = lean_level_update_max(x_1, x_31, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; uint64_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_41 = lean_ctor_get(x_1, 0);
x_42 = lean_ctor_get(x_1, 1);
x_43 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_1);
lean_inc(x_41);
x_44 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_41, x_2, x_3, x_4, x_5, x_6, x_7);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_42);
x_47 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_42, x_2, x_3, x_4, x_5, x_6, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(x_51, 0, x_41);
lean_ctor_set(x_51, 1, x_42);
lean_ctor_set_uint64(x_51, sizeof(void*)*2, x_43);
x_52 = lean_level_update_max(x_51, x_45, x_48);
if (lean_is_scalar(x_50)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_50;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
}
case 3:
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_1);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_55 = lean_ctor_get(x_1, 0);
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_57 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_55, x_2, x_3, x_4, x_5, x_6, x_7);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_56);
x_60 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_56, x_2, x_3, x_4, x_5, x_6, x_59);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_60, 0);
x_63 = lean_level_update_imax(x_1, x_58, x_62);
lean_ctor_set(x_60, 0, x_63);
return x_60;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_60, 0);
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_60);
x_66 = lean_level_update_imax(x_1, x_58, x_64);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; uint64_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_68 = lean_ctor_get(x_1, 0);
x_69 = lean_ctor_get(x_1, 1);
x_70 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_1);
lean_inc(x_68);
x_71 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_68, x_2, x_3, x_4, x_5, x_6, x_7);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
lean_inc(x_69);
x_74 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_69, x_2, x_3, x_4, x_5, x_6, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(x_78, 0, x_68);
lean_ctor_set(x_78, 1, x_69);
lean_ctor_set_uint64(x_78, sizeof(void*)*2, x_70);
x_79 = lean_level_update_imax(x_78, x_72, x_75);
if (lean_is_scalar(x_77)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_77;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_76);
return x_80;
}
}
case 5:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_81 = lean_ctor_get(x_1, 0);
lean_inc(x_81);
x_82 = lean_st_ref_get(x_4, x_7);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = lean_ctor_get(x_82, 1);
x_86 = lean_ctor_get(x_84, 0);
lean_inc(x_86);
lean_dec(x_84);
lean_inc(x_81);
x_87 = lean_metavar_ctx_get_level_assignment(x_86, x_81);
if (lean_obj_tag(x_87) == 0)
{
lean_dec(x_81);
lean_ctor_set(x_82, 0, x_1);
return x_82;
}
else
{
lean_object* x_88; uint8_t x_89; 
lean_dec(x_1);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
lean_dec(x_87);
x_89 = l_Lean_Level_hasMVar(x_88);
if (x_89 == 0)
{
lean_dec(x_81);
lean_ctor_set(x_82, 0, x_88);
return x_82;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_free_object(x_82);
x_90 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_88, x_2, x_3, x_4, x_5, x_6, x_85);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_st_ref_take(x_4, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = !lean_is_exclusive(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_97 = lean_ctor_get(x_94, 0);
lean_inc(x_91);
x_98 = lean_metavar_ctx_assign_level(x_97, x_81, x_91);
lean_ctor_set(x_94, 0, x_98);
x_99 = lean_st_ref_set(x_4, x_94, x_95);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_99, 0);
lean_dec(x_101);
lean_ctor_set(x_99, 0, x_91);
return x_99;
}
else
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_91);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_104 = lean_ctor_get(x_94, 0);
x_105 = lean_ctor_get(x_94, 1);
x_106 = lean_ctor_get(x_94, 2);
x_107 = lean_ctor_get(x_94, 3);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_94);
lean_inc(x_91);
x_108 = lean_metavar_ctx_assign_level(x_104, x_81, x_91);
x_109 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_105);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_107);
x_110 = lean_st_ref_set(x_4, x_109, x_95);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_112 = x_110;
} else {
 lean_dec_ref(x_110);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_91);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_82, 0);
x_115 = lean_ctor_get(x_82, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_82);
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
lean_dec(x_114);
lean_inc(x_81);
x_117 = lean_metavar_ctx_get_level_assignment(x_116, x_81);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; 
lean_dec(x_81);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_1);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
else
{
lean_object* x_119; uint8_t x_120; 
lean_dec(x_1);
x_119 = lean_ctor_get(x_117, 0);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Level_hasMVar(x_119);
if (x_120 == 0)
{
lean_object* x_121; 
lean_dec(x_81);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_115);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_122 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_119, x_2, x_3, x_4, x_5, x_6, x_115);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_st_ref_take(x_4, x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_ctor_get(x_126, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_126, 2);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 3);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 lean_ctor_release(x_126, 2);
 lean_ctor_release(x_126, 3);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
lean_inc(x_123);
x_133 = lean_metavar_ctx_assign_level(x_128, x_81, x_123);
if (lean_is_scalar(x_132)) {
 x_134 = lean_alloc_ctor(0, 4, 0);
} else {
 x_134 = x_132;
}
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_129);
lean_ctor_set(x_134, 2, x_130);
lean_ctor_set(x_134, 3, x_131);
x_135 = lean_st_ref_set(x_4, x_134, x_127);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_137 = x_135;
} else {
 lean_dec_ref(x_135);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_123);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
}
}
default: 
{
lean_object* x_139; 
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_1);
lean_ctor_set(x_139, 1, x_7);
return x_139;
}
}
}
}
lean_object* l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_12, x_3, x_4, x_5, x_6, x_7, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_15);
lean_ctor_set(x_17, 0, x_2);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_2, 1, x_20);
lean_ctor_set(x_2, 0, x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_2);
x_25 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_23, x_3, x_4, x_5, x_6, x_7, x_8);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(x_1, x_24, x_3, x_4, x_5, x_6, x_7, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 < x_1;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_11 = x_3;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
x_16 = x_13;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_16, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_15, x_2, x_22);
x_2 = x_21;
x_3 = x_23;
x_9 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = l_Lean_Expr_isMVar(x_2);
x_13 = lean_st_ref_get(x_7, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_metavar_ctx_get_delayed_assignment(x_16, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_2, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_18) == 0)
{
if (x_12 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_array_get_size(x_3);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = x_3;
x_24 = lean_box_usize(x_22);
x_25 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_26 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
lean_closure_set(x_26, 2, x_23);
x_27 = x_26;
x_28 = lean_apply_6(x_27, x_5, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l_Lean_mkAppN(x_19, x_30);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = l_Lean_mkAppN(x_19, x_32);
lean_dec(x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_19);
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_18, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_18, 1);
lean_inc(x_41);
lean_dec(x_18);
x_42 = l_Lean_Expr_isLambda(x_40);
if (x_42 == 0)
{
lean_object* x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_array_get_size(x_3);
x_44 = lean_usize_of_nat(x_43);
lean_dec(x_43);
x_45 = x_3;
x_46 = lean_box_usize(x_44);
x_47 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_48 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_48, 0, x_46);
lean_closure_set(x_48, 1, x_47);
lean_closure_set(x_48, 2, x_45);
x_49 = x_48;
x_50 = lean_apply_6(x_49, x_5, x_6, x_7, x_8, x_9, x_41);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = l_Lean_mkAppN(x_40, x_52);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_53);
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_56 = l_Lean_mkAppN(x_40, x_54);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_40);
x_58 = !lean_is_exclusive(x_50);
if (x_58 == 0)
{
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = l_Array_reverse___rarg(x_3);
x_63 = l_Lean_Expr_betaRev(x_40, x_62);
lean_dec(x_62);
lean_dec(x_40);
x_64 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_63, x_5, x_6, x_7, x_8, x_9, x_41);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_18);
if (x_65 == 0)
{
return x_18;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_18, 0);
x_67 = lean_ctor_get(x_18, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_18);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_69 = lean_ctor_get(x_17, 0);
lean_inc(x_69);
lean_dec(x_17);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 2);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_array_get_size(x_3);
x_73 = lean_array_get_size(x_70);
x_74 = lean_nat_dec_lt(x_72, x_73);
if (x_74 == 0)
{
lean_object* x_75; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_75 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_71, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l_Lean_Expr_hasExprMVar(x_76);
if (x_78 == 0)
{
size_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_2);
x_79 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_80 = x_3;
x_81 = lean_box_usize(x_79);
x_82 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_83 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_83, 0, x_81);
lean_closure_set(x_83, 1, x_82);
lean_closure_set(x_83, 2, x_80);
x_84 = x_83;
x_85 = lean_apply_6(x_84, x_5, x_6, x_7, x_8, x_9, x_77);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_85, 0);
x_88 = lean_expr_abstract(x_76, x_70);
lean_dec(x_70);
lean_dec(x_76);
x_89 = lean_unsigned_to_nat(0u);
x_90 = lean_expr_instantiate_rev_range(x_88, x_89, x_73, x_87);
lean_dec(x_88);
x_91 = lean_array_get_size(x_87);
x_92 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_91, x_87, x_73, x_90);
lean_dec(x_87);
lean_dec(x_91);
lean_ctor_set(x_85, 0, x_92);
return x_85;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = lean_ctor_get(x_85, 0);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_85);
x_95 = lean_expr_abstract(x_76, x_70);
lean_dec(x_70);
lean_dec(x_76);
x_96 = lean_unsigned_to_nat(0u);
x_97 = lean_expr_instantiate_rev_range(x_95, x_96, x_73, x_93);
lean_dec(x_95);
x_98 = lean_array_get_size(x_93);
x_99 = l___private_Lean_Expr_0__Lean_mkAppRangeAux(x_98, x_93, x_73, x_97);
lean_dec(x_93);
lean_dec(x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_94);
return x_100;
}
}
else
{
uint8_t x_101; 
lean_dec(x_76);
lean_dec(x_73);
lean_dec(x_70);
x_101 = !lean_is_exclusive(x_85);
if (x_101 == 0)
{
return x_85;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_85, 0);
x_103 = lean_ctor_get(x_85, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_85);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
size_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_76);
lean_dec(x_73);
lean_dec(x_70);
x_105 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_106 = x_3;
x_107 = lean_box_usize(x_105);
x_108 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_109 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_109, 0, x_107);
lean_closure_set(x_109, 1, x_108);
lean_closure_set(x_109, 2, x_106);
x_110 = x_109;
x_111 = lean_apply_6(x_110, x_5, x_6, x_7, x_8, x_9, x_77);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = l_Lean_mkAppN(x_2, x_113);
lean_dec(x_113);
lean_ctor_set(x_111, 0, x_114);
return x_111;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_111, 0);
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_111);
x_117 = l_Lean_mkAppN(x_2, x_115);
lean_dec(x_115);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
else
{
uint8_t x_119; 
lean_dec(x_2);
x_119 = !lean_is_exclusive(x_111);
if (x_119 == 0)
{
return x_111;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_111, 0);
x_121 = lean_ctor_get(x_111, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_111);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_70);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_75);
if (x_123 == 0)
{
return x_75;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_75, 0);
x_125 = lean_ctor_get(x_75, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_75);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
size_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_70);
x_127 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_128 = x_3;
x_129 = lean_box_usize(x_127);
x_130 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_131 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_131, 0, x_129);
lean_closure_set(x_131, 1, x_130);
lean_closure_set(x_131, 2, x_128);
x_132 = x_131;
x_133 = lean_apply_6(x_132, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_133) == 0)
{
uint8_t x_134; 
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = l_Lean_mkAppN(x_2, x_135);
lean_dec(x_135);
lean_ctor_set(x_133, 0, x_136);
return x_133;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_133, 0);
x_138 = lean_ctor_get(x_133, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_133);
x_139 = l_Lean_mkAppN(x_2, x_137);
lean_dec(x_137);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
else
{
uint8_t x_141; 
lean_dec(x_2);
x_141 = !lean_is_exclusive(x_133);
if (x_141 == 0)
{
return x_133;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_133, 0);
x_143 = lean_ctor_get(x_133, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_133);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
}
}
case 5:
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_145 = lean_ctor_get(x_2, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_2, 1);
lean_inc(x_146);
lean_dec(x_2);
x_147 = lean_array_set(x_3, x_4, x_146);
x_148 = lean_unsigned_to_nat(1u);
x_149 = lean_nat_sub(x_4, x_148);
lean_dec(x_4);
x_2 = x_145;
x_3 = x_147;
x_4 = x_149;
goto _start;
}
default: 
{
uint8_t x_151; lean_object* x_152; 
lean_dec(x_4);
x_151 = l_Lean_Expr_isMVar(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_152 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_2, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_152) == 0)
{
if (x_151 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; size_t x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_array_get_size(x_3);
x_156 = lean_usize_of_nat(x_155);
lean_dec(x_155);
x_157 = x_3;
x_158 = lean_box_usize(x_156);
x_159 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_160 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_160, 0, x_158);
lean_closure_set(x_160, 1, x_159);
lean_closure_set(x_160, 2, x_157);
x_161 = x_160;
x_162 = lean_apply_6(x_161, x_5, x_6, x_7, x_8, x_9, x_154);
if (lean_obj_tag(x_162) == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_162, 0);
x_165 = l_Lean_mkAppN(x_153, x_164);
lean_dec(x_164);
lean_ctor_set(x_162, 0, x_165);
return x_162;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_162, 0);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_162);
x_168 = l_Lean_mkAppN(x_153, x_166);
lean_dec(x_166);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_153);
x_170 = !lean_is_exclusive(x_162);
if (x_170 == 0)
{
return x_162;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_162, 0);
x_172 = lean_ctor_get(x_162, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_162);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_174 = lean_ctor_get(x_152, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_152, 1);
lean_inc(x_175);
lean_dec(x_152);
x_176 = l_Lean_Expr_isLambda(x_174);
if (x_176 == 0)
{
lean_object* x_177; size_t x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_177 = lean_array_get_size(x_3);
x_178 = lean_usize_of_nat(x_177);
lean_dec(x_177);
x_179 = x_3;
x_180 = lean_box_usize(x_178);
x_181 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1;
x_182 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed), 9, 3);
lean_closure_set(x_182, 0, x_180);
lean_closure_set(x_182, 1, x_181);
lean_closure_set(x_182, 2, x_179);
x_183 = x_182;
x_184 = lean_apply_6(x_183, x_5, x_6, x_7, x_8, x_9, x_175);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; 
x_186 = lean_ctor_get(x_184, 0);
x_187 = l_Lean_mkAppN(x_174, x_186);
lean_dec(x_186);
lean_ctor_set(x_184, 0, x_187);
return x_184;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_188 = lean_ctor_get(x_184, 0);
x_189 = lean_ctor_get(x_184, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_184);
x_190 = l_Lean_mkAppN(x_174, x_188);
lean_dec(x_188);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_189);
return x_191;
}
}
else
{
uint8_t x_192; 
lean_dec(x_174);
x_192 = !lean_is_exclusive(x_184);
if (x_192 == 0)
{
return x_184;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_184, 0);
x_194 = lean_ctor_get(x_184, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_184);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = l_Array_reverse___rarg(x_3);
x_197 = l_Lean_Expr_betaRev(x_174, x_196);
lean_dec(x_196);
lean_dec(x_174);
x_198 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_197, x_5, x_6, x_7, x_8, x_9, x_175);
return x_198;
}
}
}
else
{
uint8_t x_199; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_199 = !lean_is_exclusive(x_152);
if (x_199 == 0)
{
return x_152;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_152, 0);
x_201 = lean_ctor_get(x_152, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_152);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
}
}
}
lean_object* l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_20; lean_object* x_21; lean_object* x_29; uint8_t x_30; 
x_29 = lean_box(0);
x_30 = l_Lean_Expr_hasMVar(x_1);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_7);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_st_ref_get(x_2, x_7);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_ctor_get(x_32, 1);
x_36 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_34, x_1);
lean_dec(x_34);
if (lean_obj_tag(x_36) == 0)
{
lean_free_object(x_32);
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_st_ref_get(x_2, x_35);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_39, x_1);
lean_dec(x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_st_ref_get(x_4, x_40);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_37);
x_46 = lean_metavar_ctx_get_expr_assignment(x_45, x_37);
if (lean_obj_tag(x_46) == 0)
{
lean_dec(x_37);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_44;
goto block_28;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
lean_dec(x_46);
lean_inc(x_4);
lean_inc(x_2);
x_48 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_47, x_2, x_3, x_4, x_5, x_6, x_44);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_st_ref_take(x_4, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_49);
x_56 = l_Lean_MetavarContext_assignExpr(x_55, x_37, x_49);
lean_ctor_set(x_52, 0, x_56);
x_57 = lean_st_ref_set(x_4, x_52, x_53);
lean_dec(x_4);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_20 = x_49;
x_21 = x_58;
goto block_28;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_59 = lean_ctor_get(x_52, 0);
x_60 = lean_ctor_get(x_52, 1);
x_61 = lean_ctor_get(x_52, 2);
x_62 = lean_ctor_get(x_52, 3);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_52);
lean_inc(x_49);
x_63 = l_Lean_MetavarContext_assignExpr(x_59, x_37, x_49);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set(x_64, 2, x_61);
lean_ctor_set(x_64, 3, x_62);
x_65 = lean_st_ref_set(x_4, x_64, x_53);
lean_dec(x_4);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_20 = x_49;
x_21 = x_66;
goto block_28;
}
}
else
{
uint8_t x_67; 
lean_dec(x_37);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_48);
if (x_67 == 0)
{
return x_48;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_48, 0);
x_69 = lean_ctor_get(x_48, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_48);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
lean_object* x_71; 
lean_dec(x_37);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = lean_ctor_get(x_41, 0);
lean_inc(x_71);
lean_dec(x_41);
x_8 = x_71;
x_9 = x_40;
goto block_19;
}
}
case 3:
{
lean_object* x_72; uint64_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_72 = lean_ctor_get(x_1, 0);
lean_inc(x_72);
x_73 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_72);
x_74 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_72, x_2, x_3, x_4, x_5, x_6, x_35);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set_uint64(x_77, sizeof(void*)*1, x_73);
x_78 = lean_expr_update_sort(x_77, x_75);
x_79 = lean_st_ref_take(x_2, x_76);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
lean_inc(x_78);
x_82 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_80, x_1, x_78);
x_83 = lean_st_ref_set(x_2, x_82, x_81);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_83, 0);
lean_dec(x_85);
lean_ctor_set(x_83, 0, x_78);
return x_83;
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_78);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
case 4:
{
lean_object* x_88; lean_object* x_89; uint64_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_88 = lean_ctor_get(x_1, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_1, 1);
lean_inc(x_89);
x_90 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_89);
x_91 = l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(x_29, x_89, x_2, x_3, x_4, x_5, x_6, x_35);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_94, 0, x_88);
lean_ctor_set(x_94, 1, x_89);
lean_ctor_set_uint64(x_94, sizeof(void*)*2, x_90);
x_95 = lean_expr_update_const(x_94, x_92);
x_96 = lean_st_ref_take(x_2, x_93);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
lean_inc(x_95);
x_99 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_97, x_1, x_95);
x_100 = lean_st_ref_set(x_2, x_99, x_98);
lean_dec(x_2);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_100, 0);
lean_dec(x_102);
lean_ctor_set(x_100, 0, x_95);
return x_100;
}
else
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
lean_dec(x_100);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_95);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
case 5:
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_105 = lean_unsigned_to_nat(0u);
x_106 = l_Lean_Expr_getAppNumArgsAux(x_1, x_105);
x_107 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_106);
x_108 = lean_mk_array(x_106, x_107);
x_109 = lean_unsigned_to_nat(1u);
x_110 = lean_nat_sub(x_106, x_109);
lean_dec(x_106);
lean_inc(x_2);
lean_inc(x_1);
x_111 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5(x_29, x_1, x_108, x_110, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_st_ref_take(x_2, x_113);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
lean_inc(x_112);
x_117 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_115, x_1, x_112);
x_118 = lean_st_ref_set(x_2, x_117, x_116);
lean_dec(x_2);
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
lean_object* x_120; 
x_120 = lean_ctor_get(x_118, 0);
lean_dec(x_120);
lean_ctor_set(x_118, 0, x_112);
return x_118;
}
else
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_118, 1);
lean_inc(x_121);
lean_dec(x_118);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_112);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_2);
lean_dec(x_1);
x_123 = !lean_is_exclusive(x_111);
if (x_123 == 0)
{
return x_111;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_111, 0);
x_125 = lean_ctor_get(x_111, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_111);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
case 6:
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint64_t x_130; lean_object* x_131; 
x_127 = lean_ctor_get(x_1, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_1, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_1, 2);
lean_inc(x_129);
x_130 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_128);
x_131 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_128, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
lean_inc(x_2);
lean_inc(x_129);
x_134 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_129, x_2, x_3, x_4, x_5, x_6, x_133);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_137, 0, x_127);
lean_ctor_set(x_137, 1, x_128);
lean_ctor_set(x_137, 2, x_129);
lean_ctor_set_uint64(x_137, sizeof(void*)*3, x_130);
x_138 = (uint8_t)((x_130 << 24) >> 61);
x_139 = lean_expr_update_lambda(x_137, x_138, x_132, x_135);
x_140 = lean_st_ref_take(x_2, x_136);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
lean_inc(x_139);
x_143 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_141, x_1, x_139);
x_144 = lean_st_ref_set(x_2, x_143, x_142);
lean_dec(x_2);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_144, 0);
lean_dec(x_146);
lean_ctor_set(x_144, 0, x_139);
return x_144;
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
lean_dec(x_144);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_139);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
else
{
uint8_t x_149; 
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_2);
lean_dec(x_1);
x_149 = !lean_is_exclusive(x_134);
if (x_149 == 0)
{
return x_134;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_134, 0);
x_151 = lean_ctor_get(x_134, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_134);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_153 = !lean_is_exclusive(x_131);
if (x_153 == 0)
{
return x_131;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_131, 0);
x_155 = lean_ctor_get(x_131, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_131);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
case 7:
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; uint64_t x_160; lean_object* x_161; 
x_157 = lean_ctor_get(x_1, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_1, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_1, 2);
lean_inc(x_159);
x_160 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_158);
x_161 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_158, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
lean_inc(x_2);
lean_inc(x_159);
x_164 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_159, x_2, x_3, x_4, x_5, x_6, x_163);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_167, 0, x_157);
lean_ctor_set(x_167, 1, x_158);
lean_ctor_set(x_167, 2, x_159);
lean_ctor_set_uint64(x_167, sizeof(void*)*3, x_160);
x_168 = (uint8_t)((x_160 << 24) >> 61);
x_169 = lean_expr_update_forall(x_167, x_168, x_162, x_165);
x_170 = lean_st_ref_take(x_2, x_166);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
lean_inc(x_169);
x_173 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_171, x_1, x_169);
x_174 = lean_st_ref_set(x_2, x_173, x_172);
lean_dec(x_2);
x_175 = !lean_is_exclusive(x_174);
if (x_175 == 0)
{
lean_object* x_176; 
x_176 = lean_ctor_get(x_174, 0);
lean_dec(x_176);
lean_ctor_set(x_174, 0, x_169);
return x_174;
}
else
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_177);
lean_dec(x_174);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_169);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
else
{
uint8_t x_179; 
lean_dec(x_162);
lean_dec(x_159);
lean_dec(x_158);
lean_dec(x_157);
lean_dec(x_2);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_164);
if (x_179 == 0)
{
return x_164;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_164, 0);
x_181 = lean_ctor_get(x_164, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_164);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_159);
lean_dec(x_158);
lean_dec(x_157);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_183 = !lean_is_exclusive(x_161);
if (x_183 == 0)
{
return x_161;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_161, 0);
x_185 = lean_ctor_get(x_161, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_161);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
case 8:
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint64_t x_191; lean_object* x_192; 
x_187 = lean_ctor_get(x_1, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_1, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_1, 2);
lean_inc(x_189);
x_190 = lean_ctor_get(x_1, 3);
lean_inc(x_190);
x_191 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_188);
x_192 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_188, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_189);
x_195 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_189, x_2, x_3, x_4, x_5, x_6, x_194);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
lean_inc(x_2);
lean_inc(x_190);
x_198 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_190, x_2, x_3, x_4, x_5, x_6, x_197);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_201, 0, x_187);
lean_ctor_set(x_201, 1, x_188);
lean_ctor_set(x_201, 2, x_189);
lean_ctor_set(x_201, 3, x_190);
lean_ctor_set_uint64(x_201, sizeof(void*)*4, x_191);
x_202 = lean_expr_update_let(x_201, x_193, x_196, x_199);
x_203 = lean_st_ref_take(x_2, x_200);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
lean_inc(x_202);
x_206 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_204, x_1, x_202);
x_207 = lean_st_ref_set(x_2, x_206, x_205);
lean_dec(x_2);
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_207, 0);
lean_dec(x_209);
lean_ctor_set(x_207, 0, x_202);
return x_207;
}
else
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_dec(x_207);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_202);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
else
{
uint8_t x_212; 
lean_dec(x_196);
lean_dec(x_193);
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_187);
lean_dec(x_2);
lean_dec(x_1);
x_212 = !lean_is_exclusive(x_198);
if (x_212 == 0)
{
return x_198;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_198, 0);
x_214 = lean_ctor_get(x_198, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_198);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
else
{
uint8_t x_216; 
lean_dec(x_193);
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_187);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_216 = !lean_is_exclusive(x_195);
if (x_216 == 0)
{
return x_195;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_195, 0);
x_218 = lean_ctor_get(x_195, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_195);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
else
{
uint8_t x_220; 
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_187);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_220 = !lean_is_exclusive(x_192);
if (x_220 == 0)
{
return x_192;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_192, 0);
x_222 = lean_ctor_get(x_192, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_192);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
case 10:
{
lean_object* x_224; lean_object* x_225; uint64_t x_226; lean_object* x_227; 
x_224 = lean_ctor_get(x_1, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_1, 1);
lean_inc(x_225);
x_226 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_2);
lean_inc(x_225);
x_227 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_225, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_230 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_230, 0, x_224);
lean_ctor_set(x_230, 1, x_225);
lean_ctor_set_uint64(x_230, sizeof(void*)*2, x_226);
x_231 = lean_expr_update_mdata(x_230, x_228);
x_232 = lean_st_ref_take(x_2, x_229);
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
lean_inc(x_231);
x_235 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_233, x_1, x_231);
x_236 = lean_st_ref_set(x_2, x_235, x_234);
lean_dec(x_2);
x_237 = !lean_is_exclusive(x_236);
if (x_237 == 0)
{
lean_object* x_238; 
x_238 = lean_ctor_get(x_236, 0);
lean_dec(x_238);
lean_ctor_set(x_236, 0, x_231);
return x_236;
}
else
{
lean_object* x_239; lean_object* x_240; 
x_239 = lean_ctor_get(x_236, 1);
lean_inc(x_239);
lean_dec(x_236);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_231);
lean_ctor_set(x_240, 1, x_239);
return x_240;
}
}
else
{
uint8_t x_241; 
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_2);
lean_dec(x_1);
x_241 = !lean_is_exclusive(x_227);
if (x_241 == 0)
{
return x_227;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_227, 0);
x_243 = lean_ctor_get(x_227, 1);
lean_inc(x_243);
lean_inc(x_242);
lean_dec(x_227);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
return x_244;
}
}
}
case 11:
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; uint64_t x_248; lean_object* x_249; 
x_245 = lean_ctor_get(x_1, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_1, 1);
lean_inc(x_246);
x_247 = lean_ctor_get(x_1, 2);
lean_inc(x_247);
x_248 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
lean_inc(x_247);
x_249 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_247, x_2, x_3, x_4, x_5, x_6, x_35);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
lean_dec(x_249);
x_252 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_252, 0, x_245);
lean_ctor_set(x_252, 1, x_246);
lean_ctor_set(x_252, 2, x_247);
lean_ctor_set_uint64(x_252, sizeof(void*)*3, x_248);
x_253 = lean_expr_update_proj(x_252, x_250);
x_254 = lean_st_ref_take(x_2, x_251);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
lean_inc(x_253);
x_257 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_255, x_1, x_253);
x_258 = lean_st_ref_set(x_2, x_257, x_256);
lean_dec(x_2);
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; 
x_260 = lean_ctor_get(x_258, 0);
lean_dec(x_260);
lean_ctor_set(x_258, 0, x_253);
return x_258;
}
else
{
lean_object* x_261; lean_object* x_262; 
x_261 = lean_ctor_get(x_258, 1);
lean_inc(x_261);
lean_dec(x_258);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_253);
lean_ctor_set(x_262, 1, x_261);
return x_262;
}
}
else
{
uint8_t x_263; 
lean_dec(x_247);
lean_dec(x_246);
lean_dec(x_245);
lean_dec(x_2);
lean_dec(x_1);
x_263 = !lean_is_exclusive(x_249);
if (x_263 == 0)
{
return x_249;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_249, 0);
x_265 = lean_ctor_get(x_249, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_249);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
}
default: 
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_267 = lean_st_ref_take(x_2, x_35);
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
lean_inc_n(x_1, 2);
x_270 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_268, x_1, x_1);
x_271 = lean_st_ref_set(x_2, x_270, x_269);
lean_dec(x_2);
x_272 = !lean_is_exclusive(x_271);
if (x_272 == 0)
{
lean_object* x_273; 
x_273 = lean_ctor_get(x_271, 0);
lean_dec(x_273);
lean_ctor_set(x_271, 0, x_1);
return x_271;
}
else
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_271, 1);
lean_inc(x_274);
lean_dec(x_271);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_1);
lean_ctor_set(x_275, 1, x_274);
return x_275;
}
}
}
}
else
{
lean_object* x_276; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_276 = lean_ctor_get(x_36, 0);
lean_inc(x_276);
lean_dec(x_36);
lean_ctor_set(x_32, 0, x_276);
return x_32;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_32, 0);
x_278 = lean_ctor_get(x_32, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_32);
x_279 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_277, x_1);
lean_dec(x_277);
if (lean_obj_tag(x_279) == 0)
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_280 = lean_ctor_get(x_1, 0);
lean_inc(x_280);
x_281 = lean_st_ref_get(x_2, x_278);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_282, x_1);
lean_dec(x_282);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_285 = lean_st_ref_get(x_4, x_283);
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 1);
lean_inc(x_287);
lean_dec(x_285);
x_288 = lean_ctor_get(x_286, 0);
lean_inc(x_288);
lean_dec(x_286);
lean_inc(x_280);
x_289 = lean_metavar_ctx_get_expr_assignment(x_288, x_280);
if (lean_obj_tag(x_289) == 0)
{
lean_dec(x_280);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_20 = x_1;
x_21 = x_287;
goto block_28;
}
else
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
lean_dec(x_289);
lean_inc(x_4);
lean_inc(x_2);
x_291 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_290, x_2, x_3, x_4, x_5, x_6, x_287);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_294 = lean_st_ref_take(x_4, x_293);
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
x_297 = lean_ctor_get(x_295, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_295, 1);
lean_inc(x_298);
x_299 = lean_ctor_get(x_295, 2);
lean_inc(x_299);
x_300 = lean_ctor_get(x_295, 3);
lean_inc(x_300);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 lean_ctor_release(x_295, 1);
 lean_ctor_release(x_295, 2);
 lean_ctor_release(x_295, 3);
 x_301 = x_295;
} else {
 lean_dec_ref(x_295);
 x_301 = lean_box(0);
}
lean_inc(x_292);
x_302 = l_Lean_MetavarContext_assignExpr(x_297, x_280, x_292);
if (lean_is_scalar(x_301)) {
 x_303 = lean_alloc_ctor(0, 4, 0);
} else {
 x_303 = x_301;
}
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_298);
lean_ctor_set(x_303, 2, x_299);
lean_ctor_set(x_303, 3, x_300);
x_304 = lean_st_ref_set(x_4, x_303, x_296);
lean_dec(x_4);
x_305 = lean_ctor_get(x_304, 1);
lean_inc(x_305);
lean_dec(x_304);
x_20 = x_292;
x_21 = x_305;
goto block_28;
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_280);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_306 = lean_ctor_get(x_291, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_291, 1);
lean_inc(x_307);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_308 = x_291;
} else {
 lean_dec_ref(x_291);
 x_308 = lean_box(0);
}
if (lean_is_scalar(x_308)) {
 x_309 = lean_alloc_ctor(1, 2, 0);
} else {
 x_309 = x_308;
}
lean_ctor_set(x_309, 0, x_306);
lean_ctor_set(x_309, 1, x_307);
return x_309;
}
}
}
else
{
lean_object* x_310; 
lean_dec(x_280);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_310 = lean_ctor_get(x_284, 0);
lean_inc(x_310);
lean_dec(x_284);
x_8 = x_310;
x_9 = x_283;
goto block_19;
}
}
case 3:
{
lean_object* x_311; uint64_t x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_311 = lean_ctor_get(x_1, 0);
lean_inc(x_311);
x_312 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_311);
x_313 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_311, x_2, x_3, x_4, x_5, x_6, x_278);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(x_316, 0, x_311);
lean_ctor_set_uint64(x_316, sizeof(void*)*1, x_312);
x_317 = lean_expr_update_sort(x_316, x_314);
x_318 = lean_st_ref_take(x_2, x_315);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
lean_inc(x_317);
x_321 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_319, x_1, x_317);
x_322 = lean_st_ref_set(x_2, x_321, x_320);
lean_dec(x_2);
x_323 = lean_ctor_get(x_322, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_322)) {
 lean_ctor_release(x_322, 0);
 lean_ctor_release(x_322, 1);
 x_324 = x_322;
} else {
 lean_dec_ref(x_322);
 x_324 = lean_box(0);
}
if (lean_is_scalar(x_324)) {
 x_325 = lean_alloc_ctor(0, 2, 0);
} else {
 x_325 = x_324;
}
lean_ctor_set(x_325, 0, x_317);
lean_ctor_set(x_325, 1, x_323);
return x_325;
}
case 4:
{
lean_object* x_326; lean_object* x_327; uint64_t x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_326 = lean_ctor_get(x_1, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_1, 1);
lean_inc(x_327);
x_328 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_327);
x_329 = l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(x_29, x_327, x_2, x_3, x_4, x_5, x_6, x_278);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_332 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_332, 0, x_326);
lean_ctor_set(x_332, 1, x_327);
lean_ctor_set_uint64(x_332, sizeof(void*)*2, x_328);
x_333 = lean_expr_update_const(x_332, x_330);
x_334 = lean_st_ref_take(x_2, x_331);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
lean_inc(x_333);
x_337 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_335, x_1, x_333);
x_338 = lean_st_ref_set(x_2, x_337, x_336);
lean_dec(x_2);
x_339 = lean_ctor_get(x_338, 1);
lean_inc(x_339);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_340 = x_338;
} else {
 lean_dec_ref(x_338);
 x_340 = lean_box(0);
}
if (lean_is_scalar(x_340)) {
 x_341 = lean_alloc_ctor(0, 2, 0);
} else {
 x_341 = x_340;
}
lean_ctor_set(x_341, 0, x_333);
lean_ctor_set(x_341, 1, x_339);
return x_341;
}
case 5:
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_342 = lean_unsigned_to_nat(0u);
x_343 = l_Lean_Expr_getAppNumArgsAux(x_1, x_342);
x_344 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_343);
x_345 = lean_mk_array(x_343, x_344);
x_346 = lean_unsigned_to_nat(1u);
x_347 = lean_nat_sub(x_343, x_346);
lean_dec(x_343);
lean_inc(x_2);
lean_inc(x_1);
x_348 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5(x_29, x_1, x_345, x_347, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
x_351 = lean_st_ref_take(x_2, x_350);
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_351, 1);
lean_inc(x_353);
lean_dec(x_351);
lean_inc(x_349);
x_354 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_352, x_1, x_349);
x_355 = lean_st_ref_set(x_2, x_354, x_353);
lean_dec(x_2);
x_356 = lean_ctor_get(x_355, 1);
lean_inc(x_356);
if (lean_is_exclusive(x_355)) {
 lean_ctor_release(x_355, 0);
 lean_ctor_release(x_355, 1);
 x_357 = x_355;
} else {
 lean_dec_ref(x_355);
 x_357 = lean_box(0);
}
if (lean_is_scalar(x_357)) {
 x_358 = lean_alloc_ctor(0, 2, 0);
} else {
 x_358 = x_357;
}
lean_ctor_set(x_358, 0, x_349);
lean_ctor_set(x_358, 1, x_356);
return x_358;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_2);
lean_dec(x_1);
x_359 = lean_ctor_get(x_348, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_348, 1);
lean_inc(x_360);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_361 = x_348;
} else {
 lean_dec_ref(x_348);
 x_361 = lean_box(0);
}
if (lean_is_scalar(x_361)) {
 x_362 = lean_alloc_ctor(1, 2, 0);
} else {
 x_362 = x_361;
}
lean_ctor_set(x_362, 0, x_359);
lean_ctor_set(x_362, 1, x_360);
return x_362;
}
}
case 6:
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; uint64_t x_366; lean_object* x_367; 
x_363 = lean_ctor_get(x_1, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_1, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_1, 2);
lean_inc(x_365);
x_366 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_364);
x_367 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_364, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_367) == 0)
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_368 = lean_ctor_get(x_367, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
lean_inc(x_2);
lean_inc(x_365);
x_370 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_365, x_2, x_3, x_4, x_5, x_6, x_369);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
lean_dec(x_370);
x_373 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_373, 0, x_363);
lean_ctor_set(x_373, 1, x_364);
lean_ctor_set(x_373, 2, x_365);
lean_ctor_set_uint64(x_373, sizeof(void*)*3, x_366);
x_374 = (uint8_t)((x_366 << 24) >> 61);
x_375 = lean_expr_update_lambda(x_373, x_374, x_368, x_371);
x_376 = lean_st_ref_take(x_2, x_372);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
lean_dec(x_376);
lean_inc(x_375);
x_379 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_377, x_1, x_375);
x_380 = lean_st_ref_set(x_2, x_379, x_378);
lean_dec(x_2);
x_381 = lean_ctor_get(x_380, 1);
lean_inc(x_381);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_382 = x_380;
} else {
 lean_dec_ref(x_380);
 x_382 = lean_box(0);
}
if (lean_is_scalar(x_382)) {
 x_383 = lean_alloc_ctor(0, 2, 0);
} else {
 x_383 = x_382;
}
lean_ctor_set(x_383, 0, x_375);
lean_ctor_set(x_383, 1, x_381);
return x_383;
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
lean_dec(x_368);
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_363);
lean_dec(x_2);
lean_dec(x_1);
x_384 = lean_ctor_get(x_370, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_370, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_370)) {
 lean_ctor_release(x_370, 0);
 lean_ctor_release(x_370, 1);
 x_386 = x_370;
} else {
 lean_dec_ref(x_370);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_385);
return x_387;
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_363);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_388 = lean_ctor_get(x_367, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_367, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_367)) {
 lean_ctor_release(x_367, 0);
 lean_ctor_release(x_367, 1);
 x_390 = x_367;
} else {
 lean_dec_ref(x_367);
 x_390 = lean_box(0);
}
if (lean_is_scalar(x_390)) {
 x_391 = lean_alloc_ctor(1, 2, 0);
} else {
 x_391 = x_390;
}
lean_ctor_set(x_391, 0, x_388);
lean_ctor_set(x_391, 1, x_389);
return x_391;
}
}
case 7:
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; uint64_t x_395; lean_object* x_396; 
x_392 = lean_ctor_get(x_1, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_1, 1);
lean_inc(x_393);
x_394 = lean_ctor_get(x_1, 2);
lean_inc(x_394);
x_395 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_393);
x_396 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_393, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_396) == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_397 = lean_ctor_get(x_396, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_396, 1);
lean_inc(x_398);
lean_dec(x_396);
lean_inc(x_2);
lean_inc(x_394);
x_399 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_394, x_2, x_3, x_4, x_5, x_6, x_398);
if (lean_obj_tag(x_399) == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; uint8_t x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_400 = lean_ctor_get(x_399, 0);
lean_inc(x_400);
x_401 = lean_ctor_get(x_399, 1);
lean_inc(x_401);
lean_dec(x_399);
x_402 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_402, 0, x_392);
lean_ctor_set(x_402, 1, x_393);
lean_ctor_set(x_402, 2, x_394);
lean_ctor_set_uint64(x_402, sizeof(void*)*3, x_395);
x_403 = (uint8_t)((x_395 << 24) >> 61);
x_404 = lean_expr_update_forall(x_402, x_403, x_397, x_400);
x_405 = lean_st_ref_take(x_2, x_401);
x_406 = lean_ctor_get(x_405, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_405, 1);
lean_inc(x_407);
lean_dec(x_405);
lean_inc(x_404);
x_408 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_406, x_1, x_404);
x_409 = lean_st_ref_set(x_2, x_408, x_407);
lean_dec(x_2);
x_410 = lean_ctor_get(x_409, 1);
lean_inc(x_410);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 x_411 = x_409;
} else {
 lean_dec_ref(x_409);
 x_411 = lean_box(0);
}
if (lean_is_scalar(x_411)) {
 x_412 = lean_alloc_ctor(0, 2, 0);
} else {
 x_412 = x_411;
}
lean_ctor_set(x_412, 0, x_404);
lean_ctor_set(x_412, 1, x_410);
return x_412;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; 
lean_dec(x_397);
lean_dec(x_394);
lean_dec(x_393);
lean_dec(x_392);
lean_dec(x_2);
lean_dec(x_1);
x_413 = lean_ctor_get(x_399, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_399, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_399)) {
 lean_ctor_release(x_399, 0);
 lean_ctor_release(x_399, 1);
 x_415 = x_399;
} else {
 lean_dec_ref(x_399);
 x_415 = lean_box(0);
}
if (lean_is_scalar(x_415)) {
 x_416 = lean_alloc_ctor(1, 2, 0);
} else {
 x_416 = x_415;
}
lean_ctor_set(x_416, 0, x_413);
lean_ctor_set(x_416, 1, x_414);
return x_416;
}
}
else
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; 
lean_dec(x_394);
lean_dec(x_393);
lean_dec(x_392);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_417 = lean_ctor_get(x_396, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_396, 1);
lean_inc(x_418);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_419 = x_396;
} else {
 lean_dec_ref(x_396);
 x_419 = lean_box(0);
}
if (lean_is_scalar(x_419)) {
 x_420 = lean_alloc_ctor(1, 2, 0);
} else {
 x_420 = x_419;
}
lean_ctor_set(x_420, 0, x_417);
lean_ctor_set(x_420, 1, x_418);
return x_420;
}
}
case 8:
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; uint64_t x_425; lean_object* x_426; 
x_421 = lean_ctor_get(x_1, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_1, 1);
lean_inc(x_422);
x_423 = lean_ctor_get(x_1, 2);
lean_inc(x_423);
x_424 = lean_ctor_get(x_1, 3);
lean_inc(x_424);
x_425 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_422);
x_426 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_422, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_426) == 0)
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_426, 1);
lean_inc(x_428);
lean_dec(x_426);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_423);
x_429 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_423, x_2, x_3, x_4, x_5, x_6, x_428);
if (lean_obj_tag(x_429) == 0)
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_430 = lean_ctor_get(x_429, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_429, 1);
lean_inc(x_431);
lean_dec(x_429);
lean_inc(x_2);
lean_inc(x_424);
x_432 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_424, x_2, x_3, x_4, x_5, x_6, x_431);
if (lean_obj_tag(x_432) == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_433 = lean_ctor_get(x_432, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_432, 1);
lean_inc(x_434);
lean_dec(x_432);
x_435 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_435, 0, x_421);
lean_ctor_set(x_435, 1, x_422);
lean_ctor_set(x_435, 2, x_423);
lean_ctor_set(x_435, 3, x_424);
lean_ctor_set_uint64(x_435, sizeof(void*)*4, x_425);
x_436 = lean_expr_update_let(x_435, x_427, x_430, x_433);
x_437 = lean_st_ref_take(x_2, x_434);
x_438 = lean_ctor_get(x_437, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_437, 1);
lean_inc(x_439);
lean_dec(x_437);
lean_inc(x_436);
x_440 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_438, x_1, x_436);
x_441 = lean_st_ref_set(x_2, x_440, x_439);
lean_dec(x_2);
x_442 = lean_ctor_get(x_441, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_441)) {
 lean_ctor_release(x_441, 0);
 lean_ctor_release(x_441, 1);
 x_443 = x_441;
} else {
 lean_dec_ref(x_441);
 x_443 = lean_box(0);
}
if (lean_is_scalar(x_443)) {
 x_444 = lean_alloc_ctor(0, 2, 0);
} else {
 x_444 = x_443;
}
lean_ctor_set(x_444, 0, x_436);
lean_ctor_set(x_444, 1, x_442);
return x_444;
}
else
{
lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
lean_dec(x_430);
lean_dec(x_427);
lean_dec(x_424);
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_421);
lean_dec(x_2);
lean_dec(x_1);
x_445 = lean_ctor_get(x_432, 0);
lean_inc(x_445);
x_446 = lean_ctor_get(x_432, 1);
lean_inc(x_446);
if (lean_is_exclusive(x_432)) {
 lean_ctor_release(x_432, 0);
 lean_ctor_release(x_432, 1);
 x_447 = x_432;
} else {
 lean_dec_ref(x_432);
 x_447 = lean_box(0);
}
if (lean_is_scalar(x_447)) {
 x_448 = lean_alloc_ctor(1, 2, 0);
} else {
 x_448 = x_447;
}
lean_ctor_set(x_448, 0, x_445);
lean_ctor_set(x_448, 1, x_446);
return x_448;
}
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
lean_dec(x_427);
lean_dec(x_424);
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_421);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_449 = lean_ctor_get(x_429, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_429, 1);
lean_inc(x_450);
if (lean_is_exclusive(x_429)) {
 lean_ctor_release(x_429, 0);
 lean_ctor_release(x_429, 1);
 x_451 = x_429;
} else {
 lean_dec_ref(x_429);
 x_451 = lean_box(0);
}
if (lean_is_scalar(x_451)) {
 x_452 = lean_alloc_ctor(1, 2, 0);
} else {
 x_452 = x_451;
}
lean_ctor_set(x_452, 0, x_449);
lean_ctor_set(x_452, 1, x_450);
return x_452;
}
}
else
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; 
lean_dec(x_424);
lean_dec(x_423);
lean_dec(x_422);
lean_dec(x_421);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_453 = lean_ctor_get(x_426, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_426, 1);
lean_inc(x_454);
if (lean_is_exclusive(x_426)) {
 lean_ctor_release(x_426, 0);
 lean_ctor_release(x_426, 1);
 x_455 = x_426;
} else {
 lean_dec_ref(x_426);
 x_455 = lean_box(0);
}
if (lean_is_scalar(x_455)) {
 x_456 = lean_alloc_ctor(1, 2, 0);
} else {
 x_456 = x_455;
}
lean_ctor_set(x_456, 0, x_453);
lean_ctor_set(x_456, 1, x_454);
return x_456;
}
}
case 10:
{
lean_object* x_457; lean_object* x_458; uint64_t x_459; lean_object* x_460; 
x_457 = lean_ctor_get(x_1, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_1, 1);
lean_inc(x_458);
x_459 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_2);
lean_inc(x_458);
x_460 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_458, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_461 = lean_ctor_get(x_460, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_460, 1);
lean_inc(x_462);
lean_dec(x_460);
x_463 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_463, 0, x_457);
lean_ctor_set(x_463, 1, x_458);
lean_ctor_set_uint64(x_463, sizeof(void*)*2, x_459);
x_464 = lean_expr_update_mdata(x_463, x_461);
x_465 = lean_st_ref_take(x_2, x_462);
x_466 = lean_ctor_get(x_465, 0);
lean_inc(x_466);
x_467 = lean_ctor_get(x_465, 1);
lean_inc(x_467);
lean_dec(x_465);
lean_inc(x_464);
x_468 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_466, x_1, x_464);
x_469 = lean_st_ref_set(x_2, x_468, x_467);
lean_dec(x_2);
x_470 = lean_ctor_get(x_469, 1);
lean_inc(x_470);
if (lean_is_exclusive(x_469)) {
 lean_ctor_release(x_469, 0);
 lean_ctor_release(x_469, 1);
 x_471 = x_469;
} else {
 lean_dec_ref(x_469);
 x_471 = lean_box(0);
}
if (lean_is_scalar(x_471)) {
 x_472 = lean_alloc_ctor(0, 2, 0);
} else {
 x_472 = x_471;
}
lean_ctor_set(x_472, 0, x_464);
lean_ctor_set(x_472, 1, x_470);
return x_472;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
lean_dec(x_458);
lean_dec(x_457);
lean_dec(x_2);
lean_dec(x_1);
x_473 = lean_ctor_get(x_460, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_460, 1);
lean_inc(x_474);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_475 = x_460;
} else {
 lean_dec_ref(x_460);
 x_475 = lean_box(0);
}
if (lean_is_scalar(x_475)) {
 x_476 = lean_alloc_ctor(1, 2, 0);
} else {
 x_476 = x_475;
}
lean_ctor_set(x_476, 0, x_473);
lean_ctor_set(x_476, 1, x_474);
return x_476;
}
}
case 11:
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; uint64_t x_480; lean_object* x_481; 
x_477 = lean_ctor_get(x_1, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_1, 1);
lean_inc(x_478);
x_479 = lean_ctor_get(x_1, 2);
lean_inc(x_479);
x_480 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_2);
lean_inc(x_479);
x_481 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_479, x_2, x_3, x_4, x_5, x_6, x_278);
if (lean_obj_tag(x_481) == 0)
{
lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; 
x_482 = lean_ctor_get(x_481, 0);
lean_inc(x_482);
x_483 = lean_ctor_get(x_481, 1);
lean_inc(x_483);
lean_dec(x_481);
x_484 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_484, 0, x_477);
lean_ctor_set(x_484, 1, x_478);
lean_ctor_set(x_484, 2, x_479);
lean_ctor_set_uint64(x_484, sizeof(void*)*3, x_480);
x_485 = lean_expr_update_proj(x_484, x_482);
x_486 = lean_st_ref_take(x_2, x_483);
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
lean_dec(x_486);
lean_inc(x_485);
x_489 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_487, x_1, x_485);
x_490 = lean_st_ref_set(x_2, x_489, x_488);
lean_dec(x_2);
x_491 = lean_ctor_get(x_490, 1);
lean_inc(x_491);
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 lean_ctor_release(x_490, 1);
 x_492 = x_490;
} else {
 lean_dec_ref(x_490);
 x_492 = lean_box(0);
}
if (lean_is_scalar(x_492)) {
 x_493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_493 = x_492;
}
lean_ctor_set(x_493, 0, x_485);
lean_ctor_set(x_493, 1, x_491);
return x_493;
}
else
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; 
lean_dec(x_479);
lean_dec(x_478);
lean_dec(x_477);
lean_dec(x_2);
lean_dec(x_1);
x_494 = lean_ctor_get(x_481, 0);
lean_inc(x_494);
x_495 = lean_ctor_get(x_481, 1);
lean_inc(x_495);
if (lean_is_exclusive(x_481)) {
 lean_ctor_release(x_481, 0);
 lean_ctor_release(x_481, 1);
 x_496 = x_481;
} else {
 lean_dec_ref(x_481);
 x_496 = lean_box(0);
}
if (lean_is_scalar(x_496)) {
 x_497 = lean_alloc_ctor(1, 2, 0);
} else {
 x_497 = x_496;
}
lean_ctor_set(x_497, 0, x_494);
lean_ctor_set(x_497, 1, x_495);
return x_497;
}
}
default: 
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_498 = lean_st_ref_take(x_2, x_278);
x_499 = lean_ctor_get(x_498, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_498, 1);
lean_inc(x_500);
lean_dec(x_498);
lean_inc_n(x_1, 2);
x_501 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_499, x_1, x_1);
x_502 = lean_st_ref_set(x_2, x_501, x_500);
lean_dec(x_2);
x_503 = lean_ctor_get(x_502, 1);
lean_inc(x_503);
if (lean_is_exclusive(x_502)) {
 lean_ctor_release(x_502, 0);
 lean_ctor_release(x_502, 1);
 x_504 = x_502;
} else {
 lean_dec_ref(x_502);
 x_504 = lean_box(0);
}
if (lean_is_scalar(x_504)) {
 x_505 = lean_alloc_ctor(0, 2, 0);
} else {
 x_505 = x_504;
}
lean_ctor_set(x_505, 0, x_1);
lean_ctor_set(x_505, 1, x_503);
return x_505;
}
}
}
else
{
lean_object* x_506; lean_object* x_507; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_506 = lean_ctor_get(x_279, 0);
lean_inc(x_506);
lean_dec(x_279);
x_507 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_507, 0, x_506);
lean_ctor_set(x_507, 1, x_278);
return x_507;
}
}
}
block_19:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_take(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
x_13 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_11, x_1, x_8);
x_14 = lean_st_ref_set(x_2, x_13, x_12);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_8);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
block_28:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_st_ref_take(x_2, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_20);
lean_inc(x_1);
x_25 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_23, x_1, x_20);
x_26 = lean_st_ref_set(x_2, x_25, x_24);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_8 = x_20;
x_9 = x_27;
goto block_19;
}
}
}
lean_object* l_Lean_Meta_instantiateMVarsImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_8 = lean_st_mk_ref(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_9);
x_11 = l_Lean_MetavarContext_instantiateExprMVars___at_Lean_Meta_instantiateMVarsImp___spec__1(x_1, x_9, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_9, x_13);
lean_dec(x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_9);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateMVarsImp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_mapM___at_Lean_Meta_instantiateMVarsImp___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Meta_instantiateMVarsImp___spec__4(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_instantiateMVars___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsImp), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_instantiateMVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVars___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_9 = lean_box(x_8);
x_10 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_dec(x_1);
x_17 = lean_box(x_16);
x_18 = lean_apply_6(x_3, x_11, x_12, x_13, x_14, x_15, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLocalDeclMVars_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instantiateMVarsImp(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_3);
lean_ctor_set(x_11, 3, x_5);
lean_ctor_set_uint8(x_11, sizeof(void*)*4, x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_instantiateMVarsImp(x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_4);
lean_ctor_set(x_15, 3, x_6);
lean_ctor_set(x_15, 4, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*5, x_5);
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
x_18 = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_4);
lean_ctor_set(x_18, 3, x_6);
lean_ctor_set(x_18, 4, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*5, x_5);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1), 6, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_box(x_7);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1___boxed), 10, 4);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_5);
lean_closure_set(x_10, 3, x_9);
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_apply_2(x_1, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 4);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
lean_dec(x_2);
x_19 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1), 6, 1);
lean_closure_set(x_19, 0, x_16);
x_20 = lean_box(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2___boxed), 11, 5);
lean_closure_set(x_21, 0, x_17);
lean_closure_set(x_21, 1, x_13);
lean_closure_set(x_21, 2, x_14);
lean_closure_set(x_21, 3, x_15);
lean_closure_set(x_21, 4, x_20);
x_22 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_22, 0, x_19);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_apply_2(x_1, lean_box(0), x_22);
return x_23;
}
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLocalDeclMVars___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__1(x_1, x_2, x_3, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = l_Lean_Meta_instantiateLocalDeclMVars___rarg___lambda__2(x_1, x_2, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 3);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_5(x_3, x_9, x_10, x_11, x_12, x_8);
return x_13;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_1);
x_12 = lean_st_ref_set(x_3, x_8, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_st_ref_set(x_3, x_22, x_9);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to create binder due to failure when reverting variable dependencies");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_st_ref_get(x_3, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_5, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 2);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_apply_2(x_1, x_7, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_st_ref_take(x_5, x_14);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_23, 2);
lean_dec(x_26);
lean_ctor_set(x_23, 2, x_21);
x_27 = lean_st_ref_set(x_5, x_23, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
x_30 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_29, x_2, x_3, x_4, x_5, x_28);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_19);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_35 = lean_ctor_get(x_23, 0);
x_36 = lean_ctor_get(x_23, 1);
x_37 = lean_ctor_get(x_23, 3);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_23);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_38, 2, x_21);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_st_ref_set(x_5, x_38, x_24);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get(x_20, 0);
lean_inc(x_41);
lean_dec(x_20);
x_42 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_41, x_2, x_3, x_4, x_5, x_40);
lean_dec(x_2);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_19);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_46 = lean_ctor_get(x_18, 1);
lean_inc(x_46);
lean_dec(x_18);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_47, x_2, x_3, x_4, x_5, x_14);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = lean_st_ref_take(x_5, x_49);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_52, 2);
lean_dec(x_55);
lean_ctor_set(x_52, 2, x_50);
x_56 = lean_st_ref_set(x_5, x_52, x_53);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_59 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_58, lean_box(0), x_2, x_3, x_4, x_5, x_57);
lean_dec(x_2);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_52, 0);
x_61 = lean_ctor_get(x_52, 1);
x_62 = lean_ctor_get(x_52, 3);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_52);
x_63 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_50);
lean_ctor_set(x_63, 3, x_62);
x_64 = lean_st_ref_set(x_5, x_63, x_53);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_67 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_66, lean_box(0), x_2, x_3, x_4, x_5, x_65);
lean_dec(x_2);
return x_67;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Meta_mkForallFVarsImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Array_isEmpty___rarg(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_st_ref_get(x_4, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = 0;
x_21 = l_Lean_MetavarContext_MkBinding_mkBinding(x_20, x_9, x_1, x_2, x_20, x_20, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
x_26 = lean_st_ref_take(x_6, x_16);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_27, 2);
lean_dec(x_30);
lean_ctor_set(x_27, 2, x_25);
x_31 = lean_st_ref_set(x_6, x_27, x_28);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_33, x_3, x_4, x_5, x_6, x_32);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_24);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_24);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_ctor_get(x_27, 0);
x_40 = lean_ctor_get(x_27, 1);
x_41 = lean_ctor_get(x_27, 3);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_27);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_25);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_st_ref_set(x_6, x_42, x_28);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_23, 0);
lean_inc(x_45);
lean_dec(x_23);
x_46 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_45, x_3, x_4, x_5, x_6, x_44);
lean_dec(x_3);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_24);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_50 = lean_ctor_get(x_21, 1);
lean_inc(x_50);
lean_dec(x_21);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_51, x_3, x_4, x_5, x_6, x_16);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = lean_st_ref_take(x_6, x_53);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_56, 2);
lean_dec(x_59);
lean_ctor_set(x_56, 2, x_54);
x_60 = lean_st_ref_set(x_6, x_56, x_57);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_63 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_62, lean_box(0), x_3, x_4, x_5, x_6, x_61);
lean_dec(x_3);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_64 = lean_ctor_get(x_56, 0);
x_65 = lean_ctor_get(x_56, 1);
x_66 = lean_ctor_get(x_56, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_56);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_67, 2, x_54);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_st_ref_set(x_6, x_67, x_57);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_71 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_70, lean_box(0), x_3, x_4, x_5, x_6, x_69);
lean_dec(x_3);
return x_71;
}
}
}
else
{
lean_object* x_72; 
lean_dec(x_3);
lean_dec(x_1);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_2);
lean_ctor_set(x_72, 1, x_7);
return x_72;
}
}
}
lean_object* l_Lean_Meta_mkForallFVarsImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkForallFVarsImp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Meta_mkForallFVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVarsImp___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_mkForallFVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkLambdaFVarsImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Array_isEmpty___rarg(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_st_ref_get(x_4, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = 1;
x_21 = 0;
x_22 = l_Lean_MetavarContext_MkBinding_mkBinding(x_20, x_9, x_1, x_2, x_21, x_21, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
x_27 = lean_st_ref_take(x_6, x_16);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_ctor_get(x_28, 2);
lean_dec(x_31);
lean_ctor_set(x_28, 2, x_26);
x_32 = lean_st_ref_set(x_6, x_28, x_29);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_34, x_3, x_4, x_5, x_6, x_33);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
lean_ctor_set(x_35, 0, x_25);
return x_35;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_25);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = lean_ctor_get(x_28, 0);
x_41 = lean_ctor_get(x_28, 1);
x_42 = lean_ctor_get(x_28, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_28);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_26);
lean_ctor_set(x_43, 3, x_42);
x_44 = lean_st_ref_set(x_6, x_43, x_29);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get(x_24, 0);
lean_inc(x_46);
lean_dec(x_24);
x_47 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_46, x_3, x_4, x_5, x_6, x_45);
lean_dec(x_3);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_25);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_51 = lean_ctor_get(x_22, 1);
lean_inc(x_51);
lean_dec(x_22);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_52, x_3, x_4, x_5, x_6, x_16);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get(x_51, 1);
lean_inc(x_55);
lean_dec(x_51);
x_56 = lean_st_ref_take(x_6, x_54);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = !lean_is_exclusive(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_57, 2);
lean_dec(x_60);
lean_ctor_set(x_57, 2, x_55);
x_61 = lean_st_ref_set(x_6, x_57, x_58);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_64 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_63, lean_box(0), x_3, x_4, x_5, x_6, x_62);
lean_dec(x_3);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_57, 0);
x_66 = lean_ctor_get(x_57, 1);
x_67 = lean_ctor_get(x_57, 3);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_57);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_55);
lean_ctor_set(x_68, 3, x_67);
x_69 = lean_st_ref_set(x_6, x_68, x_58);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_72 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_71, lean_box(0), x_3, x_4, x_5, x_6, x_70);
lean_dec(x_3);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_3);
lean_dec(x_1);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_2);
lean_ctor_set(x_73, 1, x_7);
return x_73;
}
}
}
lean_object* l_Lean_Meta_mkLambdaFVarsImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkLambdaFVarsImp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Meta_mkLambdaFVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVarsImp___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkLetFVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_mkLambdaFVars___rarg(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_mkLetFVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_1, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_mkArrow___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 0;
x_10 = l_Lean_mkForall(x_3, x_9, x_1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_mkArrow___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("x");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_mkArrow___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_mkArrow___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_mkArrow___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_mkArrow___rarg___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_mkArrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_mkArrow___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = l_Lean_Meta_mkArrow___rarg___closed__3;
x_6 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_mkArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkArrow___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Core_mkFreshUserName___at_Lean_Meta_mkArrow___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_mkArrow___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkArrow___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Lean_Meta_mkForallUsedOnlyImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Array_isEmpty___rarg(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_st_ref_get(x_4, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = 0;
x_21 = 1;
x_22 = l_Lean_MetavarContext_MkBinding_mkBinding(x_20, x_9, x_1, x_2, x_21, x_20, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = lean_st_ref_take(x_6, x_16);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_27, 2);
lean_dec(x_30);
lean_ctor_set(x_27, 2, x_25);
x_31 = lean_st_ref_set(x_6, x_27, x_28);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get(x_24, 0);
lean_inc(x_33);
lean_dec(x_24);
x_34 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_33, x_3, x_4, x_5, x_6, x_32);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_23);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_ctor_get(x_27, 0);
x_40 = lean_ctor_get(x_27, 1);
x_41 = lean_ctor_get(x_27, 3);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_27);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_25);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_st_ref_set(x_6, x_42, x_28);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_24, 0);
lean_inc(x_45);
lean_dec(x_24);
x_46 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_45, x_3, x_4, x_5, x_6, x_44);
lean_dec(x_3);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_23);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_50 = lean_ctor_get(x_22, 1);
lean_inc(x_50);
lean_dec(x_22);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_51, x_3, x_4, x_5, x_6, x_16);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = lean_st_ref_take(x_6, x_53);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_56, 2);
lean_dec(x_59);
lean_ctor_set(x_56, 2, x_54);
x_60 = lean_st_ref_set(x_6, x_56, x_57);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_63 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_62, lean_box(0), x_3, x_4, x_5, x_6, x_61);
lean_dec(x_3);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_64 = lean_ctor_get(x_56, 0);
x_65 = lean_ctor_get(x_56, 1);
x_66 = lean_ctor_get(x_56, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_56);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_67, 2, x_54);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_st_ref_set(x_6, x_67, x_57);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_71 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_70, lean_box(0), x_3, x_4, x_5, x_6, x_69);
lean_dec(x_3);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_3);
lean_dec(x_1);
x_72 = lean_unsigned_to_nat(0u);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_2);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_7);
return x_74;
}
}
}
lean_object* l_Lean_Meta_mkForallUsedOnlyImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkForallUsedOnlyImp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Meta_mkForallUsedOnly___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_mkForallUsedOnlyImp___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_mkForallUsedOnly(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mkForallUsedOnly___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_elimMVarDepsImp(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Array_isEmpty___rarg(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_st_ref_get(x_5, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_7, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = l_Lean_MetavarContext_MkBinding_elimMVarDeps(x_1, x_2, x_3, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_st_ref_take(x_7, x_16);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_25, 2);
lean_dec(x_28);
lean_ctor_set(x_25, 2, x_23);
x_29 = lean_st_ref_set(x_7, x_25, x_26);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_22, 0);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_31, x_4, x_5, x_6, x_7, x_30);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_21);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_21);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_37 = lean_ctor_get(x_25, 0);
x_38 = lean_ctor_get(x_25, 1);
x_39 = lean_ctor_get(x_25, 3);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_25);
x_40 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_23);
lean_ctor_set(x_40, 3, x_39);
x_41 = lean_st_ref_set(x_7, x_40, x_26);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_22, 0);
lean_inc(x_43);
lean_dec(x_22);
x_44 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_43, x_4, x_5, x_6, x_7, x_42);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_21);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_dec(x_20);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_49, x_4, x_5, x_6, x_7, x_16);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = lean_st_ref_take(x_7, x_51);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_54, 2);
lean_dec(x_57);
lean_ctor_set(x_54, 2, x_52);
x_58 = lean_st_ref_set(x_7, x_54, x_55);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_61 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_60, lean_box(0), x_4, x_5, x_6, x_7, x_59);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_62 = lean_ctor_get(x_54, 0);
x_63 = lean_ctor_get(x_54, 1);
x_64 = lean_ctor_get(x_54, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_54);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_65, 2, x_52);
lean_ctor_set(x_65, 3, x_64);
x_66 = lean_st_ref_set(x_7, x_65, x_55);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_69 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_68, lean_box(0), x_4, x_5, x_6, x_7, x_67);
return x_69;
}
}
}
else
{
lean_object* x_70; 
lean_dec(x_1);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_2);
lean_ctor_set(x_70, 1, x_8);
return x_70;
}
}
}
lean_object* l_Lean_Meta_elimMVarDepsImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_elimMVarDepsImp(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_elimMVarDeps___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_elimMVarDepsImp___boxed), 8, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_5);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_elimMVarDeps(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_elimMVarDeps___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_elimMVarDeps___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Meta_elimMVarDeps___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_withConfig___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_apply_1(x_1, x_10);
lean_ctor_set(x_4, 0, x_11);
x_12 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_16 = lean_apply_1(x_1, x_13);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_15);
x_18 = lean_apply_7(x_3, lean_box(0), x_2, x_17, x_5, x_6, x_7, x_8);
return x_18;
}
}
}
lean_object* l_Lean_Meta_withConfig___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_withConfig___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_withConfig(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withConfig___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withTrackingZeta___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_ctor_set_uint8(x_9, 7, x_11);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
else
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get_uint8(x_9, 0);
x_14 = lean_ctor_get_uint8(x_9, 1);
x_15 = lean_ctor_get_uint8(x_9, 2);
x_16 = lean_ctor_get_uint8(x_9, 3);
x_17 = lean_ctor_get_uint8(x_9, 4);
x_18 = lean_ctor_get_uint8(x_9, 5);
x_19 = lean_ctor_get_uint8(x_9, 6);
lean_dec(x_9);
x_20 = 1;
x_21 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_21, 0, x_13);
lean_ctor_set_uint8(x_21, 1, x_14);
lean_ctor_set_uint8(x_21, 2, x_15);
lean_ctor_set_uint8(x_21, 3, x_16);
lean_ctor_set_uint8(x_21, 4, x_17);
lean_ctor_set_uint8(x_21, 5, x_18);
lean_ctor_set_uint8(x_21, 6, x_19);
lean_ctor_set_uint8(x_21, 7, x_20);
lean_ctor_set(x_3, 0, x_21);
x_22 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_26 = lean_ctor_get_uint8(x_23, 0);
x_27 = lean_ctor_get_uint8(x_23, 1);
x_28 = lean_ctor_get_uint8(x_23, 2);
x_29 = lean_ctor_get_uint8(x_23, 3);
x_30 = lean_ctor_get_uint8(x_23, 4);
x_31 = lean_ctor_get_uint8(x_23, 5);
x_32 = lean_ctor_get_uint8(x_23, 6);
if (lean_is_exclusive(x_23)) {
 x_33 = x_23;
} else {
 lean_dec_ref(x_23);
 x_33 = lean_box(0);
}
x_34 = 1;
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 0, 8);
} else {
 x_35 = x_33;
}
lean_ctor_set_uint8(x_35, 0, x_26);
lean_ctor_set_uint8(x_35, 1, x_27);
lean_ctor_set_uint8(x_35, 2, x_28);
lean_ctor_set_uint8(x_35, 3, x_29);
lean_ctor_set_uint8(x_35, 4, x_30);
lean_ctor_set_uint8(x_35, 5, x_31);
lean_ctor_set_uint8(x_35, 6, x_32);
lean_ctor_set_uint8(x_35, 7, x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_24);
lean_ctor_set(x_36, 2, x_25);
x_37 = lean_apply_7(x_2, lean_box(0), x_1, x_36, x_4, x_5, x_6, x_7);
return x_37;
}
}
}
lean_object* l_Lean_Meta_withTrackingZeta___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_withTrackingZeta___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withTrackingZeta(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withTrackingZeta___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withTransparency___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_ctor_set_uint8(x_10, 5, x_1);
x_12 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get_uint8(x_10, 0);
x_22 = lean_ctor_get_uint8(x_10, 1);
x_23 = lean_ctor_get_uint8(x_10, 2);
x_24 = lean_ctor_get_uint8(x_10, 3);
x_25 = lean_ctor_get_uint8(x_10, 4);
x_26 = lean_ctor_get_uint8(x_10, 6);
x_27 = lean_ctor_get_uint8(x_10, 7);
lean_dec(x_10);
x_28 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_28, 0, x_21);
lean_ctor_set_uint8(x_28, 1, x_22);
lean_ctor_set_uint8(x_28, 2, x_23);
lean_ctor_set_uint8(x_28, 3, x_24);
lean_ctor_set_uint8(x_28, 4, x_25);
lean_ctor_set_uint8(x_28, 5, x_1);
lean_ctor_set_uint8(x_28, 6, x_26);
lean_ctor_set_uint8(x_28, 7, x_27);
lean_ctor_set(x_4, 0, x_28);
x_29 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_36 = x_29;
} else {
 lean_dec_ref(x_29);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
x_40 = lean_ctor_get(x_4, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
x_41 = lean_ctor_get_uint8(x_38, 0);
x_42 = lean_ctor_get_uint8(x_38, 1);
x_43 = lean_ctor_get_uint8(x_38, 2);
x_44 = lean_ctor_get_uint8(x_38, 3);
x_45 = lean_ctor_get_uint8(x_38, 4);
x_46 = lean_ctor_get_uint8(x_38, 6);
x_47 = lean_ctor_get_uint8(x_38, 7);
if (lean_is_exclusive(x_38)) {
 x_48 = x_38;
} else {
 lean_dec_ref(x_38);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 0, 8);
} else {
 x_49 = x_48;
}
lean_ctor_set_uint8(x_49, 0, x_41);
lean_ctor_set_uint8(x_49, 1, x_42);
lean_ctor_set_uint8(x_49, 2, x_43);
lean_ctor_set_uint8(x_49, 3, x_44);
lean_ctor_set_uint8(x_49, 4, x_45);
lean_ctor_set_uint8(x_49, 5, x_1);
lean_ctor_set_uint8(x_49, 6, x_46);
lean_ctor_set_uint8(x_49, 7, x_47);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_39);
lean_ctor_set(x_50, 2, x_40);
x_51 = lean_apply_7(x_3, lean_box(0), x_2, x_50, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_51, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_58 = x_51;
} else {
 lean_dec_ref(x_51);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
lean_object* l_Lean_Meta_withTransparency___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_box(x_4);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_withTransparency___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_withTransparency(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withTransparency___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withTransparency___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Meta_withTransparency___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_withTransparency___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Meta_withTransparency___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_withReducible___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 2;
lean_ctor_set_uint8(x_9, 5, x_11);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get_uint8(x_9, 0);
x_22 = lean_ctor_get_uint8(x_9, 1);
x_23 = lean_ctor_get_uint8(x_9, 2);
x_24 = lean_ctor_get_uint8(x_9, 3);
x_25 = lean_ctor_get_uint8(x_9, 4);
x_26 = lean_ctor_get_uint8(x_9, 6);
x_27 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_28 = 2;
x_29 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_29, 0, x_21);
lean_ctor_set_uint8(x_29, 1, x_22);
lean_ctor_set_uint8(x_29, 2, x_23);
lean_ctor_set_uint8(x_29, 3, x_24);
lean_ctor_set_uint8(x_29, 4, x_25);
lean_ctor_set_uint8(x_29, 5, x_28);
lean_ctor_set_uint8(x_29, 6, x_26);
lean_ctor_set_uint8(x_29, 7, x_27);
lean_ctor_set(x_3, 0, x_29);
x_30 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_37 = x_30;
} else {
 lean_dec_ref(x_30);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get(x_3, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
x_42 = lean_ctor_get_uint8(x_39, 0);
x_43 = lean_ctor_get_uint8(x_39, 1);
x_44 = lean_ctor_get_uint8(x_39, 2);
x_45 = lean_ctor_get_uint8(x_39, 3);
x_46 = lean_ctor_get_uint8(x_39, 4);
x_47 = lean_ctor_get_uint8(x_39, 6);
x_48 = lean_ctor_get_uint8(x_39, 7);
if (lean_is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean_dec_ref(x_39);
 x_49 = lean_box(0);
}
x_50 = 2;
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 0, 8);
} else {
 x_51 = x_49;
}
lean_ctor_set_uint8(x_51, 0, x_42);
lean_ctor_set_uint8(x_51, 1, x_43);
lean_ctor_set_uint8(x_51, 2, x_44);
lean_ctor_set_uint8(x_51, 3, x_45);
lean_ctor_set_uint8(x_51, 4, x_46);
lean_ctor_set_uint8(x_51, 5, x_50);
lean_ctor_set_uint8(x_51, 6, x_47);
lean_ctor_set_uint8(x_51, 7, x_48);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_40);
lean_ctor_set(x_52, 2, x_41);
x_53 = lean_apply_7(x_2, lean_box(0), x_1, x_52, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_53, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_60 = x_53;
} else {
 lean_dec_ref(x_53);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
}
lean_object* l_Lean_Meta_withReducible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_withReducible___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withReducible(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withReducible___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; uint8_t x_13; 
x_12 = lean_ctor_get_uint8(x_10, 5);
x_13 = l_Lean_Meta_TransparencyMode_lt(x_12, x_1);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; 
lean_ctor_set_uint8(x_10, 5, x_1);
x_15 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
return x_15;
}
}
else
{
uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; 
x_16 = lean_ctor_get_uint8(x_10, 0);
x_17 = lean_ctor_get_uint8(x_10, 1);
x_18 = lean_ctor_get_uint8(x_10, 2);
x_19 = lean_ctor_get_uint8(x_10, 3);
x_20 = lean_ctor_get_uint8(x_10, 4);
x_21 = lean_ctor_get_uint8(x_10, 5);
x_22 = lean_ctor_get_uint8(x_10, 6);
x_23 = lean_ctor_get_uint8(x_10, 7);
lean_dec(x_10);
x_24 = l_Lean_Meta_TransparencyMode_lt(x_21, x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_25, 0, x_16);
lean_ctor_set_uint8(x_25, 1, x_17);
lean_ctor_set_uint8(x_25, 2, x_18);
lean_ctor_set_uint8(x_25, 3, x_19);
lean_ctor_set_uint8(x_25, 4, x_20);
lean_ctor_set_uint8(x_25, 5, x_21);
lean_ctor_set_uint8(x_25, 6, x_22);
lean_ctor_set_uint8(x_25, 7, x_23);
lean_ctor_set(x_4, 0, x_25);
x_26 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_27, 0, x_16);
lean_ctor_set_uint8(x_27, 1, x_17);
lean_ctor_set_uint8(x_27, 2, x_18);
lean_ctor_set_uint8(x_27, 3, x_19);
lean_ctor_set_uint8(x_27, 4, x_20);
lean_ctor_set_uint8(x_27, 5, x_1);
lean_ctor_set_uint8(x_27, 6, x_22);
lean_ctor_set_uint8(x_27, 7, x_23);
lean_ctor_set(x_4, 0, x_27);
x_28 = lean_apply_7(x_3, lean_box(0), x_2, x_4, x_5, x_6, x_7, x_8);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; lean_object* x_40; uint8_t x_41; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
x_31 = lean_ctor_get(x_4, 2);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_32 = lean_ctor_get_uint8(x_29, 0);
x_33 = lean_ctor_get_uint8(x_29, 1);
x_34 = lean_ctor_get_uint8(x_29, 2);
x_35 = lean_ctor_get_uint8(x_29, 3);
x_36 = lean_ctor_get_uint8(x_29, 4);
x_37 = lean_ctor_get_uint8(x_29, 5);
x_38 = lean_ctor_get_uint8(x_29, 6);
x_39 = lean_ctor_get_uint8(x_29, 7);
if (lean_is_exclusive(x_29)) {
 x_40 = x_29;
} else {
 lean_dec_ref(x_29);
 x_40 = lean_box(0);
}
x_41 = l_Lean_Meta_TransparencyMode_lt(x_37, x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 0, 8);
} else {
 x_42 = x_40;
}
lean_ctor_set_uint8(x_42, 0, x_32);
lean_ctor_set_uint8(x_42, 1, x_33);
lean_ctor_set_uint8(x_42, 2, x_34);
lean_ctor_set_uint8(x_42, 3, x_35);
lean_ctor_set_uint8(x_42, 4, x_36);
lean_ctor_set_uint8(x_42, 5, x_37);
lean_ctor_set_uint8(x_42, 6, x_38);
lean_ctor_set_uint8(x_42, 7, x_39);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_30);
lean_ctor_set(x_43, 2, x_31);
x_44 = lean_apply_7(x_3, lean_box(0), x_2, x_43, x_5, x_6, x_7, x_8);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
if (lean_is_scalar(x_40)) {
 x_45 = lean_alloc_ctor(0, 0, 8);
} else {
 x_45 = x_40;
}
lean_ctor_set_uint8(x_45, 0, x_32);
lean_ctor_set_uint8(x_45, 1, x_33);
lean_ctor_set_uint8(x_45, 2, x_34);
lean_ctor_set_uint8(x_45, 3, x_35);
lean_ctor_set_uint8(x_45, 4, x_36);
lean_ctor_set_uint8(x_45, 5, x_1);
lean_ctor_set_uint8(x_45, 6, x_38);
lean_ctor_set_uint8(x_45, 7, x_39);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_30);
lean_ctor_set(x_46, 2, x_31);
x_47 = lean_apply_7(x_3, lean_box(0), x_2, x_46, x_5, x_6, x_7, x_8);
return x_47;
}
}
}
}
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_box(x_4);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_withAtLeastTransparency(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withAtLeastTransparency___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Meta_withAtLeastTransparency___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_withAtLeastTransparency___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Meta_withAtLeastTransparency___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Meta_getConst_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
switch (lean_obj_tag(x_8)) {
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_apply_2(x_2, x_8, x_11);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_8);
return x_13;
}
}
}
}
}
lean_object* l_Lean_Meta_getConst_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getConst_x3f_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_box(0);
x_9 = l_Lean_mkConst(x_1, x_8);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l_Lean_throwUnknownConstant___rarg___closed__2;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_14, lean_box(0), x_3, x_4, x_5, x_6, x_7);
return x_15;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_6, 5);
x_8 = 2;
x_9 = l_Lean_Meta_TransparencyMode_beq(x_7, x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
lean_object* l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_get_reducibility_status(x_10, x_1);
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_get_reducibility_status(x_15, x_1);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = 1;
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 1;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_8);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 0);
lean_dec(x_18);
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set(x_7, 0, x_20);
return x_7;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_dec(x_7);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
}
lean_object* l_Lean_Meta_getConst_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_environment_find(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_free_object(x_7);
x_13 = l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1(x_1, lean_box(0), x_2, x_3, x_4, x_5, x_10);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 0);
switch (lean_obj_tag(x_15)) {
case 1:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_free_object(x_7);
x_16 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_16, 0);
lean_dec(x_20);
lean_ctor_set(x_16, 0, x_12);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
uint8_t x_27; 
lean_free_object(x_12);
lean_dec(x_15);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_24, 0, x_29);
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_24);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_24, 0);
lean_dec(x_34);
lean_ctor_set(x_24, 0, x_12);
return x_24;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_24, 1);
lean_inc(x_35);
lean_dec(x_24);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_12);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
case 2:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_free_object(x_7);
lean_dec(x_1);
x_37 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_10);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
uint8_t x_40; 
lean_free_object(x_12);
lean_dec(x_15);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_37, 0, x_42);
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_37, 0);
lean_dec(x_47);
lean_ctor_set(x_37, 0, x_12);
return x_37;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_dec(x_37);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_12);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
default: 
{
lean_dec(x_1);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
}
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_12, 0);
lean_inc(x_50);
lean_dec(x_12);
switch (lean_obj_tag(x_50)) {
case 1:
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_7);
x_51 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_10);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_1);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_55 = x_51;
} else {
 lean_dec_ref(x_51);
 x_55 = lean_box(0);
}
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_50);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
lean_dec(x_51);
x_59 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_50);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_63 = x_59;
} else {
 lean_dec_ref(x_59);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_50);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
}
case 2:
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_free_object(x_7);
lean_dec(x_1);
x_70 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_10);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_50);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_74 = x_70;
} else {
 lean_dec_ref(x_70);
 x_74 = lean_box(0);
}
x_75 = lean_box(0);
if (lean_is_scalar(x_74)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_74;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_50);
if (lean_is_scalar(x_78)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_78;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
default: 
{
lean_object* x_81; 
lean_dec(x_1);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_50);
lean_ctor_set(x_7, 0, x_81);
return x_7;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_7, 0);
x_83 = lean_ctor_get(x_7, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_7);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_1);
x_85 = lean_environment_find(x_84, x_1);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; 
x_86 = l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1(x_1, lean_box(0), x_2, x_3, x_4, x_5, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
switch (lean_obj_tag(x_87)) {
case 1:
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_83);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_unbox(x_90);
lean_dec(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_1);
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_93 = x_89;
} else {
 lean_dec_ref(x_89);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_94 = lean_alloc_ctor(1, 1, 0);
} else {
 x_94 = x_88;
}
lean_ctor_set(x_94, 0, x_87);
if (lean_is_scalar(x_93)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_93;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_92);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_96 = lean_ctor_get(x_89, 1);
lean_inc(x_96);
lean_dec(x_89);
x_97 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_unbox(x_98);
lean_dec(x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_88);
lean_dec(x_87);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_101 = x_97;
} else {
 lean_dec_ref(x_97);
 x_101 = lean_box(0);
}
x_102 = lean_box(0);
if (lean_is_scalar(x_101)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_101;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_97, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_105 = x_97;
} else {
 lean_dec_ref(x_97);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_106 = lean_alloc_ctor(1, 1, 0);
} else {
 x_106 = x_88;
}
lean_ctor_set(x_106, 0, x_87);
if (lean_is_scalar(x_105)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_105;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_104);
return x_107;
}
}
}
case 2:
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
lean_dec(x_1);
x_108 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_83);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_unbox(x_109);
lean_dec(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_88);
lean_dec(x_87);
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_112 = x_108;
} else {
 lean_dec_ref(x_108);
 x_112 = lean_box(0);
}
x_113 = lean_box(0);
if (lean_is_scalar(x_112)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_112;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_111);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_108, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_116 = x_108;
} else {
 lean_dec_ref(x_108);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_117 = lean_alloc_ctor(1, 1, 0);
} else {
 x_117 = x_88;
}
lean_ctor_set(x_117, 0, x_87);
if (lean_is_scalar(x_116)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_116;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
}
default: 
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_1);
if (lean_is_scalar(x_88)) {
 x_119 = lean_alloc_ctor(1, 1, 0);
} else {
 x_119 = x_88;
}
lean_ctor_set(x_119, 0, x_87);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_83);
return x_120;
}
}
}
}
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_throwUnknownConstant___at_Lean_Meta_getConst_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getReducibilityStatus___at_Lean_Meta_getConst_x3f___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_getConst_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getConst_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_getConstNoEx_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
switch (lean_obj_tag(x_8)) {
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_apply_2(x_2, x_8, x_11);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_8);
return x_13;
}
}
}
}
}
lean_object* l_Lean_Meta_getConstNoEx_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getConstNoEx_x3f_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getConstNoEx_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_environment_find(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = lean_box(0);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_12, 0);
switch (lean_obj_tag(x_15)) {
case 1:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_free_object(x_7);
x_16 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_16, 0);
lean_dec(x_20);
lean_ctor_set(x_16, 0, x_12);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
uint8_t x_27; 
lean_free_object(x_12);
lean_dec(x_15);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_24, 0, x_29);
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_24);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_24, 0);
lean_dec(x_34);
lean_ctor_set(x_24, 0, x_12);
return x_24;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_24, 1);
lean_inc(x_35);
lean_dec(x_24);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_12);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
case 2:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_free_object(x_7);
lean_dec(x_1);
x_37 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_10);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
uint8_t x_40; 
lean_free_object(x_12);
lean_dec(x_15);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_37, 0, x_42);
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_37, 0);
lean_dec(x_47);
lean_ctor_set(x_37, 0, x_12);
return x_37;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_dec(x_37);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_12);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
default: 
{
lean_dec(x_1);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
}
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_12, 0);
lean_inc(x_50);
lean_dec(x_12);
switch (lean_obj_tag(x_50)) {
case 1:
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_7);
x_51 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_10);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_1);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_55 = x_51;
} else {
 lean_dec_ref(x_51);
 x_55 = lean_box(0);
}
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_50);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
lean_dec(x_51);
x_59 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_unbox(x_60);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_50);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_63 = x_59;
} else {
 lean_dec_ref(x_59);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_50);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
}
case 2:
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_free_object(x_7);
lean_dec(x_1);
x_70 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_10);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_unbox(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_50);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_74 = x_70;
} else {
 lean_dec_ref(x_70);
 x_74 = lean_box(0);
}
x_75 = lean_box(0);
if (lean_is_scalar(x_74)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_74;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_50);
if (lean_is_scalar(x_78)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_78;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
default: 
{
lean_object* x_81; 
lean_dec(x_1);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_50);
lean_ctor_set(x_7, 0, x_81);
return x_7;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_7, 0);
x_83 = lean_ctor_get(x_7, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_7);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_1);
x_85 = lean_environment_find(x_84, x_1);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_1);
x_86 = lean_box(0);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_83);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_85, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_89 = x_85;
} else {
 lean_dec_ref(x_85);
 x_89 = lean_box(0);
}
switch (lean_obj_tag(x_88)) {
case 1:
{
lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_90 = l_Lean_Meta_shouldReduceReducibleOnly___at_Lean_Meta_getConst_x3f___spec__2(x_2, x_3, x_4, x_5, x_83);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_unbox(x_91);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_1);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_95 = lean_alloc_ctor(1, 1, 0);
} else {
 x_95 = x_89;
}
lean_ctor_set(x_95, 0, x_88);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_97 = lean_ctor_get(x_90, 1);
lean_inc(x_97);
lean_dec(x_90);
x_98 = l_Lean_isReducible___at_Lean_Meta_getConst_x3f___spec__3(x_1, x_2, x_3, x_4, x_5, x_97);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_unbox(x_99);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_89);
lean_dec(x_88);
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_102 = x_98;
} else {
 lean_dec_ref(x_98);
 x_102 = lean_box(0);
}
x_103 = lean_box(0);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_102;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_106 = x_98;
} else {
 lean_dec_ref(x_98);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_107 = lean_alloc_ctor(1, 1, 0);
} else {
 x_107 = x_89;
}
lean_ctor_set(x_107, 0, x_88);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_105);
return x_108;
}
}
}
case 2:
{
lean_object* x_109; lean_object* x_110; uint8_t x_111; 
lean_dec(x_1);
x_109 = l_Lean_Meta_shouldReduceAll(x_2, x_3, x_4, x_5, x_83);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_unbox(x_110);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_89);
lean_dec(x_88);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_113 = x_109;
} else {
 lean_dec_ref(x_109);
 x_113 = lean_box(0);
}
x_114 = lean_box(0);
if (lean_is_scalar(x_113)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_113;
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_112);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_109, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_117 = x_109;
} else {
 lean_dec_ref(x_109);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_118 = lean_alloc_ctor(1, 1, 0);
} else {
 x_118 = x_89;
}
lean_ctor_set(x_118, 0, x_88);
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_117;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
return x_119;
}
}
default: 
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_1);
if (lean_is_scalar(x_89)) {
 x_120 = lean_alloc_ctor(1, 1, 0);
} else {
 x_120 = x_89;
}
lean_ctor_set(x_120, 0, x_88);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_83);
return x_121;
}
}
}
}
}
}
lean_object* l_Lean_Meta_getConstNoEx_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getConstNoEx_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_savingCacheImpl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_3);
x_11 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_3, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_15, 1);
lean_dec(x_18);
lean_ctor_set(x_15, 1, x_10);
x_19 = lean_st_ref_set(x_3, x_15, x_16);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_12);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 2);
x_26 = lean_ctor_get(x_15, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_10);
lean_ctor_set(x_27, 2, x_25);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_st_ref_set(x_3, x_27, x_16);
lean_dec(x_3);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_12);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_11, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_st_ref_take(x_3, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_35, 1);
lean_dec(x_38);
lean_ctor_set(x_35, 1, x_10);
x_39 = lean_st_ref_set(x_3, x_35, x_36);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set_tag(x_39, 1);
lean_ctor_set(x_39, 0, x_32);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_32);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_35, 0);
x_45 = lean_ctor_get(x_35, 2);
x_46 = lean_ctor_get(x_35, 3);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_35);
x_47 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_10);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_46);
x_48 = lean_st_ref_set(x_3, x_47, x_36);
lean_dec(x_3);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(1, 2, 0);
} else {
 x_51 = x_50;
 lean_ctor_set_tag(x_51, 1);
}
lean_ctor_set(x_51, 0, x_32);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_savingCacheImpl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_savingCacheImpl___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_savingCache___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_st_ref_get(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_4);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_take(x_4, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_16, 1);
lean_dec(x_19);
lean_ctor_set(x_16, 1, x_11);
x_20 = lean_st_ref_set(x_4, x_16, x_17);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_13);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 2);
x_27 = lean_ctor_get(x_16, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_11);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set(x_28, 3, x_27);
x_29 = lean_st_ref_set(x_4, x_28, x_17);
lean_dec(x_4);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_13);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = lean_st_ref_take(x_4, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_36, 1);
lean_dec(x_39);
lean_ctor_set(x_36, 1, x_11);
x_40 = lean_st_ref_set(x_4, x_36, x_37);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set_tag(x_40, 1);
lean_ctor_set(x_40, 0, x_33);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_36, 0);
x_46 = lean_ctor_get(x_36, 2);
x_47 = lean_ctor_get(x_36, 3);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_48 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_11);
lean_ctor_set(x_48, 2, x_46);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_st_ref_set(x_4, x_48, x_37);
lean_dec(x_4);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
 lean_ctor_set_tag(x_52, 1);
}
lean_ctor_set(x_52, 0, x_33);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
lean_object* l_Lean_Meta_savingCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_savingCache___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_savingCache(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_savingCache___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_is_class(x_11, x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_free_object(x_7);
x_13 = l_Lean_Meta_getConst_x3f(x_1, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_14);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_13, 0);
lean_dec(x_22);
x_23 = lean_box(2);
lean_ctor_set(x_13, 0, x_23);
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_dec(x_13);
x_25 = lean_box(2);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_7, 0, x_31);
return x_7;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_7, 0);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_7);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_1);
x_35 = lean_is_class(x_34, x_1);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Lean_Meta_getConst_x3f(x_1, x_2, x_3, x_4, x_5, x_33);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
x_40 = lean_box(0);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_37);
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
x_44 = lean_box(2);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_36, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_36, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_48 = x_36;
} else {
 lean_dec_ref(x_36);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_33);
return x_51;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_3(x_2, x_5, x_6, x_8);
return x_9;
}
case 6:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_4(x_3, x_10, x_11, x_12, x_14);
return x_15;
}
default: 
{
lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_apply_1(x_4, x_1);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_2(x_2, x_14, x_16);
return x_17;
}
case 1:
{
lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_20 = lean_box_uint64(x_19);
x_21 = lean_apply_2(x_4, x_18, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_24 = lean_box_uint64(x_23);
x_25 = lean_apply_2(x_12, x_22, x_24);
return x_25;
}
case 3:
{
lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_2(x_5, x_26, x_28);
return x_29;
}
case 4:
{
lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_33 = lean_box_uint64(x_32);
x_34 = lean_apply_3(x_11, x_30, x_31, x_33);
return x_34;
}
case 5:
{
lean_object* x_35; lean_object* x_36; uint64_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_38 = lean_box_uint64(x_37);
x_39 = lean_apply_3(x_13, x_35, x_36, x_38);
return x_39;
}
case 6:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_44 = lean_box_uint64(x_43);
x_45 = lean_apply_4(x_6, x_40, x_41, x_42, x_44);
return x_45;
}
case 7:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 2);
lean_inc(x_48);
x_49 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_50 = lean_box_uint64(x_49);
x_51 = lean_apply_4(x_9, x_46, x_47, x_48, x_50);
return x_51;
}
case 8:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint64_t x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 3);
lean_inc(x_55);
x_56 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_57 = lean_box_uint64(x_56);
x_58 = lean_apply_5(x_7, x_52, x_53, x_54, x_55, x_57);
return x_58;
}
case 9:
{
lean_object* x_59; uint64_t x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
x_60 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_61 = lean_box_uint64(x_60);
x_62 = lean_apply_2(x_3, x_59, x_61);
return x_62;
}
case 10:
{
lean_object* x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_66 = lean_box_uint64(x_65);
x_67 = lean_apply_3(x_10, x_63, x_64, x_66);
return x_67;
}
default: 
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint64_t x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 2);
lean_inc(x_70);
x_71 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_72 = lean_box_uint64(x_71);
x_73 = lean_apply_4(x_8, x_68, x_69, x_70, x_72);
return x_73;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f_match__3___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_metavar_ctx_get_expr_assignment(x_10, x_1);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_metavar_ctx_get_expr_assignment(x_14, x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_7, x_2, x_3, x_4, x_5, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_1 = x_17;
x_6 = x_16;
goto _start;
}
}
case 4:
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f(x_19, x_2, x_3, x_4, x_5, x_6);
return x_20;
}
case 5:
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Expr_getAppFn(x_21);
lean_dec(x_21);
switch (lean_obj_tag(x_22)) {
case 4:
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuickConst_x3f(x_23, x_2, x_3, x_4, x_5, x_6);
return x_24;
}
case 6:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
x_25 = lean_box(2);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
default: 
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_22);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
}
case 7:
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_1, 2);
lean_inc(x_29);
lean_dec(x_1);
x_1 = x_29;
goto _start;
}
case 8:
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_31 = lean_box(2);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_6);
return x_32;
}
case 10:
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_dec(x_1);
x_1 = x_33;
goto _start;
}
case 11:
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_1);
x_35 = lean_box(2);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_6);
return x_36;
}
default: 
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_6);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_st_ref_get(x_1, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_take(x_1, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_11, 1);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_12, 2);
lean_dec(x_17);
x_18 = l_Lean_Meta_Cache_synthInstance___default___closed__1;
lean_ctor_set(x_12, 2, x_18);
x_19 = lean_st_ref_set(x_1, x_11, x_13);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_9);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get(x_12, 3);
x_27 = lean_ctor_get(x_12, 4);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_28 = l_Lean_Meta_Cache_synthInstance___default___closed__1;
x_29 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_28);
lean_ctor_set(x_29, 3, x_26);
lean_ctor_set(x_29, 4, x_27);
lean_ctor_set(x_11, 1, x_29);
x_30 = lean_st_ref_set(x_1, x_11, x_13);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_9);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_11, 2);
x_36 = lean_ctor_get(x_11, 3);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_11);
x_37 = lean_ctor_get(x_12, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_12, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_12, 3);
lean_inc(x_39);
x_40 = lean_ctor_get(x_12, 4);
lean_inc(x_40);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 lean_ctor_release(x_12, 2);
 lean_ctor_release(x_12, 3);
 lean_ctor_release(x_12, 4);
 x_41 = x_12;
} else {
 lean_dec_ref(x_12);
 x_41 = lean_box(0);
}
x_42 = l_Lean_Meta_Cache_synthInstance___default___closed__1;
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 5, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_43, 1, x_38);
lean_ctor_set(x_43, 2, x_42);
lean_ctor_set(x_43, 3, x_39);
lean_ctor_set(x_43, 4, x_40);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_34);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_35);
lean_ctor_set(x_44, 3, x_36);
x_45 = lean_st_ref_set(x_1, x_44, x_13);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_9);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_saveAndResetSynthInstanceCache___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_saveAndResetSynthInstanceCache(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_st_ref_take(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_9, 2);
lean_dec(x_14);
lean_ctor_set(x_9, 2, x_1);
x_15 = lean_st_ref_set(x_3, x_8, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
x_24 = lean_ctor_get(x_9, 3);
x_25 = lean_ctor_get(x_9, 4);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set(x_26, 2, x_1);
lean_ctor_set(x_26, 3, x_24);
lean_ctor_set(x_26, 4, x_25);
lean_ctor_set(x_8, 1, x_26);
x_27 = lean_st_ref_set(x_3, x_8, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 2);
x_34 = lean_ctor_get(x_8, 3);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_35 = lean_ctor_get(x_9, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_9, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_9, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_9, 4);
lean_inc(x_38);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 lean_ctor_release(x_9, 4);
 x_39 = x_9;
} else {
 lean_dec_ref(x_9);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 5, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_36);
lean_ctor_set(x_40, 2, x_1);
lean_ctor_set(x_40, 3, x_37);
lean_ctor_set(x_40, 4, x_38);
x_41 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_33);
lean_ctor_set(x_41, 3, x_34);
x_42 = lean_st_ref_set(x_3, x_41, x_10);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
x_45 = lean_box(0);
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_44;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
}
lean_object* l_Lean_Meta_restoreSynthInstanceCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_restoreSynthInstanceCache(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_resettingSynthInstanceCacheImpl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_restoreSynthInstanceCache(x_8, x_2, x_3, x_4, x_5, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_dec(x_10);
x_20 = l_Lean_Meta_restoreSynthInstanceCache(x_8, x_2, x_3, x_4, x_5, x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_resettingSynthInstanceCacheImpl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_resettingSynthInstanceCacheImpl___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_restoreSynthInstanceCache(x_9, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = l_Lean_Meta_restoreSynthInstanceCache(x_9, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_resettingSynthInstanceCache___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCache(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_resettingSynthInstanceCache___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
if (x_4 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_resettingSynthInstanceCache___rarg___lambda__1), 7, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Meta_resettingSynthInstanceCacheWhen___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Expr_fvarId_x21(x_1);
x_8 = l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_4);
x_9 = l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_LocalDecl_binderInfo(x_10);
lean_dec(x_10);
x_13 = lean_box(x_12);
if (lean_obj_tag(x_13) == 4)
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_13);
x_15 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_11);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_4, 2);
lean_inc(x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_2);
x_22 = lean_array_push(x_20, x_21);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_23, 2, x_22);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = lean_apply_5(x_3, x_23, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_restoreSynthInstanceCache(x_16, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_dec(x_24);
x_34 = l_Lean_Meta_restoreSynthInstanceCache(x_16, x_4, x_5, x_6, x_7, x_33);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set_tag(x_34, 1);
lean_ctor_set(x_34, 0, x_32);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_9);
if (x_39 == 0)
{
return x_9;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_9, 0);
x_41 = lean_ctor_get(x_9, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_9);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_withNewLocalInstance___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_4, lean_box(0), x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___rarg(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewLocalInstance___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstance___rarg___lambda__1), 9, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_withNewLocalInstance(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstance___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_5, x_4);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Meta_whnf___rarg___lambda__2(x_7, x_1, x_10, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_1);
x_12 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_13 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_12, lean_box(0), x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = l_Lean_Expr_isForall(x_8);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_apply_7(x_1, x_2, x_3, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg(x_4, x_5, x_1, x_6, x_2, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_7) == 7)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 2);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_7, sizeof(void*)*3);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars(x_5, x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_2);
x_18 = lean_array_get_size(x_5);
x_19 = lean_expr_instantiate_rev_range(x_7, x_6, x_18, x_5);
lean_dec(x_18);
lean_dec(x_7);
lean_inc(x_5);
x_20 = lean_apply_2(x_3, x_5, x_19);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_8, 1);
lean_dec(x_22);
lean_ctor_set(x_8, 1, x_4);
x_23 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_20, x_8, x_9, x_10, x_11, x_12);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_4);
lean_ctor_set(x_26, 2, x_25);
x_27 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_20, x_26, x_9, x_10, x_11, x_12);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_7);
x_28 = lean_array_get_size(x_5);
x_29 = lean_expr_instantiate_rev_range(x_14, x_6, x_28, x_5);
lean_dec(x_28);
lean_dec(x_14);
x_30 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_11, x_12);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = (uint8_t)((x_16 << 24) >> 61);
lean_inc(x_31);
x_34 = lean_local_ctx_mk_local_decl(x_4, x_31, x_13, x_29, x_33);
x_35 = l_Lean_mkFVar(x_31);
x_36 = lean_array_push(x_5, x_35);
x_4 = x_34;
x_5 = x_36;
x_7 = x_15;
x_12 = x_32;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_array_get_size(x_5);
x_39 = lean_expr_instantiate_rev_range(x_7, x_6, x_38, x_5);
lean_dec(x_7);
if (x_1 == 0)
{
lean_object* x_40; uint8_t x_41; 
lean_dec(x_38);
lean_dec(x_2);
lean_inc(x_5);
x_40 = lean_apply_2(x_3, x_5, x_39);
x_41 = !lean_is_exclusive(x_8);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_8, 1);
lean_dec(x_42);
lean_ctor_set(x_8, 1, x_4);
x_43 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_40, x_8, x_9, x_10, x_11, x_12);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_8, 0);
x_45 = lean_ctor_get(x_8, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_8);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_4);
lean_ctor_set(x_46, 2, x_45);
x_47 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_40, x_46, x_9, x_10, x_11, x_12);
return x_47;
}
}
else
{
uint8_t x_48; 
x_48 = l___private_Lean_Meta_Basic_0__Lean_Meta_fvarsSizeLtMaxFVars(x_5, x_2);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_38);
lean_dec(x_2);
lean_inc(x_5);
x_49 = lean_apply_2(x_3, x_5, x_39);
x_50 = !lean_is_exclusive(x_8);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_8, 1);
lean_dec(x_51);
lean_ctor_set(x_8, 1, x_4);
x_52 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_49, x_8, x_9, x_10, x_11, x_12);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_8, 0);
x_54 = lean_ctor_get(x_8, 2);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_8);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_4);
lean_ctor_set(x_55, 2, x_54);
x_56 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_49, x_55, x_9, x_10, x_11, x_12);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
lean_inc(x_39);
x_57 = lean_alloc_closure((void*)(l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1), 6, 1);
lean_closure_set(x_57, 0, x_39);
x_58 = lean_box(x_1);
lean_inc(x_4);
lean_inc(x_5);
x_59 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1___boxed), 13, 7);
lean_closure_set(x_59, 0, x_3);
lean_closure_set(x_59, 1, x_5);
lean_closure_set(x_59, 2, x_39);
lean_closure_set(x_59, 3, x_58);
lean_closure_set(x_59, 4, x_2);
lean_closure_set(x_59, 5, x_4);
lean_closure_set(x_59, 6, x_38);
x_60 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_60, 0, x_57);
lean_closure_set(x_60, 1, x_59);
x_61 = !lean_is_exclusive(x_8);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_8, 1);
lean_dec(x_62);
lean_ctor_set(x_8, 1, x_4);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_60, x_8, x_9, x_10, x_11, x_12);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_8, 0);
x_65 = lean_ctor_get(x_8, 2);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_8);
x_66 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_4);
lean_ctor_set(x_66, 2, x_65);
x_67 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_5, x_6, x_60, x_66, x_9, x_10, x_11, x_12);
return x_67;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_1, x_2);
lean_inc(x_4);
x_13 = l_Lean_Meta_getFVarLocalDecl___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstanceImp___spec__1(x_12, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_LocalDecl_type(x_14);
lean_dec(x_14);
lean_inc(x_16);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f(x_16, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
switch (lean_obj_tag(x_18)) {
case 0:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_12);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
lean_dec(x_2);
x_2 = x_21;
x_8 = x_19;
goto _start;
}
case 1:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_16);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_2, x_25);
lean_dec(x_2);
x_27 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg), 8, 3);
lean_closure_set(x_27, 0, x_1);
lean_closure_set(x_27, 1, x_26);
lean_closure_set(x_27, 2, x_3);
x_28 = l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg(x_24, x_12, x_27, x_4, x_5, x_6, x_7, x_23);
return x_28;
}
default: 
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_dec(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_30 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f(x_16, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_12);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_2, x_33);
lean_dec(x_2);
x_2 = x_34;
x_8 = x_32;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_2, x_38);
lean_dec(x_2);
x_40 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg), 8, 3);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_39);
lean_closure_set(x_40, 2, x_3);
x_41 = l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg(x_37, x_12, x_40, x_4, x_5, x_6, x_7, x_36);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_17);
if (x_46 == 0)
{
return x_17;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_17, 0);
x_48 = lean_ctor_get(x_17, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_17);
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
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_13);
if (x_50 == 0)
{
return x_13;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_13, 0);
x_52 = lean_ctor_get(x_13, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_13);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_3);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_10);
x_15 = lean_is_class(x_14, x_10);
if (x_15 == 0)
{
lean_dec(x_10);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_10);
x_20 = lean_is_class(x_19, x_10);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_10);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_9);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_8);
return x_24;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_box(0);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 2;
lean_ctor_set_uint8(x_9, 5, x_11);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1;
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_7, x_12, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
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
uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_ctor_get_uint8(x_9, 0);
x_23 = lean_ctor_get_uint8(x_9, 1);
x_24 = lean_ctor_get_uint8(x_9, 2);
x_25 = lean_ctor_get_uint8(x_9, 3);
x_26 = lean_ctor_get_uint8(x_9, 4);
x_27 = lean_ctor_get_uint8(x_9, 6);
x_28 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_29 = 2;
x_30 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_30, 0, x_22);
lean_ctor_set_uint8(x_30, 1, x_23);
lean_ctor_set_uint8(x_30, 2, x_24);
lean_ctor_set_uint8(x_30, 3, x_25);
lean_ctor_set_uint8(x_30, 4, x_26);
lean_ctor_set_uint8(x_30, 5, x_29);
lean_ctor_set_uint8(x_30, 6, x_27);
lean_ctor_set_uint8(x_30, 7, x_28);
lean_ctor_set(x_2, 0, x_30);
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1;
x_32 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_7, x_31, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
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
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_39 = x_32;
} else {
 lean_dec_ref(x_32);
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
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_41 = lean_ctor_get(x_2, 0);
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_2, 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_2);
x_44 = lean_ctor_get_uint8(x_41, 0);
x_45 = lean_ctor_get_uint8(x_41, 1);
x_46 = lean_ctor_get_uint8(x_41, 2);
x_47 = lean_ctor_get_uint8(x_41, 3);
x_48 = lean_ctor_get_uint8(x_41, 4);
x_49 = lean_ctor_get_uint8(x_41, 6);
x_50 = lean_ctor_get_uint8(x_41, 7);
if (lean_is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean_dec_ref(x_41);
 x_51 = lean_box(0);
}
x_52 = 2;
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 0, 8);
} else {
 x_53 = x_51;
}
lean_ctor_set_uint8(x_53, 0, x_44);
lean_ctor_set_uint8(x_53, 1, x_45);
lean_ctor_set_uint8(x_53, 2, x_46);
lean_ctor_set_uint8(x_53, 3, x_47);
lean_ctor_set_uint8(x_53, 4, x_48);
lean_ctor_set_uint8(x_53, 5, x_52);
lean_ctor_set_uint8(x_53, 6, x_49);
lean_ctor_set_uint8(x_53, 7, x_50);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_42);
lean_ctor_set(x_54, 2, x_43);
x_55 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1;
x_56 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_7, x_55, x_54, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_9 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Expr_isForall(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
x_13 = l_Array_empty___closed__1;
x_14 = lean_apply_7(x_3, x_13, x_1, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = 1;
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(x_15, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_11);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_24 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Expr_isForall(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_25);
lean_dec(x_2);
x_28 = l_Array_empty___closed__1;
x_29 = lean_apply_7(x_3, x_28, x_1, x_4, x_5, x_6, x_7, x_26);
return x_29;
}
else
{
uint8_t x_30; lean_object* x_31; 
lean_dec(x_1);
x_30 = 1;
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(x_30, x_2, x_25, x_3, x_4, x_5, x_6, x_7, x_26);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
x_36 = l_Array_empty___closed__1;
x_37 = lean_apply_7(x_3, x_36, x_1, x_4, x_5, x_6, x_7, x_8);
return x_37;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = l_Array_empty___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg(x_1, x_2, x_4, x_10, x_11, x_12, x_3, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___lambda__1(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 0:
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
case 1:
{
uint8_t x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_7, 0, x_18);
return x_7;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_dec(x_7);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_dec(x_8);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
default: 
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f(x_1, x_2, x_3, x_4, x_5, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_4, lean_box(0), x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg___lambda__1), 9, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_4, lean_box(0), x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImpAux___at_Lean_Meta_withNewLocalInstances___spec__1___rarg(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___rarg___lambda__1), 9, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isClass_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = lean_box(0);
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_isClass_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_isClass_x3f___rarg___lambda__1), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_isClass_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isClass_x3f___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_box(0);
x_9 = 0;
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(x_9, x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallTelescope___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_box(0);
x_11 = 0;
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux___rarg(x_11, x_10, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_forallTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_forallTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallBoundedTelescopeImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallBoundedTelescopeImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallBoundedTelescopeImp___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___rarg___lambda__1), 9, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (x_1 == 0)
{
lean_dec(x_7);
if (lean_obj_tag(x_5) == 6)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 2);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
lean_dec(x_5);
x_13 = lean_box(x_1);
x_14 = lean_box_uint64(x_12);
x_15 = lean_apply_8(x_6, x_13, x_2, x_3, x_4, x_9, x_10, x_11, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
x_16 = lean_box(x_1);
x_17 = lean_apply_5(x_8, x_16, x_2, x_3, x_4, x_5);
return x_17;
}
}
else
{
switch (lean_obj_tag(x_5)) {
case 6:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_8);
lean_dec(x_7);
x_18 = lean_ctor_get(x_5, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 2);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
lean_dec(x_5);
x_22 = lean_box(x_1);
x_23 = lean_box_uint64(x_21);
x_24 = lean_apply_8(x_6, x_22, x_2, x_3, x_4, x_18, x_19, x_20, x_23);
return x_24;
}
case 8:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint64_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_8);
lean_dec(x_6);
x_25 = lean_ctor_get(x_5, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_5, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_5, 3);
lean_inc(x_28);
x_29 = lean_ctor_get_uint64(x_5, sizeof(void*)*4);
lean_dec(x_5);
x_30 = lean_box_uint64(x_29);
x_31 = lean_apply_8(x_7, x_2, x_3, x_4, x_25, x_26, x_27, x_28, x_30);
return x_31;
}
default: 
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_7);
lean_dec(x_6);
x_32 = lean_box(x_1);
x_33 = lean_apply_5(x_8, x_32, x_2, x_3, x_4, x_5);
return x_33;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux_match__1___rarg(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (x_2 == 0)
{
if (lean_obj_tag(x_6) == 6)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_16 = lean_array_get_size(x_4);
x_17 = lean_expr_instantiate_rev_range(x_13, x_5, x_16, x_4);
lean_dec(x_16);
lean_dec(x_13);
x_18 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = (uint8_t)((x_15 << 24) >> 61);
lean_inc(x_19);
x_22 = lean_local_ctx_mk_local_decl(x_3, x_19, x_12, x_17, x_21);
x_23 = l_Lean_mkFVar(x_19);
x_24 = lean_array_push(x_4, x_23);
x_3 = x_22;
x_4 = x_24;
x_6 = x_14;
x_11 = x_20;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_array_get_size(x_4);
x_27 = lean_expr_instantiate_rev_range(x_6, x_5, x_26, x_4);
lean_dec(x_26);
lean_dec(x_6);
lean_inc(x_4);
x_28 = lean_apply_2(x_1, x_4, x_27);
x_29 = !lean_is_exclusive(x_7);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_7, 1);
lean_dec(x_30);
lean_ctor_set(x_7, 1, x_3);
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_28, x_7, x_8, x_9, x_10, x_11);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_7, 0);
x_33 = lean_ctor_get(x_7, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_7);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_3);
lean_ctor_set(x_34, 2, x_33);
x_35 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_28, x_34, x_8, x_9, x_10, x_11);
return x_35;
}
}
}
else
{
switch (lean_obj_tag(x_6)) {
case 6:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint64_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_36 = lean_ctor_get(x_6, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_6, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_6, 2);
lean_inc(x_38);
x_39 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_40 = lean_array_get_size(x_4);
x_41 = lean_expr_instantiate_rev_range(x_37, x_5, x_40, x_4);
lean_dec(x_40);
lean_dec(x_37);
x_42 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = (uint8_t)((x_39 << 24) >> 61);
lean_inc(x_43);
x_46 = lean_local_ctx_mk_local_decl(x_3, x_43, x_36, x_41, x_45);
x_47 = l_Lean_mkFVar(x_43);
x_48 = lean_array_push(x_4, x_47);
x_3 = x_46;
x_4 = x_48;
x_6 = x_38;
x_11 = x_44;
goto _start;
}
case 8:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_50 = lean_ctor_get(x_6, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_6, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_6, 2);
lean_inc(x_52);
x_53 = lean_ctor_get(x_6, 3);
lean_inc(x_53);
lean_dec(x_6);
x_54 = lean_array_get_size(x_4);
x_55 = lean_expr_instantiate_rev_range(x_51, x_5, x_54, x_4);
lean_dec(x_51);
x_56 = lean_expr_instantiate_rev_range(x_52, x_5, x_54, x_4);
lean_dec(x_54);
lean_dec(x_52);
x_57 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = 0;
lean_inc(x_58);
x_61 = lean_local_ctx_mk_let_decl(x_3, x_58, x_50, x_55, x_56, x_60);
x_62 = l_Lean_mkFVar(x_58);
x_63 = lean_array_push(x_4, x_62);
x_64 = 1;
x_2 = x_64;
x_3 = x_61;
x_4 = x_63;
x_6 = x_53;
x_11 = x_59;
goto _start;
}
default: 
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_66 = lean_array_get_size(x_4);
x_67 = lean_expr_instantiate_rev_range(x_6, x_5, x_66, x_4);
lean_dec(x_66);
lean_dec(x_6);
lean_inc(x_4);
x_68 = lean_apply_2(x_1, x_4, x_67);
x_69 = !lean_is_exclusive(x_7);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_7, 1);
lean_dec(x_70);
lean_ctor_set(x_7, 1, x_3);
x_71 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_68, x_7, x_8, x_9, x_10, x_11);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_7, 0);
x_73 = lean_ctor_get(x_7, 2);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_7);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_3);
lean_ctor_set(x_74, 2, x_73);
x_75 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_68, x_74, x_8, x_9, x_10, x_11);
return x_75;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeAux___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_1 == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_10 = lean_box(x_1);
x_11 = lean_box_uint64(x_9);
x_12 = lean_apply_5(x_3, x_10, x_6, x_7, x_8, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = lean_box(x_1);
x_14 = lean_apply_2(x_5, x_13, x_2);
return x_14;
}
}
else
{
switch (lean_obj_tag(x_2)) {
case 6:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_19 = lean_box(x_1);
x_20 = lean_box_uint64(x_18);
x_21 = lean_apply_5(x_3, x_19, x_15, x_16, x_17, x_20);
return x_21;
}
case 8:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
lean_dec(x_3);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 3);
lean_inc(x_25);
x_26 = lean_ctor_get_uint64(x_2, sizeof(void*)*4);
lean_dec(x_2);
x_27 = lean_box_uint64(x_26);
x_28 = lean_apply_5(x_4, x_22, x_23, x_24, x_25, x_27);
return x_28;
}
default: 
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_4);
lean_dec(x_3);
x_29 = lean_box(x_1);
x_30 = lean_apply_2(x_5, x_29, x_2);
return x_30;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process_match__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (x_2 == 0)
{
if (lean_obj_tag(x_6) == 6)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_16 = lean_array_get_size(x_4);
x_17 = lean_expr_instantiate_rev_range(x_13, x_5, x_16, x_4);
lean_dec(x_16);
lean_dec(x_13);
x_18 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = (uint8_t)((x_15 << 24) >> 61);
lean_inc(x_19);
x_22 = lean_local_ctx_mk_local_decl(x_3, x_19, x_12, x_17, x_21);
x_23 = l_Lean_mkFVar(x_19);
x_24 = lean_array_push(x_4, x_23);
x_3 = x_22;
x_4 = x_24;
x_6 = x_14;
x_11 = x_20;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_array_get_size(x_4);
x_27 = lean_expr_instantiate_rev_range(x_6, x_5, x_26, x_4);
lean_dec(x_26);
lean_dec(x_6);
lean_inc(x_4);
x_28 = lean_apply_2(x_1, x_4, x_27);
x_29 = !lean_is_exclusive(x_7);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_7, 1);
lean_dec(x_30);
lean_ctor_set(x_7, 1, x_3);
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_28, x_7, x_8, x_9, x_10, x_11);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_7, 0);
x_33 = lean_ctor_get(x_7, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_7);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_3);
lean_ctor_set(x_34, 2, x_33);
x_35 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_28, x_34, x_8, x_9, x_10, x_11);
return x_35;
}
}
}
else
{
switch (lean_obj_tag(x_6)) {
case 6:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint64_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_36 = lean_ctor_get(x_6, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_6, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_6, 2);
lean_inc(x_38);
x_39 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_40 = lean_array_get_size(x_4);
x_41 = lean_expr_instantiate_rev_range(x_37, x_5, x_40, x_4);
lean_dec(x_40);
lean_dec(x_37);
x_42 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = (uint8_t)((x_39 << 24) >> 61);
lean_inc(x_43);
x_46 = lean_local_ctx_mk_local_decl(x_3, x_43, x_36, x_41, x_45);
x_47 = l_Lean_mkFVar(x_43);
x_48 = lean_array_push(x_4, x_47);
x_3 = x_46;
x_4 = x_48;
x_6 = x_38;
x_11 = x_44;
goto _start;
}
case 8:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_50 = lean_ctor_get(x_6, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_6, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_6, 2);
lean_inc(x_52);
x_53 = lean_ctor_get(x_6, 3);
lean_inc(x_53);
lean_dec(x_6);
x_54 = lean_array_get_size(x_4);
x_55 = lean_expr_instantiate_rev_range(x_51, x_5, x_54, x_4);
lean_dec(x_51);
x_56 = lean_expr_instantiate_rev_range(x_52, x_5, x_54, x_4);
lean_dec(x_54);
lean_dec(x_52);
x_57 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = 0;
lean_inc(x_58);
x_61 = lean_local_ctx_mk_let_decl(x_3, x_58, x_50, x_55, x_56, x_60);
x_62 = l_Lean_mkFVar(x_58);
x_63 = lean_array_push(x_4, x_62);
x_64 = 1;
x_2 = x_64;
x_3 = x_61;
x_4 = x_63;
x_6 = x_53;
x_11 = x_59;
goto _start;
}
default: 
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_66 = lean_array_get_size(x_4);
x_67 = lean_expr_instantiate_rev_range(x_6, x_5, x_66, x_4);
lean_dec(x_66);
lean_dec(x_6);
lean_inc(x_4);
x_68 = lean_apply_2(x_1, x_4, x_67);
x_69 = !lean_is_exclusive(x_7);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_7, 1);
lean_dec(x_70);
lean_ctor_set(x_7, 1, x_3);
x_71 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_68, x_7, x_8, x_9, x_10, x_11);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_7, 0);
x_73 = lean_ctor_get(x_7, 2);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_7);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_3);
lean_ctor_set(x_74, 2, x_73);
x_75 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___rarg(x_4, x_5, x_68, x_74, x_8, x_9, x_10, x_11);
return x_75;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Array_empty___closed__1;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp_process___rarg(x_3, x_2, x_9, x_10, x_11, x_1, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_lambdaLetTelescope___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = 1;
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_2, x_10, x_9, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_lambdaLetTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_lambdaLetTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_lambdaTelescope___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_map2MetaM___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = 0;
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_2, x_10, x_9, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_lambdaTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_lambdaTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = lean_environment_find(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_7);
x_13 = lean_box(0);
x_14 = l_Lean_mkConst(x_1, x_13);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_throwUnknownConstant___rarg___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_19, lean_box(0), x_2, x_3, x_4, x_5, x_10);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_12, 0);
lean_inc(x_21);
lean_dec(x_12);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_1);
x_25 = lean_environment_find(x_24, x_1);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_box(0);
x_27 = l_Lean_mkConst(x_1, x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_throwUnknownConstant___rarg___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_32, lean_box(0), x_2, x_3, x_4, x_5, x_23);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_23);
return x_35;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 < x_1;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = x_3;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_uget(x_3, x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_3, x_2, x_13);
x_15 = x_12;
x_16 = l_Lean_Expr_fvarId_x21(x_15);
lean_dec(x_15);
lean_inc(x_4);
x_17 = l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_LocalDecl_userName(x_18);
lean_dec(x_18);
x_21 = 1;
x_22 = x_2 + x_21;
x_23 = x_20;
x_24 = lean_array_uset(x_14, x_2, x_23);
x_2 = x_22;
x_3 = x_24;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_14);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_17);
if (x_26 == 0)
{
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_getParamNamesImp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_10 = x_1;
x_11 = lean_box_usize(x_9);
x_12 = l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1;
x_13 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2___boxed), 8, 3);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_10);
x_14 = x_13;
x_15 = lean_apply_5(x_14, x_3, x_4, x_5, x_6, x_7);
return x_15;
}
}
static lean_object* _init_l_Lean_Meta_getParamNamesImp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_getParamNamesImp___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_getParamNamesImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_ConstantInfo_type(x_8);
lean_dec(x_8);
x_11 = l_Lean_Meta_getParamNamesImp___closed__1;
x_12 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNamesImp___spec__3___rarg(x_10, x_11, x_2, x_3, x_4, x_5, x_9);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Meta_getParamNamesImp___spec__2(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Meta_getParamNamesImp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getParamNamesImp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_getParamNames___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_getParamNamesImp), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_getParamNames(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getParamNames___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process(uint8_t x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_7) == 7)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 2);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_7, sizeof(void*)*3);
lean_dec(x_7);
x_17 = lean_array_get_size(x_4);
x_18 = lean_expr_instantiate_rev_range(x_14, x_6, x_17, x_4);
lean_dec(x_17);
lean_dec(x_14);
x_19 = (uint8_t)((x_16 << 24) >> 61);
x_20 = l_Lean_BinderInfo_isInstImplicit(x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_18);
if (x_20 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc(x_8);
x_22 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_21, x_3, x_13, x_8, x_9, x_10, x_11, x_12);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_push(x_4, x_23);
x_26 = lean_box(x_19);
x_27 = lean_array_push(x_5, x_26);
x_4 = x_25;
x_5 = x_27;
x_7 = x_15;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = 1;
lean_inc(x_8);
x_30 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_21, x_29, x_13, x_8, x_9, x_10, x_11, x_12);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_array_push(x_4, x_31);
x_34 = lean_box(x_19);
x_35 = lean_array_push(x_5, x_34);
x_4 = x_33;
x_5 = x_35;
x_7 = x_15;
x_12 = x_32;
goto _start;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint64_t x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_37 = lean_ctor_get(x_7, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_7, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_7, 2);
lean_inc(x_39);
x_40 = lean_ctor_get_uint64(x_7, sizeof(void*)*3);
x_41 = lean_ctor_get(x_2, 0);
x_42 = lean_array_get_size(x_4);
x_43 = lean_nat_dec_lt(x_42, x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_44 = lean_expr_instantiate_rev_range(x_7, x_6, x_42, x_4);
lean_dec(x_42);
lean_dec(x_6);
lean_dec(x_7);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_5);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_12);
return x_47;
}
else
{
lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; 
lean_dec(x_7);
x_48 = lean_expr_instantiate_rev_range(x_38, x_6, x_42, x_4);
lean_dec(x_42);
lean_dec(x_38);
x_49 = (uint8_t)((x_40 << 24) >> 61);
x_50 = l_Lean_BinderInfo_isInstImplicit(x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_48);
if (x_50 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_inc(x_8);
x_52 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_51, x_3, x_37, x_8, x_9, x_10, x_11, x_12);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_array_push(x_4, x_53);
x_56 = lean_box(x_49);
x_57 = lean_array_push(x_5, x_56);
x_4 = x_55;
x_5 = x_57;
x_7 = x_39;
x_12 = x_54;
goto _start;
}
else
{
uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = 1;
lean_inc(x_8);
x_60 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_51, x_59, x_37, x_8, x_9, x_10, x_11, x_12);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_array_push(x_4, x_61);
x_64 = lean_box(x_49);
x_65 = lean_array_push(x_5, x_64);
x_4 = x_63;
x_5 = x_65;
x_7 = x_39;
x_12 = x_62;
goto _start;
}
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_array_get_size(x_4);
x_68 = lean_expr_instantiate_rev_range(x_7, x_6, x_67, x_4);
lean_dec(x_6);
lean_dec(x_7);
if (x_1 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_67);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_5);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_12);
return x_71;
}
else
{
lean_object* x_72; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_68);
x_72 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(x_68, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_ctor_get(x_72, 0);
x_75 = lean_ctor_get(x_72, 1);
x_76 = l_Lean_Expr_isForall(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_74);
lean_dec(x_67);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_5);
lean_ctor_set(x_77, 1, x_68);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_4);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_72, 0, x_78);
return x_72;
}
else
{
lean_free_object(x_72);
lean_dec(x_68);
x_6 = x_67;
x_7 = x_74;
x_12 = x_75;
goto _start;
}
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_72, 0);
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_72);
x_82 = l_Lean_Expr_isForall(x_80);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_80);
lean_dec(x_67);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_5);
lean_ctor_set(x_83, 1, x_68);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_4);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_81);
return x_85;
}
else
{
lean_dec(x_68);
x_6 = x_67;
x_7 = x_80;
x_12 = x_81;
goto _start;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_87 = !lean_is_exclusive(x_72);
if (x_87 == 0)
{
return x_72;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_72, 0);
x_89 = lean_ctor_get(x_72, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_72);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process(x_13, x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Array_empty___closed__1;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux_process(x_2, x_3, x_4, x_10, x_10, x_11, x_1, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_1, x_10, x_3, x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Meta_forallMetaTelescope___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_box(x_5);
x_7 = lean_box(x_3);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux___boxed), 9, 4);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_7);
x_9 = lean_apply_2(x_1, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallMetaTelescope___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallMetaTelescope___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Meta_forallMetaTelescope___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_forallMetaTelescopeReducing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_box(x_4);
x_8 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux___boxed), 9, 4);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_7);
x_9 = lean_apply_2(x_1, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallMetaTelescopeReducing___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallMetaTelescopeReducing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Meta_forallMetaTelescopeReducing___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_5) == 6)
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 2);
x_13 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
x_14 = lean_array_get_size(x_2);
x_15 = lean_expr_instantiate_rev_range(x_11, x_4, x_14, x_2);
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = 0;
x_18 = lean_box(0);
lean_inc(x_6);
x_19 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_16, x_17, x_18, x_6, x_7, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_push(x_2, x_20);
x_23 = (uint8_t)((x_13 << 24) >> 61);
x_24 = lean_box(x_23);
x_25 = lean_array_push(x_3, x_24);
x_2 = x_22;
x_3 = x_25;
x_5 = x_12;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_6);
x_27 = lean_array_get_size(x_2);
x_28 = lean_expr_instantiate_rev_range(x_5, x_4, x_27, x_2);
lean_dec(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_10);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_array_get_size(x_2);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_6);
x_35 = lean_expr_instantiate_rev_range(x_5, x_4, x_33, x_2);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_3);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_10);
return x_38;
}
else
{
if (lean_obj_tag(x_5) == 6)
{
lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_39 = lean_ctor_get(x_5, 1);
x_40 = lean_ctor_get(x_5, 2);
x_41 = lean_ctor_get_uint64(x_5, sizeof(void*)*3);
x_42 = lean_expr_instantiate_rev_range(x_39, x_4, x_33, x_2);
lean_dec(x_33);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = 0;
x_45 = lean_box(0);
lean_inc(x_6);
x_46 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_43, x_44, x_45, x_6, x_7, x_8, x_9, x_10);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_array_push(x_2, x_47);
x_50 = (uint8_t)((x_41 << 24) >> 61);
x_51 = lean_box(x_50);
x_52 = lean_array_push(x_3, x_51);
x_2 = x_49;
x_3 = x_52;
x_5 = x_40;
x_10 = x_48;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_6);
x_54 = lean_expr_instantiate_rev_range(x_5, x_4, x_33, x_2);
lean_dec(x_33);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_3);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_2);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_10);
return x_57;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Array_empty___closed__1;
x_9 = lean_unsigned_to_nat(0u);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp_process(x_2, x_8, x_8, x_9, x_1, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_lambdaMetaTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaMetaTelescopeImp___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_lambdaMetaTelescope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaMetaTelescope___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isClass_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_isClassImp_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
x_10 = lean_box(0);
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_isClass_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___spec__1(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_apply_6(x_3, x_1, x_4, x_5, x_6, x_7, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_1);
x_15 = lean_apply_1(x_3, x_1);
x_16 = l_Lean_Meta_withNewLocalInstance___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewLocalInstancesImp___spec__1___rarg(x_14, x_1, x_15, x_4, x_5, x_6, x_7, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_3);
lean_inc(x_11);
x_15 = lean_local_ctx_mk_local_decl(x_14, x_11, x_1, x_3, x_2);
x_16 = l_Lean_mkFVar(x_11);
lean_ctor_set(x_5, 1, x_15);
x_17 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_11);
x_21 = lean_local_ctx_mk_local_decl(x_19, x_11, x_1, x_3, x_2);
x_22 = l_Lean_mkFVar(x_11);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_20);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(x_22, x_3, x_4, x_23, x_6, x_7, x_8, x_12);
return x_24;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withLocalDecl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_map1MetaM___rarg___lambda__1), 8, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_withLocalDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_box(x_5);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___rarg___lambda__1___boxed), 10, 4);
lean_closure_set(x_10, 0, x_7);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_9);
lean_closure_set(x_10, 3, x_6);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_apply_2(x_11, lean_box(0), x_10);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_1(x_13, lean_box(0));
x_15 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_12, x_14);
return x_15;
}
}
lean_object* l_Lean_Meta_withLocalDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_withLocalDecl___rarg___lambda__1(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_withLocalDecl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Lean_Meta_withLocalDecl___rarg(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_withLocalDeclD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 0;
x_8 = l_Lean_Meta_withLocalDecl___rarg(x_1, x_2, lean_box(0), x_4, x_7, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_withLocalDeclD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDeclD___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_mkFreshId___at_Lean_Meta_mkFreshExprMVarAt___spec__1___rarg(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_5, 1);
x_15 = 0;
lean_inc(x_2);
lean_inc(x_11);
x_16 = lean_local_ctx_mk_let_decl(x_14, x_11, x_1, x_2, x_3, x_15);
x_17 = l_Lean_mkFVar(x_11);
lean_ctor_set(x_5, 1, x_16);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(x_17, x_2, x_4, x_5, x_6, x_7, x_8, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
x_21 = lean_ctor_get(x_5, 2);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_22 = 0;
lean_inc(x_2);
lean_inc(x_11);
x_23 = lean_local_ctx_mk_let_decl(x_20, x_11, x_1, x_2, x_3, x_22);
x_24 = l_Lean_mkFVar(x_11);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_21);
x_26 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___rarg(x_24, x_2, x_4, x_25, x_6, x_7, x_8, x_12);
return x_26;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLetDecl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_map1MetaM___rarg___lambda__1), 8, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_2, x_3, x_4, x_11, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_withLetDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___rarg___lambda__1), 10, 4);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_5);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_apply_2(x_10, lean_box(0), x_9);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_12, lean_box(0));
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_13);
return x_14;
}
}
lean_object* l_Lean_Meta_withLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_foldl___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_LocalContext_addDecl(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_LocalDecl_type(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Meta_isClass_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_withNewFVar___spec__1(x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_2 = x_10;
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_LocalDecl_toExpr(x_9);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_array_push(x_1, x_19);
x_1 = x_20;
x_2 = x_10;
x_7 = x_16;
goto _start;
}
}
else
{
uint8_t x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_3, 2);
x_12 = lean_array_get_size(x_11);
lean_inc(x_1);
x_13 = l_List_foldl___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__1(x_10, x_1);
lean_inc(x_11);
lean_inc(x_13);
lean_inc(x_9);
lean_ctor_set(x_3, 1, x_13);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2(x_11, x_1, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_get_size(x_15);
x_18 = lean_nat_dec_eq(x_17, x_12);
lean_dec(x_12);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_4, x_5, x_6, x_16);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_13);
lean_ctor_set(x_22, 2, x_15);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = lean_apply_5(x_2, x_22, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_restoreSynthInstanceCache(x_20, x_3, x_4, x_5, x_6, x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_23, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = l_Lean_Meta_restoreSynthInstanceCache(x_20, x_3, x_4, x_5, x_6, x_32);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set_tag(x_33, 1);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
x_38 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_16);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_3);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_14);
if (x_39 == 0)
{
return x_14;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_14, 0);
x_41 = lean_ctor_get(x_14, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_14);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_ctor_get(x_3, 1);
x_45 = lean_ctor_get(x_3, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_3);
x_46 = lean_array_get_size(x_45);
lean_inc(x_1);
x_47 = l_List_foldl___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__1(x_44, x_1);
lean_inc(x_45);
lean_inc(x_47);
lean_inc(x_43);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_48, 2, x_45);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_48);
x_49 = l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2(x_45, x_1, x_48, x_4, x_5, x_6, x_7);
lean_dec(x_1);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_array_get_size(x_50);
x_53 = lean_nat_dec_eq(x_52, x_46);
lean_dec(x_46);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_4, x_5, x_6, x_51);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_43);
lean_ctor_set(x_57, 1, x_47);
lean_ctor_set(x_57, 2, x_50);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_58 = lean_apply_5(x_2, x_57, x_4, x_5, x_6, x_56);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_Meta_restoreSynthInstanceCache(x_55, x_48, x_4, x_5, x_6, x_60);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_48);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
lean_dec(x_58);
x_67 = l_Lean_Meta_restoreSynthInstanceCache(x_55, x_48, x_4, x_5, x_6, x_66);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_48);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
 lean_ctor_set_tag(x_70, 1);
}
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; 
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_43);
x_71 = lean_apply_5(x_2, x_48, x_4, x_5, x_6, x_51);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_43);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_72 = lean_ctor_get(x_49, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_49, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_74 = x_49;
} else {
 lean_dec_ref(x_49);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_foldlM___at___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_withExistingLocalDecls___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_3, lean_box(0), x_1);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp___rarg(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_withExistingLocalDecls___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_withExistingLocalDecls(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_st_ref_get(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_take(x_3, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = l_Lean_MetavarContext_incDepth(x_15);
lean_ctor_set(x_12, 0, x_16);
x_17 = lean_st_ref_set(x_3, x_12, x_13);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_10, x_2, x_3, x_4, x_5, x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_10, x_2, x_3, x_4, x_5, x_28);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set_tag(x_29, 1);
lean_ctor_set(x_29, 0, x_27);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
x_36 = lean_ctor_get(x_12, 2);
x_37 = lean_ctor_get(x_12, 3);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
x_38 = l_Lean_MetavarContext_incDepth(x_34);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
lean_ctor_set(x_39, 2, x_36);
lean_ctor_set(x_39, 3, x_37);
x_40 = lean_st_ref_set(x_3, x_39, x_13);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_42 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_10, x_2, x_3, x_4, x_5, x_44);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_42, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_dec(x_42);
x_51 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_10, x_2, x_3, x_4, x_5, x_50);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
 lean_ctor_set_tag(x_54, 1);
}
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_apply_2(x_2, lean_box(0), x_1);
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___rarg), 4, 0);
return x_2;
}
}
uint8_t l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_LocalInstance_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_9 = l_Lean_Meta_getLocalInstances___at___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarCore___spec__1(x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_array_get_size(x_2);
x_13 = lean_array_get_size(x_10);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_4, 2);
lean_dec(x_16);
x_17 = lean_ctor_get(x_4, 1);
lean_dec(x_17);
lean_inc(x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 1, x_1);
if (x_14 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_2);
x_18 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Meta_restoreSynthInstanceCache(x_19, x_4, x_5, x_6, x_7, x_23);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = l_Lean_Meta_restoreSynthInstanceCache(x_19, x_4, x_5, x_6, x_7, x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1(x_2, x_10, lean_box(0), x_2, x_10, x_36);
lean_dec(x_10);
lean_dec(x_2);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_11);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_41 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Meta_restoreSynthInstanceCache(x_39, x_4, x_5, x_6, x_7, x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_41, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = l_Lean_Meta_restoreSynthInstanceCache(x_39, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_51, 0);
lean_dec(x_53);
lean_ctor_set_tag(x_51, 1);
lean_ctor_set(x_51, 0, x_49);
return x_51;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_49);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; 
x_56 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_11);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_4, 0);
lean_inc(x_57);
lean_dec(x_4);
lean_inc(x_2);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_1);
lean_ctor_set(x_58, 2, x_2);
if (x_14 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_10);
lean_dec(x_2);
x_59 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_11);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_58);
x_62 = lean_apply_5(x_3, x_58, x_5, x_6, x_7, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = l_Lean_Meta_restoreSynthInstanceCache(x_60, x_58, x_5, x_6, x_7, x_64);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_58);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_62, 1);
lean_inc(x_70);
lean_dec(x_62);
x_71 = l_Lean_Meta_restoreSynthInstanceCache(x_60, x_58, x_5, x_6, x_7, x_70);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_58);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
 lean_ctor_set_tag(x_74, 1);
}
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
else
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_unsigned_to_nat(0u);
x_76 = l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1(x_2, x_10, lean_box(0), x_2, x_10, x_75);
lean_dec(x_10);
lean_dec(x_2);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_11);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_58);
x_80 = lean_apply_5(x_3, x_58, x_5, x_6, x_7, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_Meta_restoreSynthInstanceCache(x_78, x_58, x_5, x_6, x_7, x_82);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_58);
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
lean_ctor_set(x_86, 0, x_81);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_80, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_80, 1);
lean_inc(x_88);
lean_dec(x_80);
x_89 = l_Lean_Meta_restoreSynthInstanceCache(x_78, x_58, x_5, x_6, x_7, x_88);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_58);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_91 = x_89;
} else {
 lean_dec_ref(x_89);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
 lean_ctor_set_tag(x_92, 1);
}
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
else
{
lean_object* x_93; 
x_93 = lean_apply_5(x_3, x_58, x_5, x_6, x_7, x_11);
return x_93;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_withLCtx___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_4, lean_box(0), x_1);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Meta_withLCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___rarg___lambda__1), 9, 3);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_withLCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getMVarDecl___at_Lean_Meta_isReadOnlyExprMVar___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 4);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withMVarContext___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_3, lean_box(0), x_1);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_withMVarContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_withMVarContext___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_withMVarContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withMVarContext___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_st_ref_get(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_1, x_3, x_4, x_5, x_6, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_11, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_11, x_3, x_4, x_5, x_6, x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withMCtx___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_3, lean_box(0), x_1);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp___rarg(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_withMCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___rarg___lambda__1), 8, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_withMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_approxDefEqImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
lean_ctor_set_uint8(x_8, 0, x_10);
lean_ctor_set_uint8(x_8, 1, x_10);
lean_ctor_set_uint8(x_8, 2, x_10);
x_11 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get_uint8(x_8, 3);
x_21 = lean_ctor_get_uint8(x_8, 4);
x_22 = lean_ctor_get_uint8(x_8, 5);
x_23 = lean_ctor_get_uint8(x_8, 6);
x_24 = lean_ctor_get_uint8(x_8, 7);
lean_dec(x_8);
x_25 = 1;
x_26 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_26, 0, x_25);
lean_ctor_set_uint8(x_26, 1, x_25);
lean_ctor_set_uint8(x_26, 2, x_25);
lean_ctor_set_uint8(x_26, 3, x_20);
lean_ctor_set_uint8(x_26, 4, x_21);
lean_ctor_set_uint8(x_26, 5, x_22);
lean_ctor_set_uint8(x_26, 6, x_23);
lean_ctor_set_uint8(x_26, 7, x_24);
lean_ctor_set(x_2, 0, x_26);
x_27 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_34 = x_27;
} else {
 lean_dec_ref(x_27);
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
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_36 = lean_ctor_get(x_2, 0);
x_37 = lean_ctor_get(x_2, 1);
x_38 = lean_ctor_get(x_2, 2);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_2);
x_39 = lean_ctor_get_uint8(x_36, 3);
x_40 = lean_ctor_get_uint8(x_36, 4);
x_41 = lean_ctor_get_uint8(x_36, 5);
x_42 = lean_ctor_get_uint8(x_36, 6);
x_43 = lean_ctor_get_uint8(x_36, 7);
if (lean_is_exclusive(x_36)) {
 x_44 = x_36;
} else {
 lean_dec_ref(x_36);
 x_44 = lean_box(0);
}
x_45 = 1;
if (lean_is_scalar(x_44)) {
 x_46 = lean_alloc_ctor(0, 0, 8);
} else {
 x_46 = x_44;
}
lean_ctor_set_uint8(x_46, 0, x_45);
lean_ctor_set_uint8(x_46, 1, x_45);
lean_ctor_set_uint8(x_46, 2, x_45);
lean_ctor_set_uint8(x_46, 3, x_39);
lean_ctor_set_uint8(x_46, 4, x_40);
lean_ctor_set_uint8(x_46, 5, x_41);
lean_ctor_set_uint8(x_46, 6, x_42);
lean_ctor_set_uint8(x_46, 7, x_43);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_37);
lean_ctor_set(x_47, 2, x_38);
x_48 = lean_apply_5(x_1, x_47, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_51 = x_48;
} else {
 lean_dec_ref(x_48);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_48, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_55 = x_48;
} else {
 lean_dec_ref(x_48);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_approxDefEqImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_approxDefEqImp___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_approxDefEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_ctor_set_uint8(x_9, 0, x_11);
lean_ctor_set_uint8(x_9, 1, x_11);
lean_ctor_set_uint8(x_9, 2, x_11);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get_uint8(x_9, 3);
x_22 = lean_ctor_get_uint8(x_9, 4);
x_23 = lean_ctor_get_uint8(x_9, 5);
x_24 = lean_ctor_get_uint8(x_9, 6);
x_25 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_26 = 1;
x_27 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_27, 0, x_26);
lean_ctor_set_uint8(x_27, 1, x_26);
lean_ctor_set_uint8(x_27, 2, x_26);
lean_ctor_set_uint8(x_27, 3, x_21);
lean_ctor_set_uint8(x_27, 4, x_22);
lean_ctor_set_uint8(x_27, 5, x_23);
lean_ctor_set_uint8(x_27, 6, x_24);
lean_ctor_set_uint8(x_27, 7, x_25);
lean_ctor_set(x_3, 0, x_27);
x_28 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_28, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_35 = x_28;
} else {
 lean_dec_ref(x_28);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(1, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_37 = lean_ctor_get(x_3, 0);
x_38 = lean_ctor_get(x_3, 1);
x_39 = lean_ctor_get(x_3, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_3);
x_40 = lean_ctor_get_uint8(x_37, 3);
x_41 = lean_ctor_get_uint8(x_37, 4);
x_42 = lean_ctor_get_uint8(x_37, 5);
x_43 = lean_ctor_get_uint8(x_37, 6);
x_44 = lean_ctor_get_uint8(x_37, 7);
if (lean_is_exclusive(x_37)) {
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
x_46 = 1;
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 0, 8);
} else {
 x_47 = x_45;
}
lean_ctor_set_uint8(x_47, 0, x_46);
lean_ctor_set_uint8(x_47, 1, x_46);
lean_ctor_set_uint8(x_47, 2, x_46);
lean_ctor_set_uint8(x_47, 3, x_40);
lean_ctor_set_uint8(x_47, 4, x_41);
lean_ctor_set_uint8(x_47, 5, x_42);
lean_ctor_set_uint8(x_47, 6, x_43);
lean_ctor_set_uint8(x_47, 7, x_44);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_38);
lean_ctor_set(x_48, 2, x_39);
x_49 = lean_apply_7(x_2, lean_box(0), x_1, x_48, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_52 = x_49;
} else {
 lean_dec_ref(x_49);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_49, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_56 = x_49;
} else {
 lean_dec_ref(x_49);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
lean_object* l_Lean_Meta_approxDefEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_approxDefEq___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_approxDefEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_approxDefEq___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fullApproxDefEqImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
lean_ctor_set_uint8(x_8, 0, x_10);
lean_ctor_set_uint8(x_8, 1, x_10);
lean_ctor_set_uint8(x_8, 2, x_10);
lean_ctor_set_uint8(x_8, 3, x_10);
x_11 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get_uint8(x_8, 4);
x_21 = lean_ctor_get_uint8(x_8, 5);
x_22 = lean_ctor_get_uint8(x_8, 6);
x_23 = lean_ctor_get_uint8(x_8, 7);
lean_dec(x_8);
x_24 = 1;
x_25 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_25, 0, x_24);
lean_ctor_set_uint8(x_25, 1, x_24);
lean_ctor_set_uint8(x_25, 2, x_24);
lean_ctor_set_uint8(x_25, 3, x_24);
lean_ctor_set_uint8(x_25, 4, x_20);
lean_ctor_set_uint8(x_25, 5, x_21);
lean_ctor_set_uint8(x_25, 6, x_22);
lean_ctor_set_uint8(x_25, 7, x_23);
lean_ctor_set(x_2, 0, x_25);
x_26 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_26, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_33 = x_26;
} else {
 lean_dec_ref(x_26);
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
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_35 = lean_ctor_get(x_2, 0);
x_36 = lean_ctor_get(x_2, 1);
x_37 = lean_ctor_get(x_2, 2);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_2);
x_38 = lean_ctor_get_uint8(x_35, 4);
x_39 = lean_ctor_get_uint8(x_35, 5);
x_40 = lean_ctor_get_uint8(x_35, 6);
x_41 = lean_ctor_get_uint8(x_35, 7);
if (lean_is_exclusive(x_35)) {
 x_42 = x_35;
} else {
 lean_dec_ref(x_35);
 x_42 = lean_box(0);
}
x_43 = 1;
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(0, 0, 8);
} else {
 x_44 = x_42;
}
lean_ctor_set_uint8(x_44, 0, x_43);
lean_ctor_set_uint8(x_44, 1, x_43);
lean_ctor_set_uint8(x_44, 2, x_43);
lean_ctor_set_uint8(x_44, 3, x_43);
lean_ctor_set_uint8(x_44, 4, x_38);
lean_ctor_set_uint8(x_44, 5, x_39);
lean_ctor_set_uint8(x_44, 6, x_40);
lean_ctor_set_uint8(x_44, 7, x_41);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_36);
lean_ctor_set(x_45, 2, x_37);
x_46 = lean_apply_5(x_1, x_45, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_46, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_53 = x_46;
} else {
 lean_dec_ref(x_46);
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_fullApproxDefEqImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_fullApproxDefEqImp___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_fullApproxDefEq___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_ctor_set_uint8(x_9, 0, x_11);
lean_ctor_set_uint8(x_9, 1, x_11);
lean_ctor_set_uint8(x_9, 2, x_11);
lean_ctor_set_uint8(x_9, 3, x_11);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get_uint8(x_9, 4);
x_22 = lean_ctor_get_uint8(x_9, 5);
x_23 = lean_ctor_get_uint8(x_9, 6);
x_24 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_25 = 1;
x_26 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_26, 0, x_25);
lean_ctor_set_uint8(x_26, 1, x_25);
lean_ctor_set_uint8(x_26, 2, x_25);
lean_ctor_set_uint8(x_26, 3, x_25);
lean_ctor_set_uint8(x_26, 4, x_21);
lean_ctor_set_uint8(x_26, 5, x_22);
lean_ctor_set_uint8(x_26, 6, x_23);
lean_ctor_set_uint8(x_26, 7, x_24);
lean_ctor_set(x_3, 0, x_26);
x_27 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_34 = x_27;
} else {
 lean_dec_ref(x_27);
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
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_36 = lean_ctor_get(x_3, 0);
x_37 = lean_ctor_get(x_3, 1);
x_38 = lean_ctor_get(x_3, 2);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_3);
x_39 = lean_ctor_get_uint8(x_36, 4);
x_40 = lean_ctor_get_uint8(x_36, 5);
x_41 = lean_ctor_get_uint8(x_36, 6);
x_42 = lean_ctor_get_uint8(x_36, 7);
if (lean_is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean_dec_ref(x_36);
 x_43 = lean_box(0);
}
x_44 = 1;
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 0, 8);
} else {
 x_45 = x_43;
}
lean_ctor_set_uint8(x_45, 0, x_44);
lean_ctor_set_uint8(x_45, 1, x_44);
lean_ctor_set_uint8(x_45, 2, x_44);
lean_ctor_set_uint8(x_45, 3, x_44);
lean_ctor_set_uint8(x_45, 4, x_39);
lean_ctor_set_uint8(x_45, 5, x_40);
lean_ctor_set_uint8(x_45, 6, x_41);
lean_ctor_set_uint8(x_45, 7, x_42);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_37);
lean_ctor_set(x_46, 2, x_38);
x_47 = lean_apply_7(x_2, lean_box(0), x_1, x_46, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_47, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_54 = x_47;
} else {
 lean_dec_ref(x_47);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
lean_object* l_Lean_Meta_fullApproxDefEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_fullApproxDefEq___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_fullApproxDefEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_fullApproxDefEq___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVarsImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_normalizeLevel___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Level_normalize(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_normalizeLevel___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_normalizeLevel___rarg___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_normalizeLevel___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Meta_normalizeLevel___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_normalizeLevel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_normalizeLevel___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_instantiateLevelMVars___at_Lean_Meta_normalizeLevel___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_normalizeLevel___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_normalizeLevel___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_assignLevelMVar___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_4, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_metavar_ctx_assign_level(x_12, x_1, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_4, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = lean_metavar_ctx_assign_level(x_21, x_1, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_4, x_26, x_10);
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
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Meta_assignLevelMVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_assignLevelMVar___rarg___lambda__1___boxed), 7, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_assignLevelMVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_assignLevelMVar___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_assignLevelMVar___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_assignLevelMVar___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Meta_whnfD___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_ctor_set_uint8(x_9, 5, x_11);
x_12 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
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
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get_uint8(x_9, 0);
x_22 = lean_ctor_get_uint8(x_9, 1);
x_23 = lean_ctor_get_uint8(x_9, 2);
x_24 = lean_ctor_get_uint8(x_9, 3);
x_25 = lean_ctor_get_uint8(x_9, 4);
x_26 = lean_ctor_get_uint8(x_9, 6);
x_27 = lean_ctor_get_uint8(x_9, 7);
lean_dec(x_9);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_29, 0, x_21);
lean_ctor_set_uint8(x_29, 1, x_22);
lean_ctor_set_uint8(x_29, 2, x_23);
lean_ctor_set_uint8(x_29, 3, x_24);
lean_ctor_set_uint8(x_29, 4, x_25);
lean_ctor_set_uint8(x_29, 5, x_28);
lean_ctor_set_uint8(x_29, 6, x_26);
lean_ctor_set_uint8(x_29, 7, x_27);
lean_ctor_set(x_3, 0, x_29);
x_30 = lean_apply_7(x_2, lean_box(0), x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_37 = x_30;
} else {
 lean_dec_ref(x_30);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get(x_3, 2);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
x_42 = lean_ctor_get_uint8(x_39, 0);
x_43 = lean_ctor_get_uint8(x_39, 1);
x_44 = lean_ctor_get_uint8(x_39, 2);
x_45 = lean_ctor_get_uint8(x_39, 3);
x_46 = lean_ctor_get_uint8(x_39, 4);
x_47 = lean_ctor_get_uint8(x_39, 6);
x_48 = lean_ctor_get_uint8(x_39, 7);
if (lean_is_exclusive(x_39)) {
 x_49 = x_39;
} else {
 lean_dec_ref(x_39);
 x_49 = lean_box(0);
}
x_50 = 1;
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 0, 8);
} else {
 x_51 = x_49;
}
lean_ctor_set_uint8(x_51, 0, x_42);
lean_ctor_set_uint8(x_51, 1, x_43);
lean_ctor_set_uint8(x_51, 2, x_44);
lean_ctor_set_uint8(x_51, 3, x_45);
lean_ctor_set_uint8(x_51, 4, x_46);
lean_ctor_set_uint8(x_51, 5, x_50);
lean_ctor_set_uint8(x_51, 6, x_47);
lean_ctor_set_uint8(x_51, 7, x_48);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_40);
lean_ctor_set(x_52, 2, x_41);
x_53 = lean_apply_7(x_2, lean_box(0), x_1, x_52, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_53, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_60 = x_53;
} else {
 lean_dec_ref(x_53);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
}
lean_object* l_Lean_Meta_whnfD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = l_Lean_Meta_whnf___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_whnfD___rarg___lambda__1), 7, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_apply_2(x_8, lean_box(0), x_7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_1(x_10, lean_box(0));
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_whnfD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_whnfD___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_setInlineAttribute_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_setInlineAttribute_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setInlineAttribute_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_take(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_1);
x_12 = lean_st_ref_set(x_5, x_8, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_8);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_st_ref_set(x_5, x_22, x_9);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
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
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Compiler_inlineAttrs;
x_10 = lean_box(x_2);
x_11 = l_Lean_EnumAttributes_setValue___rarg(x_9, x_3, x_1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_14, lean_box(0), x_4, x_5, x_6, x_7, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_16, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Meta_setInlineAttribute___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_setInlineAttribute___rarg___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_setInlineAttribute___rarg___lambda__2___boxed), 8, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Lean_Meta_setInlineAttribute___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_apply_2(x_1, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_setInlineAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_setInlineAttribute___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_setInlineAttribute___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Lean_Meta_setInlineAttribute___rarg___lambda__2(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_setInlineAttribute___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Meta_setInlineAttribute___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid instantiateForall, too many parameters");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 7)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_19 = lean_expr_instantiate1(x_16, x_12);
lean_dec(x_12);
lean_dec(x_16);
x_2 = x_18;
x_3 = x_19;
x_8 = x_15;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_2);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3;
x_23 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_22, lean_box(0), x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_instantiateForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___boxed), 8, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_instantiateForall(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid instantiateLambda, too many parameters");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_fget(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Meta_whnf___at___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux_process___spec__1(x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 6)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_19 = lean_expr_instantiate1(x_16, x_12);
lean_dec(x_12);
lean_dec(x_16);
x_2 = x_18;
x_3 = x_19;
x_8 = x_15;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_2);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3;
x_23 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____spec__1(x_22, lean_box(0), x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_instantiateLambda___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___boxed), 8, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_apply_2(x_1, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_instantiateLambda(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_dependsOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_MetavarContext_exprDependsOn(x_3, x_1, x_2);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_dependsOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_dependsOn___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = l_Lean_Meta_instMonadMCtxMetaM___closed__3;
x_6 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_dependsOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_dependsOn___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_dependsOn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_dependsOn___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_ppExprImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_3, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_box(0);
x_18 = lean_box(0);
lean_inc(x_16);
lean_inc(x_15);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_18);
lean_ctor_set(x_19, 5, x_17);
x_20 = lean_ctor_get(x_4, 3);
x_21 = l_Lean_ppExpr(x_19, x_1, x_13);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_io_error_to_string(x_27);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_inc(x_20);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_20);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_21, 0, x_31);
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_io_error_to_string(x_32);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
lean_inc(x_20);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_ppExprImp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_ppExprImp(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_ppExpr___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_ppExprImp___boxed), 6, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_ppExpr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_ppExpr___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_orelse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_4, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = lean_apply_5(x_1, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_11, x_3, x_4, x_5, x_6, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_15, x_3, x_4, x_5, x_6, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Meta_orelse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_orelse___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_instOrElseMetaM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_orelse___rarg), 7, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_instOrElseMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_instOrElseMetaM___closed__1;
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = lean_apply_5(x_1, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_13, x_5, x_6, x_7, x_8, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_17, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_apply_5(x_2, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_27) == 0)
{
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
x_34 = lean_apply_2(x_3, x_25, x_32);
x_35 = lean_apply_2(x_4, x_26, x_33);
lean_ctor_set(x_28, 1, x_35);
lean_ctor_set(x_28, 0, x_34);
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_28, 0);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_28);
x_38 = lean_apply_2(x_3, x_25, x_36);
x_39 = lean_apply_2(x_4, x_26, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_27, 0, x_40);
return x_27;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_27, 1);
lean_inc(x_41);
lean_dec(x_27);
x_42 = lean_ctor_get(x_28, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_28, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_44 = x_28;
} else {
 lean_dec_ref(x_28);
 x_44 = lean_box(0);
}
x_45 = lean_apply_2(x_3, x_25, x_42);
x_46 = lean_apply_2(x_4, x_26, x_43);
if (lean_is_scalar(x_44)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_44;
}
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_41);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_27);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_27, 0);
lean_dec(x_50);
return x_27;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_27, 1);
lean_inc(x_51);
lean_dec(x_27);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_28);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_23);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_23, 0);
lean_dec(x_54);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_19);
return x_23;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_23, 1);
lean_inc(x_55);
lean_dec(x_23);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_19);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_orelseMergeErrorsImp___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_orelseMergeErrors___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_7, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_5);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = lean_apply_7(x_5, lean_box(0), x_1, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_6, x_7, x_8, x_9, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_18, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_apply_7(x_5, lean_box(0), x_2, x_6, x_7, x_8, x_9, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_28, 0);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
x_35 = lean_apply_2(x_3, x_26, x_33);
x_36 = lean_apply_2(x_4, x_27, x_34);
lean_ctor_set(x_29, 1, x_36);
lean_ctor_set(x_29, 0, x_35);
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_29, 0);
x_38 = lean_ctor_get(x_29, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_29);
x_39 = lean_apply_2(x_3, x_26, x_37);
x_40 = lean_apply_2(x_4, x_27, x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_28, 0, x_41);
return x_28;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_dec(x_28);
x_43 = lean_ctor_get(x_29, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_45 = x_29;
} else {
 lean_dec_ref(x_29);
 x_45 = lean_box(0);
}
x_46 = lean_apply_2(x_3, x_26, x_43);
x_47 = lean_apply_2(x_4, x_27, x_44);
if (lean_is_scalar(x_45)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_45;
}
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_42);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_28);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_28, 0);
lean_dec(x_51);
return x_28;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_28, 1);
lean_inc(x_52);
lean_dec(x_28);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_29);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_24);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_24, 0);
lean_dec(x_55);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_20);
return x_24;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_24, 1);
lean_inc(x_56);
lean_dec(x_24);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_20);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
}
lean_object* l_Lean_Meta_orelseMergeErrors___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_orelseMergeErrors___rarg___lambda__1), 10, 4);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_5);
lean_closure_set(x_8, 3, x_6);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_apply_2(x_9, lean_box(0), x_8);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_11, lean_box(0));
x_13 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_Meta_orelseMergeErrors(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_orelseMergeErrors___rarg), 6, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_mapErrorImp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_Meta_mapErrorImp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mapErrorImp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mapErrorImp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_5(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_dec(x_2);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_apply_1(x_2, x_13);
lean_ctor_set(x_9, 1, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_apply_1(x_2, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_8, 0, x_18);
return x_8;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_22 = x_9;
} else {
 lean_dec_ref(x_9);
 x_22 = lean_box(0);
}
x_23 = lean_apply_1(x_2, x_21);
if (lean_is_scalar(x_22)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_22;
}
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_19);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_8);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_8, 0);
lean_dec(x_27);
return x_8;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_8, 1);
lean_inc(x_28);
lean_dec(x_8);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_9);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Lean_Meta_mapErrorImp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_mapErrorImp___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mapError___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_3, lean_box(0), x_1);
x_10 = l_Lean_Meta_mapErrorImp___rarg(x_9, x_2, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_mapError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_mapError___rarg___lambda__1), 8, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_mapError(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_mapError___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_commitWhenSome_x3f_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Core_instMonadEnvCoreM;
x_2 = l_StateRefT_x27_instMonadLiftStateRefT_x27___closed__1;
x_3 = l_Lean_instMonadEnv___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadLiftReaderT), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1;
x_2 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2;
x_3 = l_Lean_instMonadEnv___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMonadLiftT__1), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_37; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_3, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_37 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_13);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3;
lean_inc(x_10);
x_41 = l_Lean_setEnv___rarg(x_40, x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_42 = lean_apply_5(x_41, x_2, x_3, x_4, x_5, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4;
lean_inc(x_14);
x_45 = l_Lean_Meta_setMCtx___rarg(x_44, x_14);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_46 = lean_apply_5(x_45, x_2, x_3, x_4, x_5, x_43);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = lean_box(0);
lean_ctor_set(x_46, 0, x_49);
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_46, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_46, 1);
lean_inc(x_54);
lean_dec(x_46);
x_15 = x_53;
x_16 = x_54;
goto block_36;
}
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_42, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_42, 1);
lean_inc(x_56);
lean_dec(x_42);
x_15 = x_55;
x_16 = x_56;
goto block_36;
}
}
else
{
uint8_t x_57; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_37);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_37, 0);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_38);
if (x_59 == 0)
{
return x_37;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_38, 0);
lean_inc(x_60);
lean_dec(x_38);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_37, 0, x_61);
return x_37;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_37, 1);
lean_inc(x_62);
lean_dec(x_37);
x_63 = lean_ctor_get(x_38, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 x_64 = x_38;
} else {
 lean_dec_ref(x_38);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 1, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_63);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_37, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_37, 1);
lean_inc(x_68);
lean_dec(x_37);
x_15 = x_67;
x_16 = x_68;
goto block_36;
}
block_36:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3;
x_18 = l_Lean_setEnv___rarg(x_17, x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = lean_apply_5(x_18, x_2, x_3, x_4, x_5, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4;
x_22 = l_Lean_Meta_setMCtx___rarg(x_21, x_14);
x_23 = lean_apply_5(x_22, x_2, x_3, x_4, x_5, x_20);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 0, x_15);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_15);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_15);
x_28 = !lean_is_exclusive(x_23);
if (x_28 == 0)
{
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l_Lean_Meta_commitWhenSome_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_commitWhenSome_x3f___rarg), 6, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_LOption(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_Class(lean_object*);
lean_object* initialize_Lean_ReducibilityAttrs(lean_object*);
lean_object* initialize_Lean_Util_Trace(lean_object*);
lean_object* initialize_Lean_Util_RecDepth(lean_object*);
lean_object* initialize_Lean_Util_PPExt(lean_object*);
lean_object* initialize_Lean_Compiler_InlineAttrs(lean_object*);
lean_object* initialize_Lean_Meta_TransparencyMode(lean_object*);
lean_object* initialize_Lean_Meta_DiscrTreeTypes(lean_object*);
lean_object* initialize_Lean_Eval(lean_object*);
lean_object* initialize_Lean_CoreM(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_LOption(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Class(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReducibilityAttrs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Trace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PPExt(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InlineAttrs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_TransparencyMode(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTreeTypes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Eval(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3____closed__2);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_3_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_isDefEqStuckExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_isDefEqStuckExceptionId);
lean_dec_ref(res);
l_Lean_Meta_Config_foApprox___default = _init_l_Lean_Meta_Config_foApprox___default();
l_Lean_Meta_Config_ctxApprox___default = _init_l_Lean_Meta_Config_ctxApprox___default();
l_Lean_Meta_Config_quasiPatternApprox___default = _init_l_Lean_Meta_Config_quasiPatternApprox___default();
l_Lean_Meta_Config_constApprox___default = _init_l_Lean_Meta_Config_constApprox___default();
l_Lean_Meta_Config_isDefEqStuckEx___default = _init_l_Lean_Meta_Config_isDefEqStuckEx___default();
l_Lean_Meta_Config_transparency___default = _init_l_Lean_Meta_Config_transparency___default();
l_Lean_Meta_Config_zetaNonDep___default = _init_l_Lean_Meta_Config_zetaNonDep___default();
l_Lean_Meta_Config_trackZeta___default = _init_l_Lean_Meta_Config_trackZeta___default();
l_Lean_Meta_ParamInfo_implicit___default = _init_l_Lean_Meta_ParamInfo_implicit___default();
l_Lean_Meta_ParamInfo_instImplicit___default = _init_l_Lean_Meta_ParamInfo_instImplicit___default();
l_Lean_Meta_ParamInfo_hasFwdDeps___default = _init_l_Lean_Meta_ParamInfo_hasFwdDeps___default();
l_Lean_Meta_ParamInfo_backDeps___default = _init_l_Lean_Meta_ParamInfo_backDeps___default();
lean_mark_persistent(l_Lean_Meta_ParamInfo_backDeps___default);
l_Lean_Meta_instInhabitedParamInfo___closed__1 = _init_l_Lean_Meta_instInhabitedParamInfo___closed__1();
lean_mark_persistent(l_Lean_Meta_instInhabitedParamInfo___closed__1);
l_Lean_Meta_instInhabitedParamInfo = _init_l_Lean_Meta_instInhabitedParamInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedParamInfo);
l_Lean_Meta_FunInfo_paramInfo___default = _init_l_Lean_Meta_FunInfo_paramInfo___default();
lean_mark_persistent(l_Lean_Meta_FunInfo_paramInfo___default);
l_Lean_Meta_FunInfo_resultDeps___default = _init_l_Lean_Meta_FunInfo_resultDeps___default();
lean_mark_persistent(l_Lean_Meta_FunInfo_resultDeps___default);
l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1 = _init_l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1();
lean_mark_persistent(l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey___closed__1);
l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey = _init_l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey();
lean_mark_persistent(l_Lean_Meta_InfoCacheKey_instInhabitedInfoCacheKey);
l_Lean_Meta_Cache_inferType___default___closed__1 = _init_l_Lean_Meta_Cache_inferType___default___closed__1();
lean_mark_persistent(l_Lean_Meta_Cache_inferType___default___closed__1);
l_Lean_Meta_Cache_inferType___default = _init_l_Lean_Meta_Cache_inferType___default();
lean_mark_persistent(l_Lean_Meta_Cache_inferType___default);
l_Lean_Meta_Cache_funInfo___default___closed__1 = _init_l_Lean_Meta_Cache_funInfo___default___closed__1();
lean_mark_persistent(l_Lean_Meta_Cache_funInfo___default___closed__1);
l_Lean_Meta_Cache_funInfo___default___closed__2 = _init_l_Lean_Meta_Cache_funInfo___default___closed__2();
lean_mark_persistent(l_Lean_Meta_Cache_funInfo___default___closed__2);
l_Lean_Meta_Cache_funInfo___default___closed__3 = _init_l_Lean_Meta_Cache_funInfo___default___closed__3();
lean_mark_persistent(l_Lean_Meta_Cache_funInfo___default___closed__3);
l_Lean_Meta_Cache_funInfo___default = _init_l_Lean_Meta_Cache_funInfo___default();
lean_mark_persistent(l_Lean_Meta_Cache_funInfo___default);
l_Lean_Meta_Cache_synthInstance___default___closed__1 = _init_l_Lean_Meta_Cache_synthInstance___default___closed__1();
lean_mark_persistent(l_Lean_Meta_Cache_synthInstance___default___closed__1);
l_Lean_Meta_Cache_synthInstance___default = _init_l_Lean_Meta_Cache_synthInstance___default();
lean_mark_persistent(l_Lean_Meta_Cache_synthInstance___default);
l_Lean_Meta_Cache_whnfDefault___default = _init_l_Lean_Meta_Cache_whnfDefault___default();
lean_mark_persistent(l_Lean_Meta_Cache_whnfDefault___default);
l_Lean_Meta_Cache_whnfAll___default = _init_l_Lean_Meta_Cache_whnfAll___default();
lean_mark_persistent(l_Lean_Meta_Cache_whnfAll___default);
l_Lean_Meta_State_mctx___default = _init_l_Lean_Meta_State_mctx___default();
lean_mark_persistent(l_Lean_Meta_State_mctx___default);
l_Lean_Meta_State_cache___default___closed__1 = _init_l_Lean_Meta_State_cache___default___closed__1();
lean_mark_persistent(l_Lean_Meta_State_cache___default___closed__1);
l_Lean_Meta_State_cache___default = _init_l_Lean_Meta_State_cache___default();
lean_mark_persistent(l_Lean_Meta_State_cache___default);
l_Lean_Meta_State_zetaFVarIds___default = _init_l_Lean_Meta_State_zetaFVarIds___default();
lean_mark_persistent(l_Lean_Meta_State_zetaFVarIds___default);
l_Lean_Meta_State_postponed___default = _init_l_Lean_Meta_State_postponed___default();
lean_mark_persistent(l_Lean_Meta_State_postponed___default);
l_Lean_Meta_instInhabitedState___closed__1 = _init_l_Lean_Meta_instInhabitedState___closed__1();
lean_mark_persistent(l_Lean_Meta_instInhabitedState___closed__1);
l_Lean_Meta_instInhabitedState = _init_l_Lean_Meta_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_instInhabitedState);
l_Lean_Meta_Context_config___default___closed__1 = _init_l_Lean_Meta_Context_config___default___closed__1();
lean_mark_persistent(l_Lean_Meta_Context_config___default___closed__1);
l_Lean_Meta_Context_config___default = _init_l_Lean_Meta_Context_config___default();
lean_mark_persistent(l_Lean_Meta_Context_config___default);
l_Lean_Meta_Context_lctx___default = _init_l_Lean_Meta_Context_lctx___default();
lean_mark_persistent(l_Lean_Meta_Context_lctx___default);
l_Lean_Meta_Context_localInstances___default = _init_l_Lean_Meta_Context_localInstances___default();
lean_mark_persistent(l_Lean_Meta_Context_localInstances___default);
l_Lean_Meta_instMonadLCtxMetaM___closed__1 = _init_l_Lean_Meta_instMonadLCtxMetaM___closed__1();
lean_mark_persistent(l_Lean_Meta_instMonadLCtxMetaM___closed__1);
l_Lean_Meta_instMonadLCtxMetaM___closed__2 = _init_l_Lean_Meta_instMonadLCtxMetaM___closed__2();
lean_mark_persistent(l_Lean_Meta_instMonadLCtxMetaM___closed__2);
l_Lean_Meta_instMonadLCtxMetaM___closed__3 = _init_l_Lean_Meta_instMonadLCtxMetaM___closed__3();
lean_mark_persistent(l_Lean_Meta_instMonadLCtxMetaM___closed__3);
l_Lean_Meta_instMonadLCtxMetaM = _init_l_Lean_Meta_instMonadLCtxMetaM();
lean_mark_persistent(l_Lean_Meta_instMonadLCtxMetaM);
l_Lean_Meta_instMonadMCtxMetaM___closed__1 = _init_l_Lean_Meta_instMonadMCtxMetaM___closed__1();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM___closed__1);
l_Lean_Meta_instMonadMCtxMetaM___closed__2 = _init_l_Lean_Meta_instMonadMCtxMetaM___closed__2();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM___closed__2);
l_Lean_Meta_instMonadMCtxMetaM___closed__3 = _init_l_Lean_Meta_instMonadMCtxMetaM___closed__3();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM___closed__3);
l_Lean_Meta_instMonadMCtxMetaM___closed__4 = _init_l_Lean_Meta_instMonadMCtxMetaM___closed__4();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM___closed__4);
l_Lean_Meta_instMonadMCtxMetaM___closed__5 = _init_l_Lean_Meta_instMonadMCtxMetaM___closed__5();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM___closed__5);
l_Lean_Meta_instMonadMCtxMetaM = _init_l_Lean_Meta_instMonadMCtxMetaM();
lean_mark_persistent(l_Lean_Meta_instMonadMCtxMetaM);
l_Lean_Meta_instAddMessageContextMetaM___closed__1 = _init_l_Lean_Meta_instAddMessageContextMetaM___closed__1();
lean_mark_persistent(l_Lean_Meta_instAddMessageContextMetaM___closed__1);
l_Lean_Meta_instAddMessageContextMetaM = _init_l_Lean_Meta_instAddMessageContextMetaM();
lean_mark_persistent(l_Lean_Meta_instAddMessageContextMetaM);
l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1 = _init_l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_instMetaEvalMetaM___rarg___closed__1);
l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2 = _init_l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_instMetaEvalMetaM___rarg___closed__2);
l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1 = _init_l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwIsDefEqStuck___rarg___closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__3);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510____closed__4);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_510_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_getLocalInstances___rarg___closed__1 = _init_l_Lean_Meta_getLocalInstances___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_getLocalInstances___rarg___closed__1);
l_Lean_Meta_getLocalInstances___rarg___closed__2 = _init_l_Lean_Meta_getLocalInstances___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_getLocalInstances___rarg___closed__2);
l_Lean_Meta_getConfig___rarg___closed__1 = _init_l_Lean_Meta_getConfig___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_getConfig___rarg___closed__1);
l_Lean_Meta_getConfig___rarg___closed__2 = _init_l_Lean_Meta_getConfig___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_getConfig___rarg___closed__2);
l_Lean_Meta_resetZetaFVarIds___rarg___closed__1 = _init_l_Lean_Meta_resetZetaFVarIds___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_resetZetaFVarIds___rarg___closed__1);
l_Lean_Meta_getZetaFVarIds___rarg___closed__1 = _init_l_Lean_Meta_getZetaFVarIds___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_getZetaFVarIds___rarg___closed__1);
l_Lean_Meta_getZetaFVarIds___rarg___closed__2 = _init_l_Lean_Meta_getZetaFVarIds___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_getZetaFVarIds___rarg___closed__2);
l_Lean_Meta_getPostponed___rarg___closed__1 = _init_l_Lean_Meta_getPostponed___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_getPostponed___rarg___closed__1);
l_Lean_Meta_getPostponed___rarg___closed__2 = _init_l_Lean_Meta_getPostponed___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_getPostponed___rarg___closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____lambda__1___closed__3);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022____closed__1);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1022_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_whnfRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_whnfRef);
lean_dec_ref(res);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____lambda__1___closed__3);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091____closed__1);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1091_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_inferTypeRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_inferTypeRef);
lean_dec_ref(res);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____lambda__1___closed__3);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160____closed__1);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1160_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_isExprDefEqAuxRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_isExprDefEqAuxRef);
lean_dec_ref(res);
l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237____closed__1);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1237_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_synthPendingRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_synthPendingRef);
lean_dec_ref(res);
l_Lean_Meta_whnf___rarg___closed__1 = _init_l_Lean_Meta_whnf___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_whnf___rarg___closed__1);
l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1 = _init_l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_mkFreshExprMVarAt___rarg___closed__1);
l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1 = _init_l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_mkFreshLevelMVar___rarg___closed__1);
l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2 = _init_l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_mkFreshLevelMVar___rarg___closed__2);
l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1 = _init_l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_mkFreshTypeMVar___rarg___closed__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarWithIdCore___rarg___closed__1);
l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1 = _init_l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__1);
l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2 = _init_l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_shouldReduceReducibleOnly___rarg___closed__2);
l_Lean_Meta_getTransparency___rarg___closed__1 = _init_l_Lean_Meta_getTransparency___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_getTransparency___rarg___closed__1);
l_Lean_Meta_getTransparency___rarg___closed__2 = _init_l_Lean_Meta_getTransparency___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_getTransparency___rarg___closed__2);
l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1 = _init_l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__1);
l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2 = _init_l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_getMVarDecl___rarg___lambda__1___closed__2);
l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1 = _init_l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_isReadOnlyExprMVar___rarg___closed__1);
l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1 = _init_l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_isReadOnlyOrSyntheticOpaqueExprMVar___rarg___closed__1);
l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1 = _init_l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__1);
l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2 = _init_l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_isReadOnlyLevelMVar___rarg___lambda__1___closed__2);
l_Lean_Meta_throwUnknownFVar___rarg___closed__1 = _init_l_Lean_Meta_throwUnknownFVar___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_throwUnknownFVar___rarg___closed__1);
l_Lean_Meta_throwUnknownFVar___rarg___closed__2 = _init_l_Lean_Meta_throwUnknownFVar___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_throwUnknownFVar___rarg___closed__2);
l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1 = _init_l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__1);
l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2 = _init_l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2);
l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at_Lean_Meta_instantiateMVarsImp___spec__5___boxed__const__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__2);
l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3);
l_Lean_Meta_mkArrow___rarg___closed__1 = _init_l_Lean_Meta_mkArrow___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_mkArrow___rarg___closed__1);
l_Lean_Meta_mkArrow___rarg___closed__2 = _init_l_Lean_Meta_mkArrow___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_mkArrow___rarg___closed__2);
l_Lean_Meta_mkArrow___rarg___closed__3 = _init_l_Lean_Meta_mkArrow___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_mkArrow___rarg___closed__3);
l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_isClassExpensive_x3f___closed__1);
l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1 = _init_l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_getParamNamesImp___lambda__1___boxed__const__1);
l_Lean_Meta_getParamNamesImp___closed__1 = _init_l_Lean_Meta_getParamNamesImp___closed__1();
lean_mark_persistent(l_Lean_Meta_getParamNamesImp___closed__1);
l_Lean_Meta_normalizeLevel___rarg___closed__1 = _init_l_Lean_Meta_normalizeLevel___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_normalizeLevel___rarg___closed__1);
l_Lean_Meta_setInlineAttribute___rarg___closed__1 = _init_l_Lean_Meta_setInlineAttribute___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_setInlineAttribute___rarg___closed__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__2);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateForallAux___closed__3);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__1);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__2);
l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3 = _init_l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Basic_0__Lean_Meta_instantiateLambdaAux___closed__3);
l_Lean_Meta_instOrElseMetaM___closed__1 = _init_l_Lean_Meta_instOrElseMetaM___closed__1();
lean_mark_persistent(l_Lean_Meta_instOrElseMetaM___closed__1);
l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1 = _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_commitWhenSome_x3f___rarg___closed__1);
l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2 = _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_commitWhenSome_x3f___rarg___closed__2);
l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3 = _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_commitWhenSome_x3f___rarg___closed__3);
l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4 = _init_l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_commitWhenSome_x3f___rarg___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
