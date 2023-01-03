// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmerge_vfm_f16mf4_tu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2_tu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1_tu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2_tu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4_tu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8_tu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2_tu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_tu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_tu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_tu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_tu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_tu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_tu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_tu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_tu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, size_t vl) {
  return vfmerge_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfmerge_vfm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1_ta(vbool16_t mask, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2_ta(vbool8_t mask, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4_ta(vbool4_t mask, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8_ta(vbool2_t mask, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t op1, float op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_ta(vbool32_t mask, vfloat32m1_t op1, float op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_ta(vbool16_t mask, vfloat32m2_t op1, float op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_ta(vbool8_t mask, vfloat32m4_t op1, float op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_ta(vbool4_t mask, vfloat32m8_t op1, float op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_ta(vbool64_t mask, vfloat64m1_t op1, double op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_ta(vbool32_t mask, vfloat64m2_t op1, double op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_ta(vbool16_t mask, vfloat64m4_t op1, double op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_ta(vbool8_t mask, vfloat64m8_t op1, double op2, size_t vl) {
  return vfmerge_ta(mask, op1, op2, vl);
}

