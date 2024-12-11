#include <limits.h>
#include <stdio.h>
#include "bitit.h"

void kaannaScharBitit(signed char *x)
{
    int i;
    signed char copy = *x;

    for (i = 0; i < CHAR_BIT; i++)
    {        
        if ((copy >> i) & 1)
        {
            *x |= (1 << (CHAR_BIT - 1 - i));
        }
        else
        {
            *x &= ~(1 << (CHAR_BIT - 1 - i));
        }
    }
}


void kaannaShortBitit(short *x)
{
    int i;
    int bitCount = sizeof(short) * CHAR_BIT;
    short copy = *x;

    for (i = 0; i < bitCount; i++)
    {        
        if ((copy >> i) & 1)
        {
            *x |= (1 << (bitCount - 1 - i));
        }
        else
        {
            *x &= ~(1 << (bitCount - 1 - i));
        }
    }
}


void kaannaIntBitit(int *x)
{
    int i;
    int bitCount = sizeof(int) * CHAR_BIT;
    int copy = *x;

    for (i = 0; i < bitCount; i++)
    {        
        if ((copy >> i) & 1)
        {
            *x |= (1 << (bitCount - 1 - i));
        }
        else
        {
            *x &= ~(1 << (bitCount - 1 - i));
        }
    }
}


void kaannaLongBitit(long *x)
{
    int i;
    int bitCount = sizeof(long) * CHAR_BIT;
    long copy = *x;

    for (i = 0; i < bitCount; i++)
    {        
        if ((copy >> i) & 1)
        {
            *x |= (1L << (bitCount - 1 - i));
        }
        else
        {
            *x &= ~(1L << (bitCount - 1 - i));
        }
    }
}