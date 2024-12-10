#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    int i, power;
    int bitCount;
    int result = 0;

    if (argc != 2)
    {
        return 0;
    }

    bitCount = strlen(argv[1]);

    i = bitCount - 1;
    power = 0;
    while (i > 0)
    {       
        if (argv[1][i] == '1')
        {
            result += 1 << power;
        }

        i--;
        power++;
    }

    if (argv[1][0] == '1')
    {
        result -= 1 << power;
    }

    printf("%i\n", result);

    return 0;
}