// Lean compiler output
// Module: ComputationalPaths.Path.Homotopy.LongExactSequence
// Imports: Init ComputationalPaths.Path.Homotopy.Fibration ComputationalPaths.Path.Homotopy.HigherHomotopy ComputationalPaths.Path.Homotopy.EilenbergMacLane
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_ShortExactSequence_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_ShortExactSequence_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_LESSegmentPi1_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_LESSegmentPi1_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_LESSegmentPi1_ctorIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_unsigned_to_nat(0u);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_LESSegmentPi1_ctorIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ComputationalPaths_Path_LongExactSequence_LESSegmentPi1_ctorIdx(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_ShortExactSequence_ctorIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_LongExactSequence_ShortExactSequence_ctorIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ComputationalPaths_Path_LongExactSequence_ShortExactSequence_ctorIdx(x_1, x_2, x_3, x_4);
lean_dec_ref(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_Fibration(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_EilenbergMacLane(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_Homotopy_LongExactSequence(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_Fibration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_HigherHomotopy(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_EilenbergMacLane(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
