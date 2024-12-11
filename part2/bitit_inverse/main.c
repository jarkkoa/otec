#include <stdio.h>
#include "bitit.h"

#define LUKU 2015

int main()
{
    signed char x;
    short y;
    int z;
    long w;

    x = LUKU;
    printf("%i\n",x);
    kaannaScharBitit(&x);
    printf("%i\n\n", x);

    y = LUKU;
    printf("%i\n",y);
    kaannaShortBitit(&y);
    printf("%i\n\n", y);

    z = LUKU;
    printf("%i\n",z);
    kaannaIntBitit(&z);
    printf("%i\n\n", z);

    w = LUKU;
    printf("%li\n",w);
    kaannaLongBitit(&w);
    printf("%li\n\n", w);

    return 0;
}