// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg7e64ff_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_f64m1_ta(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_ta(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_ta(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_ta(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_ta(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_ta(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_f64m1_tama(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_tama(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_tama(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, new_vl, vl);
}

void test_vlseg7e64ff_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, const double *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_f64m1_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_i64m1_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

void test_vlseg7e64ff_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg7e64ff_v_u64m1_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, new_vl, vl);
}

