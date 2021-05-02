/* { dg-do compile } */
/* { dg-options "-march=rv64i_zknh -mabi=lp64 -O2" } */

long sha512sig0(long rs1)
{
    return _rv64_sha512sig0(rs1);
}

long sha512sig1(long rs1)
{
    return _rv64_sha512sig1(rs1);
}


long sha512sum0(long rs1)
{
    return _rv64_sha512sum0(rs1);
}

long sha512sum1(long rs1)
{
    return _rv64_sha512sum1(rs1);
}

/* { dg-final { scan-assembler-times "sha512sig0	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sig1	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum0	%0, %1" 1 } } */
/* { dg-final { scan-assembler-times "sha512sum1	%0, %1" 1 } } */