#include <string.h>
#include <stdio.h>
#include "caesar.h"

void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[])
{
    int i, j;

    for (i = 0; i < strlen(mj); i++)
    {
        for (j = 0; j < strlen(aakkosto); j++)
        {
            if (mj[i] == aakkosto[j])
            {
                mj[i] = korvaavat[j];
                break;
            }
        }
    }
}