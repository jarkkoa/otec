#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    unsigned char a;
    unsigned char b;

    /* Prevent atoi segfaults */
    if (argc == 1)
    {
        return 0;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    while (a <= b) {
        printf("%d: %c\n", a, a);
        a++;
    }

    return 0;
}