// Lean compiler output
// Module: ComputationalPaths.Path.HIT.ProjectivePlaneStep
// Imports: Init ComputationalPaths.Path.HIT.ProjectivePlane ComputationalPaths.Path.Rewrite.SimpleEquiv
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
lean_object* l_ComputationalPaths_Path_projectiveEncode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_instHasProjectivePiOneEncode(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_projectivePiOneEncode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasProjectivePiOneEncode_ctorIdx(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_projectivePiOneEncode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasProjectivePiOneEncode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasProjectivePiOneEncode_ctorIdx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasProjectivePiOneEncode_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_HasProjectivePiOneEncode_ctorIdx(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_projectivePiOneEncode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_unbox(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_projectivePiOneEncode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ComputationalPaths_Path_projectivePiOneEncode(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_instHasProjectivePiOneEncode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_projectiveEncode___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_2 == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
x_5 = l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___redArg(x_4, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = l___private_ComputationalPaths_Path_HIT_ProjectivePlaneStep_0__ComputationalPaths_Path_projectiveDecodePath_match__1_splitter(x_1, x_5, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_ProjectivePlane(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_SimpleEquiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_ProjectivePlaneStep(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_ProjectivePlane(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_SimpleEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
