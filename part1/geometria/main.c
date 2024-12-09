#include <stdio.h>
#include <stdlib.h>
#include "geometria.h"

int main(int argc, char** argv)
{
    int i;
    double radius;
    double area;
    double volume;

    printf("Piin arvo: %.19Lf\n", PII);

    if (argc == 1)
    {
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        radius = atof(argv[i]);
        area = ympyranAla(radius);
        volume = pallonTilavuus(radius);

        printf("Säteen %f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", radius, area, volume);
        printf("Säteen %f omaavan ympyrän piiri on %.10Lf\n", radius, 2 * PII * radius);
    }

    return 0;
}