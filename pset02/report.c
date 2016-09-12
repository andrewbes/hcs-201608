#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    int i;
    char c;
    for (i=-157; i<=-127; i++)
    {
        if (!(i%8))
        printf("\n");
        c=i;
        printf("%7d", c);
        printf("%5d", i%128+128);
        printf("%5d", i);
    }
    printf("\n\n");
    for (i=-20; i<=20; i++)
    {
        if (!(i%8))
        printf("\n");
        c=i;
        printf("%7d", c);
        printf("%5d", i);
        printf("%5d", i);
    }
    printf("\n\n");
    for (i=128; i<=158; i++)
    {
        if (!(i%8))
        printf("\n");
        c=i;
        printf("%7d", c);
        printf("%5d", i%128-128);
        printf("%5d", i);
    }
    for (i=3000; i<=3020; i++)
    {
        if (!(i%8))
        printf("\n");
        c=i;
        printf("%7d", c);
        printf("%5d", i%128-128);
        printf("%5d", i);
    }
    
    
 }
