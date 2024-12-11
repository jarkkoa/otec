#include <limits.h>
#include <stdio.h>
#include "bitit.h"

void scharBitit(signed char x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    char bits[CHAR_BIT + 1];
    signed char bit = 1;

    bits[CHAR_BIT] = '\0';

    printf("%i\n", x);

    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        if (x & bit)
        {
            bits[i] = '1';
            oneCount++;
        }
        else 
        {
            bits[i] = '0';
            zeroCount++;
        }
        bit = bit << 1;
    }

    printf("%s\n", bits);
    printf("%i\n", zeroCount);
    printf("%i\n", oneCount);
}


void shortBitit(short int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    int bitCount = sizeof(short int)*CHAR_BIT;
    char bits[sizeof(short int)*CHAR_BIT + 1];
    short int bit = 1;

    bits[bitCount] = '\0';

    printf("%i\n", x);

    for (i = bitCount - 1; i >= 0; i--)
    {
        if (x & bit)
        {
            bits[i] = '1';
            oneCount++;
        }
        else 
        {
            bits[i] = '0';
            zeroCount++;
        }
        bit = bit << 1;
    }

    printf("%s\n", bits);
    printf("%i\n", zeroCount);
    printf("%i\n", oneCount);
}


void intBitit(int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    int bitCount = sizeof(int)*CHAR_BIT;
    char bits[sizeof(int)*CHAR_BIT + 1];
    int bit = 1;

    bits[bitCount] = '\0';

    printf("%i\n", x);

    for (i = bitCount - 1; i >= 0; i--)
    {
        if (x & bit)
        {
            bits[i] = '1';
            oneCount++;
        }
        else 
        {
            bits[i] = '0';
            zeroCount++;
        }
        bit = bit << 1;
    }

    printf("%s\n", bits);
    printf("%i\n", zeroCount);
    printf("%i\n", oneCount);
}


void longBitit(long int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    int bitCount = sizeof(long int)*CHAR_BIT;
    char bits[sizeof(long int)*CHAR_BIT + 1];
    long int bit = 1;

    bits[bitCount] = '\0';

    printf("%li\n", x);

    for (i = bitCount - 1; i >= 0; i--)
    {
        if (x & bit)
        {
            bits[i] = '1';
            oneCount++;
        }
        else 
        {
            bits[i] = '0';
            zeroCount++;
        }
        bit = bit << 1;
    }

    printf("%s\n", bits);
    printf("%i\n", zeroCount);
    printf("%i\n", oneCount);
}