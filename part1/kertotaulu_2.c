#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int row, col;
    int rowMin, rowMax;
    int colMin, colMax;
    int maxResult;
    int spaces = 1;

    if (argc != 5) {
        return 0;
    }

    colMin = atoi(argv[1]);
    colMax = atoi(argv[2]);
    rowMin = atoi(argv[3]);
    rowMax = atoi(argv[4]);
    maxResult = colMax * rowMax;

    while (maxResult != 0){
        maxResult /= 10;
        spaces++;
    }

    printf("%*c", spaces, ' ');
    for (col = colMin; col <= colMax; col++) {
        printf("%*i", spaces, col);    
    }
    printf("\n");    

    for (row = rowMin; row <= rowMax; row++) {
        printf("%*i", spaces, row);
        for (col = colMin; col <= colMax; col++) {

            printf("%*i", spaces, row*col);
        }
        printf("\n");
    }

    return 0;
}