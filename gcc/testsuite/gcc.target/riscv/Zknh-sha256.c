/* { dg-do compile { target { riscv64*-*-* } } } */
/* { dg-options "-march=rv64_zknh -mabi=lp64 -O2" } */

int sha256sig0()
{
    return __builtin_riscv_sha256sig0();
}

int sha256sig1()
{
    return __builtin_riscv_sha256sig1();
}

int sha256sum0()
{
    return __builtin_riscv_sha256sum0();
}

int sha256sum1()
{
    return __builtin_riscv_sha256sum1();
}

/* { dg-final { scan-assembler-times "sha256sig0\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sig1\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sum0\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sum1\t%0,%1" 1 } } */