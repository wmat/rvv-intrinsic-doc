// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vneg_v_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_tu(maskedoff, op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_tu(maskedoff, op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_tu(maskedoff, op1, vl);
}

vint8m1_t test_vneg_v_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_tu(maskedoff, op1, vl);
}

vint8m2_t test_vneg_v_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_tu(maskedoff, op1, vl);
}

vint8m4_t test_vneg_v_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_tu(maskedoff, op1, vl);
}

vint8m8_t test_vneg_v_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_tu(maskedoff, op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_tu(maskedoff, op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_tu(maskedoff, op1, vl);
}

vint16m1_t test_vneg_v_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_tu(maskedoff, op1, vl);
}

vint16m2_t test_vneg_v_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_tu(maskedoff, op1, vl);
}

vint16m4_t test_vneg_v_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_tu(maskedoff, op1, vl);
}

vint16m8_t test_vneg_v_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_tu(maskedoff, op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_tu(maskedoff, op1, vl);
}

vint32m1_t test_vneg_v_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_tu(maskedoff, op1, vl);
}

vint32m2_t test_vneg_v_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_tu(maskedoff, op1, vl);
}

vint32m4_t test_vneg_v_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_tu(maskedoff, op1, vl);
}

vint32m8_t test_vneg_v_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_tu(maskedoff, op1, vl);
}

vint64m1_t test_vneg_v_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_tu(maskedoff, op1, vl);
}

vint64m2_t test_vneg_v_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_tu(maskedoff, op1, vl);
}

vint64m4_t test_vneg_v_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_tu(maskedoff, op1, vl);
}

vint64m8_t test_vneg_v_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_tu(maskedoff, op1, vl);
}

vint8mf8_t test_vneg_v_i8mf8_ta(vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_ta(op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_ta(vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_ta(op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_ta(vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_ta(op1, vl);
}

vint8m1_t test_vneg_v_i8m1_ta(vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_ta(op1, vl);
}

vint8m2_t test_vneg_v_i8m2_ta(vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_ta(op1, vl);
}

vint8m4_t test_vneg_v_i8m4_ta(vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_ta(op1, vl);
}

vint8m8_t test_vneg_v_i8m8_ta(vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_ta(op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_ta(vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_ta(op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_ta(vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_ta(op1, vl);
}

vint16m1_t test_vneg_v_i16m1_ta(vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_ta(op1, vl);
}

vint16m2_t test_vneg_v_i16m2_ta(vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_ta(op1, vl);
}

vint16m4_t test_vneg_v_i16m4_ta(vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_ta(op1, vl);
}

vint16m8_t test_vneg_v_i16m8_ta(vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_ta(op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_ta(vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_ta(op1, vl);
}

vint32m1_t test_vneg_v_i32m1_ta(vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_ta(op1, vl);
}

vint32m2_t test_vneg_v_i32m2_ta(vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_ta(op1, vl);
}

vint32m4_t test_vneg_v_i32m4_ta(vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_ta(op1, vl);
}

vint32m8_t test_vneg_v_i32m8_ta(vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_ta(op1, vl);
}

vint64m1_t test_vneg_v_i64m1_ta(vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_ta(op1, vl);
}

vint64m2_t test_vneg_v_i64m2_ta(vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_ta(op1, vl);
}

vint64m4_t test_vneg_v_i64m4_ta(vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_ta(op1, vl);
}

vint64m8_t test_vneg_v_i64m8_ta(vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_ta(op1, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_tuma(mask, maskedoff, op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_tuma(mask, maskedoff, op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_tuma(mask, maskedoff, op1, vl);
}

vint8m1_t test_vneg_v_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_tuma(mask, maskedoff, op1, vl);
}

vint8m2_t test_vneg_v_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_tuma(mask, maskedoff, op1, vl);
}

vint8m4_t test_vneg_v_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_tuma(mask, maskedoff, op1, vl);
}

vint8m8_t test_vneg_v_i8m8_tuma(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_tuma(mask, maskedoff, op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_tuma(mask, maskedoff, op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_tuma(mask, maskedoff, op1, vl);
}

vint16m1_t test_vneg_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_tuma(mask, maskedoff, op1, vl);
}

vint16m2_t test_vneg_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_tuma(mask, maskedoff, op1, vl);
}

vint16m4_t test_vneg_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_tuma(mask, maskedoff, op1, vl);
}

vint16m8_t test_vneg_v_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_tuma(mask, maskedoff, op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_tuma(mask, maskedoff, op1, vl);
}

vint32m1_t test_vneg_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_tuma(mask, maskedoff, op1, vl);
}

vint32m2_t test_vneg_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_tuma(mask, maskedoff, op1, vl);
}

vint32m4_t test_vneg_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_tuma(mask, maskedoff, op1, vl);
}

vint32m8_t test_vneg_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_tuma(mask, maskedoff, op1, vl);
}

vint64m1_t test_vneg_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_tuma(mask, maskedoff, op1, vl);
}

vint64m2_t test_vneg_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_tuma(mask, maskedoff, op1, vl);
}

vint64m4_t test_vneg_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_tuma(mask, maskedoff, op1, vl);
}

vint64m8_t test_vneg_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_tuma(mask, maskedoff, op1, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_tumu(mask, maskedoff, op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_tumu(mask, maskedoff, op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_tumu(mask, maskedoff, op1, vl);
}

vint8m1_t test_vneg_v_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_tumu(mask, maskedoff, op1, vl);
}

vint8m2_t test_vneg_v_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_tumu(mask, maskedoff, op1, vl);
}

vint8m4_t test_vneg_v_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_tumu(mask, maskedoff, op1, vl);
}

vint8m8_t test_vneg_v_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_tumu(mask, maskedoff, op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_tumu(mask, maskedoff, op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_tumu(mask, maskedoff, op1, vl);
}

vint16m1_t test_vneg_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_tumu(mask, maskedoff, op1, vl);
}

vint16m2_t test_vneg_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_tumu(mask, maskedoff, op1, vl);
}

