// Lean compiler output
// Module: ComputationalPaths.Path.Homotopy.LieGroups
// Imports: Init ComputationalPaths.Path.HIT.Circle ComputationalPaths.Path.HIT.CircleStep ComputationalPaths.Path.HIT.TorusStep ComputationalPaths.Path.HIT.Sphere ComputationalPaths.Path.HIT.ProjectivePlaneStep ComputationalPaths.Path.Homotopy.FundamentalGroup ComputationalPaths.Path.Homotopy.FundamentalGroupoid ComputationalPaths.Path.Homotopy.ProductFundamentalGroup
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_instDecidableEqOfNatNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_IntTuple_zero(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_IntTuple_zero___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__1(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0;
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_TorusN_instDecidableEqOfNatNat(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_TorusN_instDecidableEqOfNatNat(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_instDecidableEqOfNatNat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ComputationalPaths_Path_TorusN_instDecidableEqOfNatNat(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_TorusN_torusOneEquivCircle() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0___boxed), 1, 0);
x_2 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__1), 1, 0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_TorusN_torusOneEquivCircle___lam__0(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static lean_object* _init_l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_IntTuple_zero(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 1)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = l_ComputationalPaths_Path_TorusN_IntTuple_zero(x_6);
lean_dec(x_6);
x_8 = l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_TorusN_IntTuple_zero___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_TorusN_IntTuple_zero(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_CircleStep(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_TorusStep(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Sphere(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_ProjectivePlaneStep(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_FundamentalGroup(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_FundamentalGroupoid(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_ProductFundamentalGroup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Homotopy_LieGroups(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Circle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_CircleStep(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_TorusStep(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Sphere(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_ProjectivePlaneStep(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_FundamentalGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_FundamentalGroupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_ProductFundamentalGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComputationalPaths_Path_TorusN_torusOneEquivCircle = _init_l_ComputationalPaths_Path_TorusN_torusOneEquivCircle();
lean_mark_persistent(l_ComputationalPaths_Path_TorusN_torusOneEquivCircle);
l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0 = _init_l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0();
lean_mark_persistent(l_ComputationalPaths_Path_TorusN_IntTuple_zero___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
