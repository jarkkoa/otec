#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    double a, b, c;
    double discr;
    double result;

    if (argc != 4) 
    {
        return 0;
    }

    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    discr = b*b - 4*a*c;

    if (discr < 0)
    {
        printf("Ei ratkaisua\n");
        return 0;
    }

    else if (discr == 0)
    {
        result = -b / (2*a);
        printf("%.3f\n", result);
    }

    else
    {
        result = (-b - sqrt(discr)) / (2*a);
        printf("%.3f ", result);

        result = (-b + sqrt(discr)) / (2*a);
        printf("%.3f\n", result);
    }

    return 0;
}