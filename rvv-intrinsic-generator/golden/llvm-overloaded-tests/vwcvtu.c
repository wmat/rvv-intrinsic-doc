// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4(vuint8mf8_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2(vuint8mf4_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1(vuint8mf2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2(vuint8m1_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4(vuint8m2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8(vuint8m4_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2(vuint16mf4_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1(vuint16mf2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2(vuint16m1_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4(vuint16m2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8(vuint16m4_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1(vuint32mf2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2(vuint32m1_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4(vuint32m2_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8(vuint32m4_t src, size_t vl) {
  return vwcvtu_x(src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vwcvtu_x(mask, maskedoff, src, vl);
}

