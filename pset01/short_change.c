#include <stdio.h>
//#include <cs50.h>
int main(void)
{
    int n=0;
    int i=0;
    int j=0;
    int row= -1;
    int space_count=0;
    int ns_count=0;
    // data input unit
    while ((row < 0) || (row > 23) )
    {
        printf("Enter hight:");
        //row = GetInt();
	scanf("%d", &row);
    }
    // the construction of the pyramid of n rows
    for (n = 1; n <= row; n++)
    {   
        // determine the number of spaces and symbols #
        space_count = row - n;
        ns_count = n + 1;
        // derive part of a string of spaces
        for (i = 0; i < space_count; i++)
        {
            printf(" ");
        }
        // derive part of a string of # char
        for (j = 0; j < ns_count; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
