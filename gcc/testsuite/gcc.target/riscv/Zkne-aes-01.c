/* { dg-do compile } */
/* { dg-options "-march=rv32i_zkne -mabi=lp32 -O2" } */

int aes32esi(int rs1, int rs2, unsigned char bs)
{
    return _rv32_aes32esi(rs1, rs2, bs);
}

int aes32esmi(int rs1, int rs2, unsigned char bs)
{
    return _rv32_aes32esi(rs1, rs2, bs);
}

/* { dg-final { scan-assembler-times "aes32esi	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes32esmi	%0, %1, %2" 1 } } */