#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int GetRows(void);
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
       row = GetRows();
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
int GetRows(void)
{
    char str [100];
    int len = 0;
        while (len <= 1)    // can not enter blank string
    {   
        printf("Enter hight:");
        fgets(str, 100, stdin);
        len = strlen(str);
        str[len-1] = 0;
        for (int i = 0; i < len-1; i++)
            if ((str[i] < 48) || (str[i] > 57))
                len = 0;
    } 
    return atoi(str);
}
