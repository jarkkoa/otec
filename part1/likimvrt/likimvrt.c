#include <math.h>
#include "likimvrt.h"

static double tolerance = 0.000001;

double lueToleranssi()
{
    return tolerance;
}


void asetaToleranssi(double uusiToleranssi)
{
    tolerance = uusiToleranssi;
}


int doubleVrt(double a, double b)
{
    return fabs(a-b) < tolerance;
}