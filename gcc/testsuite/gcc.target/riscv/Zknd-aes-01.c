/* { dg-do compile } */
/* { dg-options "-march=rv32_zknd -mabi=lp32 -O2" } */

int aes32dsi()
{
    return __builtin_riscv_aes32dsi();
}

int aes32dsmi()
{
    return __builtin_riscv_aes32dsmi();
}

/* { dg-final { scan-assembler-times "aes32dsi\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes32dsmi\t%0,%1,%2" 1 } } */