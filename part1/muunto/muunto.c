#include <ctype.h>
#include <string.h>
#include "muunto.h"

void muunna(char* mj)
{
    char temp;
    int i, j;

    for (i = 0; i < strlen(mj); i++)
    {
        if (islower(mj[i]))
        {
            mj[i] = toupper(mj[i]);
        }
        else mj[i] = tolower(mj[i]);
    }

    i = 0;
    j = strlen(mj) - 1;

    while (i < j)
    {
        temp = mj[i];
        mj[i] = mj[j];
        mj[j] = temp;

        i++;
        j--;
    }
}