// Lean compiler output
// Module: ComputationalPaths.Path.Rewrite.Rw
// Imports: Init ComputationalPaths.Path.Basic ComputationalPaths.Path.Rewrite.Step
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NormalForm_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_mapLeft___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_congrArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg(lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_mapRight___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_ofEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NormalForm_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ctorIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(0u);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ctorIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComputationalPaths_Path_RewriteLift_ctorIdx(x_1, x_2, x_3);
lean_dec_ref(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_congrArg___redArg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0___boxed), 4, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComputationalPaths_Path_RewriteLift_ofContext___redArg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_RewriteLift_ofContext___redArg___lam__0(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_mapLeft___redArg(x_1, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__0), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_RewriteLift_ofBiContextLeft___redArg___lam__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_mapRight___redArg(x_1, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__0), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_ComputationalPaths_Path_RewriteLift_ofBiContextRight___redArg___lam__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_ofEq___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_ofEq___redArg(x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_normalize(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NormalForm_ctorIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NormalForm_ctorIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_NormalForm_ctorIdx(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_ofEq___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_ofEq___redArg(x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_normalizeForm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_normalizeForm(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_Step(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Rewrite_Rw(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_Step(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
