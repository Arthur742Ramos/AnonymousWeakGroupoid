// Lean compiler output
// Module: ComputationalPaths.Basic
// Imports: Init ComputationalPaths.Path.Basic ComputationalPaths.Path.Rewrite.SimpleEquiv ComputationalPaths.Path.Rewrite.Step ComputationalPaths.Path.Rewrite.Rw ComputationalPaths.Path.Rewrite.RwEq ComputationalPaths.Path.Rewrite.Quot ComputationalPaths.Path.Groupoid
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
LEAN_EXPORT lean_object* l_ComputationalPaths_libraryVersion;
static lean_object* l_ComputationalPaths_libraryVersion___closed__0;
static lean_object* _init_l_ComputationalPaths_libraryVersion___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0.1.0", 5, 5);
return x_1;
}
}
static lean_object* _init_l_ComputationalPaths_libraryVersion() {
_start:
{
lean_object* x_1; 
x_1 = l_ComputationalPaths_libraryVersion___closed__0;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_SimpleEquiv(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_Step(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_Rw(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_RwEq(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Rewrite_Quot(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Groupoid(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_SimpleEquiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_Step(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_Rw(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_RwEq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Rewrite_Quot(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Groupoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComputationalPaths_libraryVersion___closed__0 = _init_l_ComputationalPaths_libraryVersion___closed__0();
lean_mark_persistent(l_ComputationalPaths_libraryVersion___closed__0);
l_ComputationalPaths_libraryVersion = _init_l_ComputationalPaths_libraryVersion();
lean_mark_persistent(l_ComputationalPaths_libraryVersion);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
