// Lean compiler output
// Module: ComputationalPaths.Path.Homotopy.Coproduct
// Imports: Init ComputationalPaths.Path.Homotopy.Sets
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___redArg___boxed(lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_inlCongr___redArg(lean_object*);
lean_object* l_ComputationalPaths_Path_ofEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_inrCongr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec_ref(x_2);
x_4 = l_ComputationalPaths_Path_ofEq___redArg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumEncode___redArg(x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumEncode(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_inlCongr___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumDecode___redArg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_sumDecode___redArg(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumDecode(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec_ref(x_2);
x_4 = l_ComputationalPaths_Path_ofEq___redArg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumEncodeR___redArg(x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumEncodeR___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumEncodeR(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_inrCongr___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumDecodeR___redArg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_sumDecodeR___redArg(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_sumDecodeR___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_sumDecodeR(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_Sets(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Homotopy_Coproduct(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_Sets(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
