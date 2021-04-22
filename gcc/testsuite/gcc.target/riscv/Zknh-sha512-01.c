/* { dg-do compile } */
/* { dg-options "-march=rv32_zknh -mabi=lp32 -O2" } */

int sha512sig0h()
{
    return __builtin_riscv_sha512sig0h();
}

int sha512sig0l()
{
    return __builtin_riscv_sha512sig0l();
}

int sha512sig1h()
{
    return __builtin_riscv_sha512sig1h();
}

int sha512sig1l()
{
    return __builtin_riscv_sha512sig1l();
}

int sha512sum0r()
{
    return __builtin_riscv_sha512sum0r();
}

int sha512sum1r()
{
    return __builtin_riscv_sha512sum1r();
}

/* { dg-final { scan-assembler-times "sha512sig0h\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig0l\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1h\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1l\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0r\t%0,%1,%2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1r\t%0,%1,%2" 1 } } */
