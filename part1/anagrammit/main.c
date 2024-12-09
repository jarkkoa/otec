#include <stdio.h>
#include "anagrammit.h"

int main(int argc, char** argv)
{
    char* mj1;
    char* mj2;
    int anagrams;

    if (argc != 3)
    {
        return 0;
    }

    mj1 = argv[1];
    mj2 = argv[2];

    anagrams = anagrammeja(mj1, mj2);

    if (anagrams)
    {
        printf("Joo\n");
    }
    else printf("Ei\n");
    
    return 0;
}