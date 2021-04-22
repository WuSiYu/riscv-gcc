/* { dg-do compile } */
/* { dg-options "-march=rv64_zknh -mabi=lp64 -O2" } */

int aes64es()
{
    return __builtin_riscv_aes64es();
}

int aes64esm()
{
    return __builtin_riscv_aes64esm();
}

int aes64ks1i()
{
    return __builtin_riscv_aes64ks1i();
}

int aes64ks2()
{
    return __builtin_riscv_aes64ks1i();
}
/* { dg-final { scan-assembler-times "aes64es\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes64esm\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks1i\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks2\t%0,%1,%2" 1 } } */