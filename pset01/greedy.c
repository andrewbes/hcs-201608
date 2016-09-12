#include <stdio.h>
//#include <cs50.h>
int main(void)
{
    float change= -1;
    int coins=0;
    int fr_change=0;
    int int_change=0;
    int fr_change1=0;
    int fr_change2=0;
    // data input unit
    while (change < 0)
    {
        printf("Enter how much change is owed:");    
        //change = GetFloat();
	scanf("%f", &change);
    }
    // define the number of coins 25 in integer parts of change
    int_change = (int) change;
    coins = int_change * 4;
    // define the fractional parts of change
    fr_change = (int) ((change - int_change) * 100);
    fr_change1 = (int) ((change - int_change) * 1000);
    fr_change2 = (int) ((change - int_change) * 100) * 10;
    if ((fr_change1 - fr_change2) >= 5)
    {
        fr_change = fr_change + 1;
    }
    // calculating a number of coins 25 in fractional parts
    while (fr_change >= 25)
    {
        coins = coins + 1;
        fr_change = fr_change - 25;
    }
    // calculating a number of coins 10 in fractional parts
    while (fr_change >= 10)
    {
        coins = coins + 1;
        fr_change = fr_change - 10;
    }
    // calculating a number of coins 5 in fractional parts
    while (fr_change >= 5)
    {
        coins = coins + 1;
        fr_change = fr_change - 5;
    }
    // calculating a number of coins 1 in fractional parts
    while (fr_change >= 1)
    {
        coins = coins + 1;
        fr_change = fr_change - 1;
    }
    
    printf("%d\n", coins);
}
