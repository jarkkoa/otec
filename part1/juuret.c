#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i;
    double num;
    int precision;

    if (argc == 1)
    {
        return 0;
    }

    precision = atoi(argv[1]);

    for (i = 2; i < argc; i++)
    {
        num = atof(argv[i]);
        printf("sqrt(%.*f) = %.*f\n", precision, num, precision, sqrt(num));
    }

    return 0;
}