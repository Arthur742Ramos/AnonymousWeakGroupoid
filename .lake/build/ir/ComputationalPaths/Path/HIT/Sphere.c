// Lean compiler output
// Module: ComputationalPaths.Path.HIT.Sphere
// Imports: Init ComputationalPaths.Path.HIT.Pushout ComputationalPaths.Path.HIT.PushoutPaths ComputationalPaths.Path.HIT.Circle ComputationalPaths.Path.Homotopy.FundamentalGroup ComputationalPaths.Path.Homotopy.HigherHomotopy ComputationalPaths.Path.Homotopy.Sets ComputationalPaths.Path.Rewrite.PathTactic
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToNorth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToSouth(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToNorth(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToSouth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToNorth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToNorth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_Sphere2_circleToNorth(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToSouth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Sphere2_circleToSouth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ComputationalPaths_Path_Sphere2_circleToSouth(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pushout(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_PushoutPaths(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_FundamentalGroup(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_Sets(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_PathTactic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_Sphere(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Pushout(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_PushoutPaths(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Circle(builtin, lean_io_mk_world());
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
res = initialize_ComputationalPaths_Path_Rewrite_PathTactic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
