#include <string.h>
#include "anagrammit.h"

int anagrammeja(char mj1[], char mj2[])
{
    int i, j;
    int counter1 = 0;
    int counter2 = 0;

    if (strlen(mj1) != strlen(mj2))
    {
        return 0;
    }

    for (i = 0; i < strlen(mj1); i++)
    {
        
        for (j = 0; j < strlen(mj1); j++)
        {
            if (mj1[i] == mj1[j])
            {
                counter1++;
            }
            if (mj1[i] == mj2[j])
            {
                counter2++;
            }
        }

        if (counter1 != counter2)
        {
            return 0;
        }
    }

    return 1;
}