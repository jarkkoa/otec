#include <stdio.h>
#include "unsigned.h"

int main()
{
    ucharIntervalli(150, 50);
    ushortIntervalli(45000, 15000);
    uintIntervalli(3300000000, 1100000000);
    ulongIntervalli(9000000000000000000, 3000000000000000000);

    printf("\n");

    ucharIntervalli(40, 75); 
    ushortIntervalli(65535, 65535); 
    uintIntervalli(400000, 750000);
    ulongIntervalli(400000000, 1500000000);

    return 0;
}