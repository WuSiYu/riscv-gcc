/* { dg-do compile } */
/* { dg-options "-march=rv64i_zknh -mabi=lp64 -O2" } */
#include <rvkintrin.h>
long aes64es(long rs1, long rs2)
{
    return _rv64_aes64es(rs1, rs2);
}

long aes64esm(long rs1, long rs2)
{
    return _rv64_aes64esm(rs1, rs2);
}

long aes64ks1i(long rs1, int rcon)
{
    return _rv64_aes64ks1i(rs1, rcon);
}

long aes64ks2(long rs1, long rs2)
{
    return _rv64_aes64ks2(rs1, rs2);
}
/* { dg-final { scan-assembler-times "aes64es	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes64esm	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks1i	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes64ks2	%0, %1, %2" 1 } } */