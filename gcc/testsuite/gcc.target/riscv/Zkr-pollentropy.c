/* { dg-do compile } */
/* { dg-options "-march=rv64_zkr -mabi=lp64 -O2" } */

int pollentropy()
{
    return __builtin_riscv_pollentropy();
}

int getnoise()
{
    return __builtin_riscv_getnoise();
}

/* { dg-final { scan-assembler-times "pollentropy\t%0" 1 } } */
/* { dg-final { scan-assembler-times "getnoise\t%0" 1 } } */