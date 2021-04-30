/* { dg-do compile } */
/* { dg-options "-march=rv32i_zknd -mabi=lp32 -O2" } */

int aes32dsi(int rs1, int rs2, unsigned char bs)
{
    return _rv32_aes32dsi(rs1, rs2, bs);
}

int aes32dsmi(int rs1, int rs2, unsigned char bs)
{
    return _rv32_aes32dsmi(rs1, rs2, bs);
}


/* { dg-final { scan-assembler-times "aes32dsi	%0, %1, %2" 1 } } */
/* { dg-final { scan-assembler-times "aes32dsmi %0, %1, %2" 1 } } */