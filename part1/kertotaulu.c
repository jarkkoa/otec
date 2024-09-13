#include <stdio.h>
#define TABLE_SIZE 15
#define SPACES 4

int main() {

    int col;
    int row;

    /* Print the first line */
    printf("%*c", SPACES, 'x');
    for (col = 1; col <= TABLE_SIZE; col++) {
        printf("%*i", SPACES, col);    
    }
    printf("\n");    

    for (row = 1; row <= TABLE_SIZE; row++) {
        printf("%*i", SPACES, row);
        for (col = 1; col <= TABLE_SIZE; col++) {

            printf("%*i", SPACES, row*col);
        }
        printf("\n");
    }

    return 0;
}