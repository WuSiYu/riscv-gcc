/* { dg-do compile { target { riscv64*-*-* } } } */
/* { dg-options "-march=rv64i_zknh -mabi=lp64 -O2" } */
#include <rvkintrin.h>
long sha256sig0(long rs1)
{
    return _rv_sha256sig0(rs1);
}

long sha256sig1(long rs1)
{
    return _rv_sha256sig1(rs1);
}

long sha256sum0(long rs1)
{
    return _rv_sha256sum0(rs1);
}

long sha256sum1(long rs1)
{
    return _rv_sha256sum1(rs1);
}

/* { dg-final { scan-assembler-times "sha256sig0	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sig1	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sum0	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha256sum1	%0, %1" 1 } } */