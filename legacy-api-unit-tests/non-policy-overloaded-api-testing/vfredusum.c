#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1(vfloat16m1_t dest, vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1(vfloat16m1_t dest, vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1(vfloat16m1_t dest, vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1(vfloat16m1_t dest, vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1(vfloat16m1_t dest, vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1(vfloat16m1_t dest, vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1(vfloat32m1_t dest, vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1(vfloat32m1_t dest, vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1(vfloat32m1_t dest, vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1(vfloat32m1_t dest, vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1(vfloat32m1_t dest, vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1(vfloat64m1_t dest, vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1(vfloat64m1_t dest, vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1(vfloat64m1_t dest, vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1(vfloat64m1_t dest, vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf4_f16m1_m(vbool64_t mask, vfloat16m1_t dest, vfloat16mf4_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16mf2_f16m1_m(vbool32_t mask, vfloat16m1_t dest, vfloat16mf2_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m1_f16m1_m(vbool16_t mask, vfloat16m1_t dest, vfloat16m1_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m2_f16m1_m(vbool8_t mask, vfloat16m1_t dest, vfloat16m2_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m4_f16m1_m(vbool4_t mask, vfloat16m1_t dest, vfloat16m4_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat16m1_t test_vfredusum_vs_f16m8_f16m1_m(vbool2_t mask, vfloat16m1_t dest, vfloat16m8_t vector, vfloat16m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32mf2_f32m1_m(vbool64_t mask, vfloat32m1_t dest, vfloat32mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m1_f32m1_m(vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m2_f32m1_m(vbool16_t mask, vfloat32m1_t dest, vfloat32m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m4_f32m1_m(vbool8_t mask, vfloat32m1_t dest, vfloat32m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat32m1_t test_vfredusum_vs_f32m8_f32m1_m(vbool4_t mask, vfloat32m1_t dest, vfloat32m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m1_f64m1_m(vbool64_t mask, vfloat64m1_t dest, vfloat64m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m2_f64m1_m(vbool32_t mask, vfloat64m1_t dest, vfloat64m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m4_f64m1_m(vbool16_t mask, vfloat64m1_t dest, vfloat64m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

vfloat64m1_t test_vfredusum_vs_f64m8_f64m1_m(vbool8_t mask, vfloat64m1_t dest, vfloat64m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return vfredusum(mask, dest, vector, scalar, vl);
}

