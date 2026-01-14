// Lean compiler output
// Module: ComputationalPaths.Path.HIT.NonOrientableSurface
// Imports: Init ComputationalPaths.Path.HIT.Circle ComputationalPaths.Path.HIT.CircleStep ComputationalPaths.Path.HIT.Pushout ComputationalPaths.Path.HIT.PushoutPaths ComputationalPaths.Path.HIT.ProjectivePlane ComputationalPaths.Path.HIT.KleinBottle ComputationalPaths.Path.HIT.OrientableSurface ComputationalPaths.Path.Rewrite.PathTactic
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasNonOrientableLoopDecode_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasNonOrientableLoopDecode_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NonOrientableGroupWord_ctorIdx___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_FreeGroupWord_concat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NonOrientableGroupWord_ctorIdx(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWord___boxed(lean_object*);
static lean_object* l_ComputationalPaths_Path_squareWord___redArg___closed__0;
lean_object* l_ComputationalPaths_Path_Fin_x27_ofNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWord(lean_object*);
static lean_object* _init_l_ComputationalPaths_Path_squareWord___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_ComputationalPaths_Path_squareWord___redArg___closed__0;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_squareWord___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_squareWord___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_squareWord(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 1)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(x_1, x_7);
x_9 = l_ComputationalPaths_Path_Fin_x27_ofNat___redArg(x_7, x_1);
lean_dec(x_7);
x_10 = l_ComputationalPaths_Path_squareWord___redArg(x_9);
x_11 = l_ComputationalPaths_Path_FreeGroupWord_concat___redArg(x_8, x_10);
lean_dec(x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWordAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ComputationalPaths_Path_nonOrientableRelationWordAux(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWord(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_nonOrientableRelationWordAux___redArg(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_nonOrientableRelationWord___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_nonOrientableRelationWord(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NonOrientableGroupWord_ctorIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_NonOrientableGroupWord_ctorIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_NonOrientableGroupWord_ctorIdx(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasNonOrientableLoopDecode_ctorIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HasNonOrientableLoopDecode_ctorIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ComputationalPaths_Path_HasNonOrientableLoopDecode_ctorIdx(x_1, x_2);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_CircleStep(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pushout(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_PushoutPaths(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_ProjectivePlane(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_KleinBottle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_OrientableSurface(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_PathTactic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_NonOrientableSurface(uint8_t builtin, lean_object* w) {
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
res = initialize_ComputationalPaths_Path_HIT_Pushout(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_PushoutPaths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_ProjectivePlane(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_KleinBottle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_OrientableSurface(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_PathTactic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComputationalPaths_Path_squareWord___redArg___closed__0 = _init_l_ComputationalPaths_Path_squareWord___redArg___closed__0();
lean_mark_persistent(l_ComputationalPaths_Path_squareWord___redArg___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
