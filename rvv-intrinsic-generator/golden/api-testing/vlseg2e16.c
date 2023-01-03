#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e16_v_f16mf4(vfloat16mf4_t *v0, vfloat16mf4_t *v1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16mf4(v0, v1, base, vl);
}

void test_vlseg2e16_v_f16mf2(vfloat16mf2_t *v0, vfloat16mf2_t *v1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16mf2(v0, v1, base, vl);
}

void test_vlseg2e16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m1(v0, v1, base, vl);
}

void test_vlseg2e16_v_f16m2(vfloat16m2_t *v0, vfloat16m2_t *v1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m2(v0, v1, base, vl);
}

void test_vlseg2e16_v_f16m4(vfloat16m4_t *v0, vfloat16m4_t *v1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m4(v0, v1, base, vl);
}

void test_vlseg2e16_v_i16mf4(vint16mf4_t *v0, vint16mf4_t *v1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16mf4(v0, v1, base, vl);
}

void test_vlseg2e16_v_i16mf2(vint16mf2_t *v0, vint16mf2_t *v1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16mf2(v0, v1, base, vl);
}

void test_vlseg2e16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m1(v0, v1, base, vl);
}

void test_vlseg2e16_v_i16m2(vint16m2_t *v0, vint16m2_t *v1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m2(v0, v1, base, vl);
}

void test_vlseg2e16_v_i16m4(vint16m4_t *v0, vint16m4_t *v1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m4(v0, v1, base, vl);
}

void test_vlseg2e16_v_u16mf4(vuint16mf4_t *v0, vuint16mf4_t *v1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16mf4(v0, v1, base, vl);
}

void test_vlseg2e16_v_u16mf2(vuint16mf2_t *v0, vuint16mf2_t *v1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16mf2(v0, v1, base, vl);
}

void test_vlseg2e16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m1(v0, v1, base, vl);
}

void test_vlseg2e16_v_u16m2(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m2(v0, v1, base, vl);
}

void test_vlseg2e16_v_u16m4(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m4(v0, v1, base, vl);
}

void test_vlseg2e16_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_f16m2_m(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_f16m4_m(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const float16_t *base, size_t vl) {
  return vlseg2e16_v_f16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_i16m2_m(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_i16m4_m(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, size_t vl) {
  return vlseg2e16_v_i16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_u16m2_m(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e16_v_u16m4_m(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, size_t vl) {
  return vlseg2e16_v_u16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

