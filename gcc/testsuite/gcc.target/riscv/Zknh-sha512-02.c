/* { dg-do compile } */
/* { dg-options "-march=rv64_zknh -mabi=lp64 -O2" } */

int sha512sig0()
{
    return __builtin_riscv_sha512sig0();
}

int sha512sig1()
{
    return __builtin_riscv_sha512sig1();
}


int sha512sum0()
{
    return __builtin_riscv_sha512sum0();
}

int sha512sum1()
{
    return __builtin_riscv_sha512sum1();
}

/* { dg-final { scan-assembler-times "sha512sig0\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1\t%0,%1" 1 } } */