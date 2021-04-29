/* { dg-do compile } */
/* { dg-options "-march=rv64_zknd -mabi=lp64 -O2" } */

int aes64ds()
{
    return __builtin_riscv_aes64ds();
}

int aes64dsm()
{
    return __builtin_riscv_aes64dsm();
}

int aes64im()
{
    return __builtin_riscv_aes64im();
}
/* { dg-final { scan-assembler-times "aes64ds\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes64dsm\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes64im\t%0,%1,%2" 1 } } */