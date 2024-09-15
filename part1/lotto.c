#include <stdio.h>
#include <stdlib.h>
#define LOTTO_LINE 7

void printNumbers(int nums[], int size) {
    
    int i;
    for (i = 0; i < size; i++) {
        printf(" %d", nums[i]);
    }
}


int main(int argc, char** argv) {

    int i, j;
    int rightGuessCount = 0;
    int numbers[LOTTO_LINE];
    int rightGuesses[LOTTO_LINE];
    int correctNumbers[LOTTO_LINE];

    if (argc != 15)
    {
        return 0;
    }

    for (i = 1; i <= LOTTO_LINE; i++) {
        correctNumbers[i-1] = atoi(argv[i]);
        numbers[i-1] = atoi(argv[i+LOTTO_LINE]);
    }

    for (i = 0; i < LOTTO_LINE; i++) {
        for (j = 0; j < LOTTO_LINE; j++) {
            if (correctNumbers[j] == numbers[i])
            {
                rightGuesses[rightGuessCount++] = numbers[i];
            }
        }
    }    

    printf("Voittorivi:");
    printNumbers(correctNumbers, LOTTO_LINE);
    printf("\nLottorivi:");
    printNumbers(numbers, LOTTO_LINE);

    if (rightGuessCount != 0) {
        printf("\n%d oikein:", rightGuessCount);
        printNumbers(rightGuesses, rightGuessCount);
    }
    else {
        printf("\nEi yhtään oikein!");
    }

    printf("\n");
    return 0;
}