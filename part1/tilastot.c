#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    int i, j;
    float smallest;
    float largest;
    int isUnique;
    int printHeader = 1;
    int maxDupeCount = 0;
    int dupeCounter = 0;

    if (argc == 1) 
    {
        return 0;
    }

    if (argc == 2) 
    {
        printf("Pienin: %f\n", atof(argv[1]));
        printf("Suurin: %f\n", atof(argv[1]));
        printf("Ainutlaatuiset: %f\n", atof(argv[1]));
        printf("Useimmiten esiintyneet (1 kertaa): %f\n", atof(argv[1]));

        return 0;
    }

    else
    {
        smallest = atof(argv[1]);
        largest = atof(argv[1]);

        for (i = 1; i < argc; i++)
        {
            if (atof(argv[i]) <= smallest)
            {
                smallest = atof(argv[i]);
            }

            if (atof(argv[i]) >= largest)
            {
                largest = atof(argv[i]);
            }
        }
    }

    printf("Pienin: %f", smallest);
    printf("\nSuurin: %f", largest);

    for (i = 1; i < argc; i++)
    {
        isUnique = 1;

        for (j = 1; j < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) == 0 && i != j)
            {
                isUnique = 0;
            }
        }

        if (isUnique)
        {
            if (printHeader)
            {
                printf("\nAinutlaatuiset:");
                printHeader = 0;
            }

            printf(" %f", atof(argv[i]));
        }
    }

    printHeader = 1;

    for (i = 1; i < argc; i++)
    {
        dupeCounter = 0;

        for (j = i; j < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) == 0)
            {
                dupeCounter++;
            }
        }

        if (dupeCounter > maxDupeCount)
        {
            maxDupeCount = dupeCounter;
        }
    }

    for (i = 1; i < argc; i++)
    {
        dupeCounter = 0;

        for (j = i; j < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) == 0)
            {
                dupeCounter++;
            }
        }

        if (dupeCounter == maxDupeCount && dupeCounter > 1)
        {
            if (printHeader)
            {
                printf("\nUseimmiten esiintyneet (%i kertaa):", maxDupeCount);
                printHeader = 0;
            }

            printf(" %f", atof(argv[i]));
        }
    }

    printf("\n");

    return 0;
}