// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

_Float16 test_vfmv_f_s_f16mf4_f16(vfloat16mf4_t src) {
  return vfmv_f(src);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4(vfloat16mf4_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

_Float16 test_vfmv_f_s_f16mf2_f16(vfloat16mf2_t src) {
  return vfmv_f(src);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2(vfloat16mf2_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

_Float16 test_vfmv_f_s_f16m1_f16(vfloat16m1_t src) {
  return vfmv_f(src);
}

vfloat16m1_t test_vfmv_s_f_f16m1(vfloat16m1_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

_Float16 test_vfmv_f_s_f16m2_f16(vfloat16m2_t src) {
  return vfmv_f(src);
}

vfloat16m2_t test_vfmv_s_f_f16m2(vfloat16m2_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

_Float16 test_vfmv_f_s_f16m4_f16(vfloat16m4_t src) {
  return vfmv_f(src);
}

vfloat16m4_t test_vfmv_s_f_f16m4(vfloat16m4_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

_Float16 test_vfmv_f_s_f16m8_f16(vfloat16m8_t src) {
  return vfmv_f(src);
}

vfloat16m8_t test_vfmv_s_f_f16m8(vfloat16m8_t dest, _Float16 src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

float test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t src) {
  return vfmv_f(src);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2(vfloat32mf2_t dest, float src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

float test_vfmv_f_s_f32m1_f32(vfloat32m1_t src) {
  return vfmv_f(src);
}

vfloat32m1_t test_vfmv_s_f_f32m1(vfloat32m1_t dest, float src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

float test_vfmv_f_s_f32m2_f32(vfloat32m2_t src) {
  return vfmv_f(src);
}

vfloat32m2_t test_vfmv_s_f_f32m2(vfloat32m2_t dest, float src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

float test_vfmv_f_s_f32m4_f32(vfloat32m4_t src) {
  return vfmv_f(src);
}

vfloat32m4_t test_vfmv_s_f_f32m4(vfloat32m4_t dest, float src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

float test_vfmv_f_s_f32m8_f32(vfloat32m8_t src) {
  return vfmv_f(src);
}

vfloat32m8_t test_vfmv_s_f_f32m8(vfloat32m8_t dest, float src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

double test_vfmv_f_s_f64m1_f64(vfloat64m1_t src) {
  return vfmv_f(src);
}

vfloat64m1_t test_vfmv_s_f_f64m1(vfloat64m1_t dest, double src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

double test_vfmv_f_s_f64m2_f64(vfloat64m2_t src) {
  return vfmv_f(src);
}

vfloat64m2_t test_vfmv_s_f_f64m2(vfloat64m2_t dest, double src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

double test_vfmv_f_s_f64m4_f64(vfloat64m4_t src) {
  return vfmv_f(src);
}

vfloat64m4_t test_vfmv_s_f_f64m4(vfloat64m4_t dest, double src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

double test_vfmv_f_s_f64m8_f64(vfloat64m8_t src) {
  return vfmv_f(src);
}

vfloat64m8_t test_vfmv_s_f_f64m8(vfloat64m8_t dest, double src, size_t vl) {
  return vfmv_s(dest, src, vl);
}

