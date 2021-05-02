/* { dg-do compile } */
/* { dg-options "-march=rv64i_zksed -mabi=lp64 -O2" } */

long sm4ed(long rs1, long rs2, unsigned char bs)
{
    return _rv_sm4ed(rs1, rs2, bs);
}

long sm4ks(long rs1, long rs2, unsigned char bs)
{
    return _rv_sm4ks(rs1, rs2, bs);
}


/* { dg-final { scan-assembler-times "sm4ed	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "sm4ks	%0, %1, %2" 1 } } */