#include <stdio.h>

int main() {

    int i;
    int first = 1;
    
    for (i = 1; i <= 100; i++) {

        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
        {
            if (first)
            {
                printf("%i", i);
                first = 0;
            }
            else printf(" %i", i);            
        }
    }

    printf("\n");

    return 0;
}