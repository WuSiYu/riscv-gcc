/* { dg-do compile } */
/* { dg-options "-march=rv64_zksed -mabi=lp64 -O2" } */

int sm4ed()
{
    return __builtin_riscv_sm4ed();
}

int sm4ks()
{
    return __builtin_riscv_sm4ks();
}


/* { dg-final { scan-assembler-times "sm4ed\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sm4ks\t%0,%1,%2" 1 } } */