vint16m4_t test_vneg_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_tumu(mask, maskedoff, op1, vl);
}

vint16m8_t test_vneg_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_tumu(mask, maskedoff, op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_tumu(mask, maskedoff, op1, vl);
}

vint32m1_t test_vneg_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_tumu(mask, maskedoff, op1, vl);
}

vint32m2_t test_vneg_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_tumu(mask, maskedoff, op1, vl);
}

vint32m4_t test_vneg_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_tumu(mask, maskedoff, op1, vl);
}

vint32m8_t test_vneg_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_tumu(mask, maskedoff, op1, vl);
}

vint64m1_t test_vneg_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_tumu(mask, maskedoff, op1, vl);
}

vint64m2_t test_vneg_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_tumu(mask, maskedoff, op1, vl);
}

vint64m4_t test_vneg_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_tumu(mask, maskedoff, op1, vl);
}

vint64m8_t test_vneg_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_tumu(mask, maskedoff, op1, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tama(vbool64_t mask, vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_tama(mask, op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tama(vbool32_t mask, vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_tama(mask, op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tama(vbool16_t mask, vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_tama(mask, op1, vl);
}

vint8m1_t test_vneg_v_i8m1_tama(vbool8_t mask, vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_tama(mask, op1, vl);
}

vint8m2_t test_vneg_v_i8m2_tama(vbool4_t mask, vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_tama(mask, op1, vl);
}

vint8m4_t test_vneg_v_i8m4_tama(vbool2_t mask, vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_tama(mask, op1, vl);
}

vint8m8_t test_vneg_v_i8m8_tama(vbool1_t mask, vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_tama(mask, op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tama(vbool64_t mask, vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_tama(mask, op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tama(vbool32_t mask, vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_tama(mask, op1, vl);
}

vint16m1_t test_vneg_v_i16m1_tama(vbool16_t mask, vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_tama(mask, op1, vl);
}

vint16m2_t test_vneg_v_i16m2_tama(vbool8_t mask, vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_tama(mask, op1, vl);
}

vint16m4_t test_vneg_v_i16m4_tama(vbool4_t mask, vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_tama(mask, op1, vl);
}

vint16m8_t test_vneg_v_i16m8_tama(vbool2_t mask, vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_tama(mask, op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tama(vbool64_t mask, vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_tama(mask, op1, vl);
}

vint32m1_t test_vneg_v_i32m1_tama(vbool32_t mask, vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_tama(mask, op1, vl);
}

vint32m2_t test_vneg_v_i32m2_tama(vbool16_t mask, vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_tama(mask, op1, vl);
}

vint32m4_t test_vneg_v_i32m4_tama(vbool8_t mask, vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_tama(mask, op1, vl);
}

vint32m8_t test_vneg_v_i32m8_tama(vbool4_t mask, vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_tama(mask, op1, vl);
}

vint64m1_t test_vneg_v_i64m1_tama(vbool64_t mask, vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_tama(mask, op1, vl);
}

vint64m2_t test_vneg_v_i64m2_tama(vbool32_t mask, vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_tama(mask, op1, vl);
}

vint64m4_t test_vneg_v_i64m4_tama(vbool16_t mask, vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_tama(mask, op1, vl);
}

vint64m8_t test_vneg_v_i64m8_tama(vbool8_t mask, vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_tama(mask, op1, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t vl) {
  return vneg_v_i8mf8_tamu(mask, maskedoff, op1, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t vl) {
  return vneg_v_i8mf4_tamu(mask, maskedoff, op1, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t vl) {
  return vneg_v_i8mf2_tamu(mask, maskedoff, op1, vl);
}

vint8m1_t test_vneg_v_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t vl) {
  return vneg_v_i8m1_tamu(mask, maskedoff, op1, vl);
}

vint8m2_t test_vneg_v_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t vl) {
  return vneg_v_i8m2_tamu(mask, maskedoff, op1, vl);
}

vint8m4_t test_vneg_v_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t vl) {
  return vneg_v_i8m4_tamu(mask, maskedoff, op1, vl);
}

vint8m8_t test_vneg_v_i8m8_tamu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t vl) {
  return vneg_v_i8m8_tamu(mask, maskedoff, op1, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t vl) {
  return vneg_v_i16mf4_tamu(mask, maskedoff, op1, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t vl) {
  return vneg_v_i16mf2_tamu(mask, maskedoff, op1, vl);
}

vint16m1_t test_vneg_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t vl) {
  return vneg_v_i16m1_tamu(mask, maskedoff, op1, vl);
}

vint16m2_t test_vneg_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t vl) {
  return vneg_v_i16m2_tamu(mask, maskedoff, op1, vl);
}

vint16m4_t test_vneg_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t vl) {
  return vneg_v_i16m4_tamu(mask, maskedoff, op1, vl);
}

vint16m8_t test_vneg_v_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t vl) {
  return vneg_v_i16m8_tamu(mask, maskedoff, op1, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t vl) {
  return vneg_v_i32mf2_tamu(mask, maskedoff, op1, vl);
}

vint32m1_t test_vneg_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t vl) {
  return vneg_v_i32m1_tamu(mask, maskedoff, op1, vl);
}

vint32m2_t test_vneg_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t vl) {
  return vneg_v_i32m2_tamu(mask, maskedoff, op1, vl);
}

vint32m4_t test_vneg_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t vl) {
  return vneg_v_i32m4_tamu(mask, maskedoff, op1, vl);
}

vint32m8_t test_vneg_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t vl) {
  return vneg_v_i32m8_tamu(mask, maskedoff, op1, vl);
}

vint64m1_t test_vneg_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t vl) {
  return vneg_v_i64m1_tamu(mask, maskedoff, op1, vl);
}

vint64m2_t test_vneg_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t vl) {
  return vneg_v_i64m2_tamu(mask, maskedoff, op1, vl);
}

vint64m4_t test_vneg_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t vl) {
  return vneg_v_i64m4_tamu(mask, maskedoff, op1, vl);
}

vint64m8_t test_vneg_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t vl) {
  return vneg_v_i64m8_tamu(mask, maskedoff, op1, vl);
}

