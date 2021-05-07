/* { dg-do compile } */
/* { dg-options "-march=rv32i_zknh -mabi=lp32 -O2" } */
#include <rvkintrin.h>
int sha512sig0h(int rs1, int rs2)
{
    return _rv32_sha512sig0h(rs1, rs2);
}

int sha512sig0l(int rs1, int rs2)
{
    return _rv32_sha512sig0l(rs1, rs2);
}

int sha512sig1h(int rs1, int rs2)
{
    return _rv32_sha512sig1h(rs1, rs2);
}

int sha512sig1l(int rs1, int rs2)
{
    return _rv32_sha512sig1l(rs1, rs2);
}

int sha512sum0r(int rs1, int rs2)
{
    return _rv32_sha512sum0r(rs1, rs2);
}

int sha512sum1r(int rs1, int rs2)
{
    return _rv32_sha512sum1r(rs1, rs2);
}

/* { dg-final { scan-assembler-times "sha512sig0h	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig0l	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1h	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1l	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0r	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1r	%0, %1, %2" 1 } } */
