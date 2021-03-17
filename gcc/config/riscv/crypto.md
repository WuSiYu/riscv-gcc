;; Machine description for K extension.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.


;; AES32

(define_insn "riscv_aes32dsi"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsi\t%0,%1,%2")

(define_insn "riscv_aes32dsmi"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsmi\t%0,%1,%2")

(define_insn "riscv_aes32esi"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esi\t%0,%1,%2")

(define_insn "riscv_aes32esmi"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esmi\t%0,%1,%2")


;; AES64

(define_insn "riscv_aes64ds"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64ds\t%0,%1,%2")

(define_insn "riscv_aes64dsm"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64dsm\t%0,%1,%2")

(define_insn "riscv_aes64es"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64es\t%0,%1,%2")

(define_insn "riscv_aes64esm"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64esm\t%0,%1,%2")

(define_insn "riscv_aes64im"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64im\t%0,%1")

(define_insn "riscv_aes64ks1i"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64ks1i\t%0,%1,%2")

(define_insn "riscv_aes64ks2"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:DI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64ks2\t%0,%1,%2")


;; SHA256

(define_insn "riscv_sha256sig0_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha256sig0\t%0,%1")

(define_insn "riscv_sha256sig1_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha256sig1\t%0,%1")

(define_insn "riscv_sha256sum0_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha256sum0\t%0,%1")

(define_insn "riscv_sha256sum1_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha256sum1\t%0,%1")


(define_insn "riscv_sha256sig0_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha256sig0\t%0,%1")

(define_insn "riscv_sha256sig1_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha256sig1\t%0,%1")

(define_insn "riscv_sha256sum0_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha256sum0\t%0,%1")

(define_insn "riscv_sha256sum1_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha256sum1\t%0,%1")


;; SHA512 (32)

(define_insn "riscv_sha512sig0h"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig0h\t%0,%1,%2")

(define_insn "riscv_sha512sig0l"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig0l\t%0,%1,%2")

(define_insn "riscv_sha512sig1h"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig1h\t%0,%1,%2")

(define_insn "riscv_sha512sig1l"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig1l\t%0,%1,%2")

(define_insn "riscv_sha512sum0r"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sum0r\t%0,%1,%2")

(define_insn "riscv_sha512sum1r"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sum1r\t%0,%1,%2")


;; SHA512 (64)

(define_insn "riscv_sha512sig0"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sig0\t%0,%1")

(define_insn "riscv_sha512sig1"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sig1\t%0,%1")

(define_insn "riscv_sha512sum0"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sum0\t%0,%1")

(define_insn "riscv_sha512sum1"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sum1\t%0,%1")


;; SM3/SM4

(define_insn "riscv_sm3p0_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSH && !TARGET_64BIT"
  "sm3p0\t%0,%1")

(define_insn "riscv_sm3p1_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSH && !TARGET_64BIT"
  "sm3p1\t%0,%1")

(define_insn "riscv_sm4ed_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSED && !TARGET_64BIT"
  "sm4ed\t%0,%1,%2")

(define_insn "riscv_sm4ks_32"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec
      [(match_operand:SI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSED && !TARGET_64BIT"
  "sm4ks\t%0,%1,%2")


(define_insn "riscv_sm3p0_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSH && TARGET_64BIT"
  "sm3p0\t%0,%1")

(define_insn "riscv_sm3p1_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSH && TARGET_64BIT"
  "sm3p1\t%0,%1")

(define_insn "riscv_sm4ed_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSED && TARGET_64BIT"
  "sm4ed\t%0,%1,%2")

(define_insn "riscv_sm4ks_64"
  [(set (match_operand:DI 0 "register_operand" "=r")
    (unspec
      [(match_operand:DI 1 "register_operand" "r")
        (match_operand:SI 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKSED && TARGET_64BIT"
  "sm4ks\t%0,%1,%2")


; ;; ZKR

; (define_insn "riscv_pollentropy_32"
;   [(set (match_operand:SI 0 "register_operand" "=r"))]
;   "TARGET_ZKR && !TARGET_64BIT"
;   "pollentropy\t%0")

; (define_insn "riscv_getnoise_32"
;   [(set (match_operand:SI 0 "register_operand" "=r"))]
;   "TARGET_ZKR && !TARGET_64BIT"
;   "getnoise\t%0")

; (define_insn "riscv_pollentropy_64"
;   [(set (match_operand:DI 0 "register_operand" "=r"))]
;   "TARGET_ZKR && TARGET_64BIT"
;   "pollentropy\t%0")

; (define_insn "riscv_getnoise_64"
;   [(set (match_operand:DI 0 "register_operand" "=r"))]
;   "TARGET_ZKR && TARGET_64BIT"
;   "getnoise\t%0")
