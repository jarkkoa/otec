#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arg, a, b, c;
    int divisible = 0;
    int printNewline = 0;
    int first = 1;

    if (argc < 4)
    {
        return 0;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    while (a <= b) {

        divisible = 0;

        for (arg = 3; arg < argc; arg++) {

            c = atoi(argv[arg]);

            if (a % c == 0) {

                divisible = 1;
            }
        }

        if (!divisible) {

            printNewline = 1;

            if (first) {

                printf("%i", a);
                first = 0;
            }
            else printf(" %i", a); 
        }

        a++;
    }

    if (printNewline) {
        printf("\n");
    }

    return 0;
}