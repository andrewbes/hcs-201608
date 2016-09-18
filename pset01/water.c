#include <stdio.h>
//#include <cs50.h>
int main(void)
{
    int shower = 0;
    int bottels = 0;

    // data input unit
        printf("Enter how much time you need for showering (in minuts):");
        scanf("%i", &shower);

    // calculate the number of bottels of water
        bottels = shower * 12;

    // displays the number of bottels of water
    printf("For showering you need %i bottels of water.\n", bottels);
}
