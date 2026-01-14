// Lean compiler output
// Module: ComputationalPaths.Path.HIT.HopfFibration
// Imports: Init ComputationalPaths.Path.HIT.Circle ComputationalPaths.Path.HIT.Sphere ComputationalPaths.Path.HIT.Pushout ComputationalPaths.Path.HIT.PushoutPaths ComputationalPaths.Path.Homotopy.Fibration ComputationalPaths.Path.Homotopy.HigherHomotopy
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_HasHopfFibrationData_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfProj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_HasHopfFibrationData_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfProj(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToNorth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToSouth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToSouth(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToNorth(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfFiberInclusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfProj(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfProj___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_HopfFibration_hopfProj(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_hopfFiberInclusion(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_HasHopfFibrationData_ctorIdx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_HasHopfFibrationData_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_HopfFibration_HasHopfFibrationData_ctorIdx(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToNorth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToNorth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_HopfFibration_sphere2ToNorth(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToSouth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_HopfFibration_sphere2ToSouth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_HopfFibration_sphere2ToSouth(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Sphere(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pushout(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_PushoutPaths(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_Fibration(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_HopfFibration(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Circle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Sphere(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Pushout(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_PushoutPaths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_Fibration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
