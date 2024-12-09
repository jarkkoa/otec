#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int i;
    int number;

    if (argc == 1)
    {
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        number = atoi(argv[i]);

        printf("%i: ", number);

        if (SCHAR_MIN <= number && number <= SCHAR_MAX)
        {
            printf("signed char, ");
        }
        if (0 <= number && number <= UCHAR_MAX)
        {
            printf("unsigned char, ");
        }
        if (SHRT_MIN <= number && number <= SHRT_MAX)
        {
            printf("short int, ");
        }
        if (0 <= number && number <= USHRT_MAX)
        {
            printf("unsigned short int, ");
        }        

        printf("int\n");
    }


    return 0;
}