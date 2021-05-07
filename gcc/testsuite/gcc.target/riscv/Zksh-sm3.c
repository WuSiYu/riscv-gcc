/* { dg-do compile } */
/* { dg-options "-march=rv64i_zksh -mabi=lp64 -O2" } */
#include <rvkintrin.h>
long sm3p0(long rs1)
{
    return _rv_sm3p0(rs1);
}

long sm3p1(long rs1)
{
    return _rv_sm3p1(rs1);
}


/* { dg-final { scan-assembler-times "sm3p0	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sm3p1	%0, %1" 1 } } */