#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
    int i, j;
    int characterCount;
    int rightColWidth;
    int leftColWidth = 0;
    int listLength = argc - 1;

    if (argc == 1)
    {
        return 0;
    }

    rightColWidth = strlen(argv[1]);

    while (listLength != 0)
    {
        leftColWidth++;
        listLength /= 10;
    }

    for (i = 1; i < argc; i++)
    {
        characterCount = strlen(argv[i]);
        if (characterCount > rightColWidth)
        {
            rightColWidth = characterCount;
        }
    }

    for (i = 0; i < (leftColWidth + rightColWidth + 7); i++)
    {
        printf("#");
    }
    printf("\n");

    for (i = 1; i < argc; i++)
    {
        printf("# %*i | %-*s #\n", leftColWidth, i, rightColWidth, argv[i]);

        if (i != argc - 1)
        {
            printf("#");
            for (j = 0; j < (leftColWidth + 2); j++)
            {
                printf("-");
            }
            printf("+");
            for (j = 0; j < (rightColWidth + 2); j++)
            {
                printf("-");
            }
            printf("#\n");            
        }
    }

    for (i = 0; i < (leftColWidth + rightColWidth + 7); i++)
    {
        printf("#");
    }
    printf("\n");

    return 0;
}