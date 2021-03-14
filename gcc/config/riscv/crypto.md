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
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsi\t%0,%1,%2")

(define_insn "riscv_aes32dsmi"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsmi\t%0,%1,%2")

(define_insn "riscv_aes32esi"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esi\t%0,%1,%2")

(define_insn "riscv_aes32esmi"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esmi\t%0,%1,%2")


;; AES64

(define_insn "riscv_aes64ds"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64ds\t%0,%1,%2")

(define_insn "riscv_aes64dsm"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64dsm\t%0,%1,%2")

(define_insn "riscv_aes64es"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64es\t%0,%1,%2")

(define_insn "riscv_aes64esm"
  [(set (match_operand 0 "register_operand" "=r")
    (unspec 
      [(match_operand 1 "register_operand" "r")
	      (match_operand 2 "immediate_operand" "")]
        UNSPEC_CRYPTO))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64esm\t%0,%1,%2")
