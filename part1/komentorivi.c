#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    int i;

    for (i = 1; i < argc; i++)
    {
        printf("%d: %s (pituus: %d)\n", i, argv[i], (int)strlen(argv[i]));
    }

    return 0;
}