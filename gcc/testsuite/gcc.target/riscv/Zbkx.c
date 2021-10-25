/* { dg-do compile } */
/* { dg-options "-march=rv64i_zbkx -mabi=lp64 -O2" } */

long foo1(long rs1, long rs2)
{
    return __builtin_riscv_xperm8(rs1, rs2);
}

long foo2(long rs1, long rs2)
{
    return __builtin_riscv_xperm4(rs1, rs2);
}



/* { dg-final { scan-assembler-times "xperm8" 1 } } */
/* { dg-final { scan-assembler-times "xperm4" 1 } } */