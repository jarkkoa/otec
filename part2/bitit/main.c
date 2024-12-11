#include <stdio.h>
#include "bitit.h"

int main()
{

    int x = 2015;

    scharBitit(x);
    printf("\n\n");
    shortBitit(x);
    printf("\n\n");
    intBitit(x);
    printf("\n\n");
    longBitit(x);

    return 0;
}