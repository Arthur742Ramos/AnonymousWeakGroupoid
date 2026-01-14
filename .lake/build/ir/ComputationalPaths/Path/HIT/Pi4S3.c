// Lean compiler output
// Module: ComputationalPaths.Path.HIT.Pi4S3
// Imports: Init ComputationalPaths.Path.HIT.Pi3Sphere ComputationalPaths.Path.Homotopy.FreudenthalSuspension
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
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__inv___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_Z2_add(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__inv(uint8_t);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__suspEta;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s2FourLoop__parity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_sphereNPlus1__generator(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_Z2_one;
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_Z2_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s2FourLoop__of__parity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__comp(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__parity___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__comp___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__parity(uint8_t);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__parity(uint8_t);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_sphereNPlus1__generator___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__of__parity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__refl;
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__of__parity(uint8_t);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_hopf__pi4__map(uint8_t);
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_hopf__pi4__map___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__of__parity(uint8_t);
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__etaSquared;
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_Z2_zero;
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__refl;
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_Z2_add(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_Z2_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l_ComputationalPaths_Path_Pi4S3_Z2_add(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_Z2_zero() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_Z2_one() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_s3FourLoop__refl() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_s3FourLoop__suspEta() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__comp(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_ComputationalPaths_Path_Pi4S3_Z2_add(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__comp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l_ComputationalPaths_Path_Pi4S3_s3FourLoop__comp(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__inv(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__inv___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_s3FourLoop__inv(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__parity(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__parity___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_s3FourLoop__parity(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s3FourLoop__of__parity(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s3FourLoop__of__parity___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_s3FourLoop__of__parity(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_sphereNPlus1__generator(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_sphereNPlus1__generator___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ComputationalPaths_Path_Pi4S3_sphereNPlus1__generator(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_s2FourLoop__refl() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_ComputationalPaths_Path_Pi4S3_s2FourLoop__etaSquared() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__parity(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s2FourLoop__parity___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_s2FourLoop__parity(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_s2FourLoop__of__parity(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_s2FourLoop__of__parity___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_s2FourLoop__of__parity(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_ComputationalPaths_Path_Pi4S3_hopf__pi4__map(uint8_t x_1) {
_start:
{
return x_1;
}
}
LEAN_EXPORT lean_object* l_ComputationalPaths_Path_Pi4S3_hopf__pi4__map___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
x_3 = l_ComputationalPaths_Path_Pi4S3_hopf__pi4__map(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_HIT_Pi3Sphere(uint8_t builtin, lean_object*);
lean_object* initialize_ComputationalPaths_Path_Homotopy_FreudenthalSuspension(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ComputationalPaths_Path_HIT_Pi4S3(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_HIT_Pi3Sphere(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ComputationalPaths_Path_Homotopy_FreudenthalSuspension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ComputationalPaths_Path_Pi4S3_Z2_zero = _init_l_ComputationalPaths_Path_Pi4S3_Z2_zero();
l_ComputationalPaths_Path_Pi4S3_Z2_one = _init_l_ComputationalPaths_Path_Pi4S3_Z2_one();
l_ComputationalPaths_Path_Pi4S3_s3FourLoop__refl = _init_l_ComputationalPaths_Path_Pi4S3_s3FourLoop__refl();
l_ComputationalPaths_Path_Pi4S3_s3FourLoop__suspEta = _init_l_ComputationalPaths_Path_Pi4S3_s3FourLoop__suspEta();
l_ComputationalPaths_Path_Pi4S3_s2FourLoop__refl = _init_l_ComputationalPaths_Path_Pi4S3_s2FourLoop__refl();
l_ComputationalPaths_Path_Pi4S3_s2FourLoop__etaSquared = _init_l_ComputationalPaths_Path_Pi4S3_s2FourLoop__etaSquared();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
