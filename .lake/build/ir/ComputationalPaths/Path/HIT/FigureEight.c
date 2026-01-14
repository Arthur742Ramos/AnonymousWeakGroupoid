// Lean compiler output
// Module: ComputationalPaths.Path.HIT.FigureEight
// Imports: Init ComputationalPaths.Path.HIT.Circle ComputationalPaths.Path.HIT.CircleStep ComputationalPaths.Path.HIT.Pushout ComputationalPaths.Path.HIT.PushoutPaths
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
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ComputationalPaths_Path_FigureEight_wordAB___closed__0;
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ComputationalPaths_Path_FigureEight_wordBA___closed__0;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_freeProductWordMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_wordInverse(lean_object*);
static lean_object* l_ComputationalPaths_Path_FigureEight_wordBA___closed__1;
static lean_object* l_ComputationalPaths_Path_FigureEight_wordAB___closed__2;
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ComputationalPaths_Path_FreeProductWord_concat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_wordAB;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_wordBA;
lean_object* lean_int_neg(lean_object*);
static lean_object* l_ComputationalPaths_Path_FigureEight_wordAB___closed__1;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
case 1:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
x_8 = lean_apply_1(x_1, x_6);
x_9 = l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_9);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_10);
x_13 = l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(x_1, x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
default: 
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
x_18 = lean_apply_1(x_2, x_16);
x_19 = l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(x_1, x_2, x_17);
lean_ctor_set(x_3, 1, x_19);
lean_ctor_set(x_3, 0, x_18);
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
lean_inc(x_2);
x_22 = lean_apply_1(x_2, x_20);
x_23 = l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(x_1, x_2, x_21);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_freeProductWordMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ComputationalPaths_Path_FigureEight_freeProductWordMap___redArg(x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec_ref(x_1);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg(x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_ComputationalPaths_Path_HIT_FigureEight_0__ComputationalPaths_Path_FigureEight_freeProductWordMap_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__0;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__1;
x_2 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__0;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordAB() {
_start:
{
lean_object* x_1; 
x_1 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__2;
return x_1;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordBA___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__0;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordBA___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ComputationalPaths_Path_FigureEight_wordBA___closed__0;
x_2 = l_ComputationalPaths_Path_FigureEight_wordAB___closed__0;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_ComputationalPaths_Path_FigureEight_wordBA() {
_start:
{
lean_object* x_1; 
x_1 = l_ComputationalPaths_Path_FigureEight_wordBA___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_FigureEight_wordInverse(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_1;
}
case 1:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_ComputationalPaths_Path_FigureEight_wordInverse(x_4);
x_6 = lean_int_neg(x_3);
lean_dec(x_3);
x_7 = lean_box(0);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
x_8 = l_ComputationalPaths_Path_FreeProductWord_concat___redArg(x_5, x_1);
lean_dec_ref(x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_ComputationalPaths_Path_FigureEight_wordInverse(x_10);
x_12 = lean_int_neg(x_9);
lean_dec(x_9);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_ComputationalPaths_Path_FreeProductWord_concat___redArg(x_11, x_14);
lean_dec_ref(x_14);
return x_15;
}
}
default: 
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = l_ComputationalPaths_Path_FigureEight_wordInverse(x_18);
x_20 = lean_int_neg(x_17);
lean_dec(x_17);
x_21 = lean_box(0);
lean_ctor_set(x_1, 1, x_21);
lean_ctor_set(x_1, 0, x_20);
x_22 = l_ComputationalPaths_Path_FreeProductWord_concat___redArg(x_19, x_1);
lean_dec_ref(x_1);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
x_25 = l_ComputationalPaths_Path_FigureEight_wordInverse(x_24);
x_26 = lean_int_neg(x_23);
lean_dec(x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_ComputationalPaths_Path_FreeProductWord_concat___redArg(x_25, x_28);
lean_dec_ref(x_28);
return x_29;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_CircleStep(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pushout(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_PushoutPaths(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_FigureEight(uint8_t builtin, lean_object* w) {
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
l_ComputationalPaths_Path_FigureEight_wordAB___closed__0 = _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__0();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordAB___closed__0);
l_ComputationalPaths_Path_FigureEight_wordAB___closed__1 = _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__1();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordAB___closed__1);
l_ComputationalPaths_Path_FigureEight_wordAB___closed__2 = _init_l_ComputationalPaths_Path_FigureEight_wordAB___closed__2();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordAB___closed__2);
l_ComputationalPaths_Path_FigureEight_wordAB = _init_l_ComputationalPaths_Path_FigureEight_wordAB();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordAB);
l_ComputationalPaths_Path_FigureEight_wordBA___closed__0 = _init_l_ComputationalPaths_Path_FigureEight_wordBA___closed__0();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordBA___closed__0);
l_ComputationalPaths_Path_FigureEight_wordBA___closed__1 = _init_l_ComputationalPaths_Path_FigureEight_wordBA___closed__1();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordBA___closed__1);
l_ComputationalPaths_Path_FigureEight_wordBA = _init_l_ComputationalPaths_Path_FigureEight_wordBA();
lean_mark_persistent(l_ComputationalPaths_Path_FigureEight_wordBA);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
