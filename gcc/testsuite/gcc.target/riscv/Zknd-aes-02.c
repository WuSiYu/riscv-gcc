/* { dg-do compile } */
/* { dg-options "-march=rv64i_zknd -mabi=lp64 -O2" } */
#include <rvkintrin.h>
long aes64ds(long rs1, long rs2)
{
    return _rv64_aes64ds(rs1, rs2);
}

long aes64dsm(long rs1, long rs2)
{
    return _rv64_aes64dsm(rs1, rs2);
}

long aes64im(long rs1)
{
    return _rv64_aes64im(rs1);
}
/* { dg-final { scan-assembler-times "aes64ds   %0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes64dsm  %0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes64im   %0, %1, %2" 1 } } */