/* { dg-do compile } */
/* { dg-options "-march=rv64_zksh -mabi=lp64 -O2" } */

int sm3p0()
{
    return __builtin_riscv_sm3p0();
}

int sm3p1()
{
    return __builtin_riscv_sm3p1();
}


/* { dg-final { scan-assembler-times "sm3p0\t%0,%1" 1 } } */
/* { dg-final { scan-assembler-times "sm3p0\t%0,%1" 1 } } */