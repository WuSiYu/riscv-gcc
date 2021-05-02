/* { dg-do compile } */
/* { dg-options "-march=rv64i_zkr -mabi=lp64 -O2" } */

long pollentropy()
{
    return _rv_pollentropy();
}

long getnoise()
{
    return _rv_pollentropy();
}

/* { dg-final { scan-assembler-times "pollentropy %0" 1 } } */
/* { dg-final { scan-assembler-times "getnoise %0" 1 } } */