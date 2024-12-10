#include <limits.h>
#include <stdio.h>
#include "unsigned.h"

void ucharIntervalli(unsigned char sade, unsigned char askel)
{
    unsigned char num;
    unsigned char next;
    unsigned char newLow;
    int i;

    printf("unsigned char:");

    i = 0;
    do
    {
        num = -sade + i * askel;
        next = -sade + (i+1) * askel;
        printf(" %u", num);
        i++;
    } 
    while (num < next);

    i = 1;
    newLow = num;
    
    do
    {
        num = newLow + i * askel;
        next = newLow + (i+1) * askel;
        if (num > sade)
        {
            break;
        }
        printf(" %u", num);
        i++;
    } 
    while (next <= sade && num < next);

    printf("\n");
}


void ushortIntervalli(unsigned short sade, unsigned short askel)
{
    unsigned short num;
    unsigned short next;
    unsigned short newLow;
    int i;

    printf("unsigned short:");

    i = 0;
    do
    {
        num = -sade + i * askel;
        next = -sade + (i+1) * askel;
        printf(" %u", num);
        i++;
    } 
    while (num < next);

    i = 1;
    newLow = num;
    
    do
    {
        num = newLow + i * askel;
        next = newLow + (i+1) * askel;
        if (num > sade)
        {
            break;
        }
        printf(" %u", num);
        i++;
    } 
    while (next <= sade && num < next);

    printf("\n");
}


void uintIntervalli(unsigned int sade, unsigned int askel)
{
    unsigned int num;
    unsigned int next;
    unsigned int newLow;
    unsigned int i;

    printf("unsigned int:");

    i = 0;
    do
    {
        num = -sade + i * askel;
        next = -sade + (i+1) * askel;
        printf(" %u", num);
        i++;
    } 
    while (num < next);

    i = 1;
    newLow = num;
    
    do
    {
        num = newLow + i * askel;
        next = newLow + (i+1) * askel;
        if (num > sade)
        {
            break;
        }
        printf(" %u", num);
        i++;
    } 
    while (next <= sade && num < next);

    printf("\n");
}


void ulongIntervalli(unsigned long sade, unsigned long askel)
{
    unsigned long num;
    unsigned long next;
    unsigned long newLow;
    unsigned long i;

    printf("unsigned long:");

    i = 0;
    do
    {
        num = -sade + i * askel;
        next = -sade + (i+1) * askel;
        printf(" %lu", num);
        i++;
    } 
    while (num < next);

    i = 1;
    newLow = num;
    
    do
    {
        num = newLow + i * askel;
        next = newLow + (i+1) * askel;
        if (num > sade)
        {
            break;
        }
        printf(" %lu", num);
        i++;
    } 
    while (next <= sade && num < next);

    printf("\n");
}