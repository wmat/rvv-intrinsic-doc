#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg3e32_v_f32mf2x3(float32_t *base, vfloat32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_f32m1x3(float32_t *base, vfloat32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_f32m2x3(float32_t *base, vfloat32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_i32mf2x3(int32_t *base, vint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_i32m1x3(int32_t *base, vint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_i32m2x3(int32_t *base, vint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_u32mf2x3(uint32_t *base, vuint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_u32m1x3(uint32_t *base, vuint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_u32m2x3(uint32_t *base, vuint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(base, v_tuple, vl);
}

void test_vsseg3e32_v_f32mf2x3_m(vbool64_t mask, float32_t *base, vfloat32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_f32m1x3_m(vbool32_t mask, float32_t *base, vfloat32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_f32m2x3_m(vbool16_t mask, float32_t *base, vfloat32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_i32mf2x3_m(vbool64_t mask, int32_t *base, vint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_i32m1x3_m(vbool32_t mask, int32_t *base, vint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_i32m2x3_m(vbool16_t mask, int32_t *base, vint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_u32mf2x3_m(vbool64_t mask, uint32_t *base, vuint32mf2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_u32m1x3_m(vbool32_t mask, uint32_t *base, vuint32m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

void test_vsseg3e32_v_u32m2x3_m(vbool16_t mask, uint32_t *base, vuint32m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e32(mask, base, v_tuple, vl);
}

