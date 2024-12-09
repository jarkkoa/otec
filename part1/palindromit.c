#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char** argv) {

    int i, j, k;
    char* word;
    int isPalindrome;

    for (i = 1; i < argc; i++)
    {
        isPalindrome = 1;
        word = argv[i];
        j = 0;
        k = strlen(word) - 1;

        while (j <= k)
        {
            if (tolower(word[j]) != tolower(word[k]))
            {
                isPalindrome = 0;
                break;
            }

            j++;
            k--;
        }

        printf("\"%s\": ", word);

        if (isPalindrome)
        {
            printf("on palindromi\n");
        }
        else
        {
            printf("ei ole palindromi\n");
        }
    }

    return 0;
}