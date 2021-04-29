/* { dg-do compile } */
/* { dg-options "-march=rv32_zkne -mabi=lp32 -O2" } */

int aes32esi()
{
    return __builtin_riscv_aes32esi();
}

int aes32esmi()
{
    return __builtin_riscv_aes32esmi();
}

/* { dg-final { scan-assembler-times "aes32esi\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes32esmi\t%0,%1,%2" 1 } } */