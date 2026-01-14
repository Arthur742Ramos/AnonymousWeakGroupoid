// Lean compiler output
// Module: ComputationalPaths.Path.Homotopy.Truncation
// Imports: Init ComputationalPaths.Path.Homotopy.FundamentalGroup ComputationalPaths.Path.Homotopy.HigherHomotopy ComputationalPaths.Path.Homotopy.Sets ComputationalPaths.Path.OmegaGroupoid ComputationalPaths.Path.HIT.Pushout
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_punitProp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_emptyProp;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_punitContr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0(uint8_t, uint8_t);
lean_object* l_ComputationalPaths_Path_symm___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_punitContr;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_contr__implies__prop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_punitProp;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_contr__implies__prop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_ctorIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_ctorIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_Truncation_IsContr_ctorIdx(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
lean_inc_ref(x_4);
x_5 = lean_apply_1(x_4, x_2);
x_6 = lean_apply_1(x_4, x_3);
x_7 = l_ComputationalPaths_Path_symm___redArg(x_6);
x_8 = l_List_appendTR___redArg(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsContr_punitContr___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_ComputationalPaths_Path_Truncation_IsContr_punitContr() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsContr_punitContr___lam__0), 1, 0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ctorIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ctorIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_Truncation_IsProp_ctorIdx(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
static lean_object* _init_l_ComputationalPaths_Path_Truncation_IsProp_emptyProp() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l_ComputationalPaths_Path_Truncation_IsProp_emptyProp___lam__0(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_punitProp___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_Truncation_IsProp_punitProp() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsProp_punitProp___lam__0), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComputationalPaths_Path_Truncation_IsContr_allPathsConnected___redArg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg___lam__0), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_IsProp_ofContr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_contr__implies__prop___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg___lam__0), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Truncation_contr__implies__prop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_Truncation_IsProp_ofContr___redArg___lam__0), 3, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_FundamentalGroup(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_Sets(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_OmegaGroupoid(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pushout(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Homotopy_Truncation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_FundamentalGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_Sets(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_OmegaGroupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Pushout(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComputationalPaths_Path_Truncation_IsContr_punitContr = _init_l_ComputationalPaths_Path_Truncation_IsContr_punitContr();
lean_mark_persistent(l_ComputationalPaths_Path_Truncation_IsContr_punitContr);
l_ComputationalPaths_Path_Truncation_IsProp_emptyProp = _init_l_ComputationalPaths_Path_Truncation_IsProp_emptyProp();
lean_mark_persistent(l_ComputationalPaths_Path_Truncation_IsProp_emptyProp);
l_ComputationalPaths_Path_Truncation_IsProp_punitProp = _init_l_ComputationalPaths_Path_Truncation_IsProp_punitProp();
lean_mark_persistent(l_ComputationalPaths_Path_Truncation_IsProp_punitProp);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
