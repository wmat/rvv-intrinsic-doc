// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vloxei64_v_f16mf4(const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f16mf4(base, bindex, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2(const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f16mf2(base, bindex, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1(const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f16m1(base, bindex, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2(const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f16m2(base, bindex, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2(const float *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f32mf2(base, bindex, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1(const float *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f32m1(base, bindex, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2(const float *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f32m2(base, bindex, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4(const float *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f32m4(base, bindex, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1(const double *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f64m1(base, bindex, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2(const double *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f64m2(base, bindex, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4(const double *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f64m4(base, bindex, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8(const double *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f64m8(base, bindex, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8(const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i8mf8(base, bindex, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4(const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i8mf4(base, bindex, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2(const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i8mf2(base, bindex, vl);
}

vint8m1_t test_vloxei64_v_i8m1(const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i8m1(base, bindex, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4(const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i16mf4(base, bindex, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2(const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i16mf2(base, bindex, vl);
}

vint16m1_t test_vloxei64_v_i16m1(const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i16m1(base, bindex, vl);
}

vint16m2_t test_vloxei64_v_i16m2(const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i16m2(base, bindex, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2(const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i32mf2(base, bindex, vl);
}

vint32m1_t test_vloxei64_v_i32m1(const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i32m1(base, bindex, vl);
}

vint32m2_t test_vloxei64_v_i32m2(const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i32m2(base, bindex, vl);
}

vint32m4_t test_vloxei64_v_i32m4(const int32_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i32m4(base, bindex, vl);
}

vint64m1_t test_vloxei64_v_i64m1(const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i64m1(base, bindex, vl);
}

vint64m2_t test_vloxei64_v_i64m2(const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i64m2(base, bindex, vl);
}

vint64m4_t test_vloxei64_v_i64m4(const int64_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i64m4(base, bindex, vl);
}

vint64m8_t test_vloxei64_v_i64m8(const int64_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i64m8(base, bindex, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8(const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u8mf8(base, bindex, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4(const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u8mf4(base, bindex, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2(const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u8mf2(base, bindex, vl);
}

vuint8m1_t test_vloxei64_v_u8m1(const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u8m1(base, bindex, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4(const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u16mf4(base, bindex, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2(const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u16mf2(base, bindex, vl);
}

vuint16m1_t test_vloxei64_v_u16m1(const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u16m1(base, bindex, vl);
}

vuint16m2_t test_vloxei64_v_u16m2(const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u16m2(base, bindex, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2(const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u32mf2(base, bindex, vl);
}

vuint32m1_t test_vloxei64_v_u32m1(const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u32m1(base, bindex, vl);
}

vuint32m2_t test_vloxei64_v_u32m2(const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u32m2(base, bindex, vl);
}

vuint32m4_t test_vloxei64_v_u32m4(const uint32_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u32m4(base, bindex, vl);
}

vuint64m1_t test_vloxei64_v_u64m1(const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u64m1(base, bindex, vl);
}

vuint64m2_t test_vloxei64_v_u64m2(const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u64m2(base, bindex, vl);
}

vuint64m4_t test_vloxei64_v_u64m4(const uint64_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u64m4(base, bindex, vl);
}

vuint64m8_t test_vloxei64_v_u64m8(const uint64_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u64m8(base, bindex, vl);
}

vfloat16mf4_t test_vloxei64_v_f16mf4_m(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f16mf4_m(mask, maskedoff, base, bindex, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2_m(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f16mf2_m(mask, maskedoff, base, bindex, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f16m1_m(mask, maskedoff, base, bindex, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f16m2_m(mask, maskedoff, base, bindex, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f32mf2_m(mask, maskedoff, base, bindex, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f32m1_m(mask, maskedoff, base, bindex, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f32m2_m(mask, maskedoff, base, bindex, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f32m4_m(mask, maskedoff, base, bindex, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_f64m1_m(mask, maskedoff, base, bindex, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_f64m2_m(mask, maskedoff, base, bindex, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_f64m4_m(mask, maskedoff, base, bindex, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_f64m8_m(mask, maskedoff, base, bindex, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8_m(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i8mf8_m(mask, maskedoff, base, bindex, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4_m(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i8mf4_m(mask, maskedoff, base, bindex, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2_m(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i8mf2_m(mask, maskedoff, base, bindex, vl);
}

vint8m1_t test_vloxei64_v_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i8m1_m(mask, maskedoff, base, bindex, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4_m(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i16mf4_m(mask, maskedoff, base, bindex, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2_m(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i16mf2_m(mask, maskedoff, base, bindex, vl);
}

vint16m1_t test_vloxei64_v_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i16m1_m(mask, maskedoff, base, bindex, vl);
}

vint16m2_t test_vloxei64_v_i16m2_m(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i16m2_m(mask, maskedoff, base, bindex, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i32mf2_m(mask, maskedoff, base, bindex, vl);
}

vint32m1_t test_vloxei64_v_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i32m1_m(mask, maskedoff, base, bindex, vl);
}

vint32m2_t test_vloxei64_v_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i32m2_m(mask, maskedoff, base, bindex, vl);
}

vint32m4_t test_vloxei64_v_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i32m4_m(mask, maskedoff, base, bindex, vl);
}

vint64m1_t test_vloxei64_v_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_i64m1_m(mask, maskedoff, base, bindex, vl);
}

vint64m2_t test_vloxei64_v_i64m2_m(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_i64m2_m(mask, maskedoff, base, bindex, vl);
}

vint64m4_t test_vloxei64_v_i64m4_m(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_i64m4_m(mask, maskedoff, base, bindex, vl);
}

vint64m8_t test_vloxei64_v_i64m8_m(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_i64m8_m(mask, maskedoff, base, bindex, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u8mf8_m(mask, maskedoff, base, bindex, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u8mf4_m(mask, maskedoff, base, bindex, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u8mf2_m(mask, maskedoff, base, bindex, vl);
}

vuint8m1_t test_vloxei64_v_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u8m1_m(mask, maskedoff, base, bindex, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u16mf4_m(mask, maskedoff, base, bindex, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u16mf2_m(mask, maskedoff, base, bindex, vl);
}

vuint16m1_t test_vloxei64_v_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u16m1_m(mask, maskedoff, base, bindex, vl);
}

vuint16m2_t test_vloxei64_v_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u16m2_m(mask, maskedoff, base, bindex, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u32mf2_m(mask, maskedoff, base, bindex, vl);
}

vuint32m1_t test_vloxei64_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u32m1_m(mask, maskedoff, base, bindex, vl);
}

vuint32m2_t test_vloxei64_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u32m2_m(mask, maskedoff, base, bindex, vl);
}

vuint32m4_t test_vloxei64_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u32m4_m(mask, maskedoff, base, bindex, vl);
}

vuint64m1_t test_vloxei64_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vloxei64_v_u64m1_m(mask, maskedoff, base, bindex, vl);
}

vuint64m2_t test_vloxei64_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return vloxei64_v_u64m2_m(mask, maskedoff, base, bindex, vl);
}

vuint64m4_t test_vloxei64_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint64m4_t bindex, size_t vl) {
  return vloxei64_v_u64m4_m(mask, maskedoff, base, bindex, vl);
}

vuint64m8_t test_vloxei64_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint64m8_t bindex, size_t vl) {
  return vloxei64_v_u64m8_m(mask, maskedoff, base, bindex, vl);
}

