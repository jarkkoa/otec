#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv)
{
    int i, j;
    double fraction = 1.0;
    int exponent = -127;
    int power;
    int sign = 1;
    double result = 0;

    if (argc != 2 || strlen(argv[1]) != 32)
    {
        return 0;
    }

    i = 8;
    power = 0;
    while (i > 0)
    {       
        if (argv[1][i] == '1')
        {
            exponent += 1 << power;
        }

        i--;
        power++;
    }

    if (argv[1][0] == '1')
    {
        sign = -1;
    }


    j = 0;
    for (i = 9; i < 32; i++)
    {
        if (argv[1][i] == '1')
        {
            fraction += 1.0 / (double)(2 << j);
        }

        j++;
    }

    printf("%.15f\n", fraction);
    printf("%i\n", exponent);

    if (sign < 0)
    {
        printf("-\n");
    }
    else printf("+\n");

    result = sign * fraction * pow(2, exponent);

    printf("%.15f\n", result);

    return 0;
}