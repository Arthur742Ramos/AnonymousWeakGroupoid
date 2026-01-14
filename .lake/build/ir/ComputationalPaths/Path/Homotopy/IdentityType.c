// Lean compiler output
// Module: ComputationalPaths.Path.Homotopy.IdentityType
// Imports: Init ComputationalPaths.Path.Basic ComputationalPaths.Path.Homotopy.HoTT
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
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_IdentityType_apd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_IdentityType_apd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_IdentityType_apd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_IdentityType_apd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ComputationalPaths_Path_IdentityType_apd(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_2(x_6, x_5, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_ComputationalPaths_Path_Homotopy_IdentityType_0__ComputationalPaths_Path_IdentityType_apd_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_HoTT(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Homotopy_IdentityType(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_HoTT(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
