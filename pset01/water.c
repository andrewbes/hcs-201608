#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getminuts(void);
int main(void)
{   
    
    int shower = getminuts();
    // calculate the number of bottels of water
    int bottels = shower * 12;
    // displays the number of bottels of water
    printf("bottels: %i\n", bottels);
}

int getminuts(void)
{
    char str [100];
    int len = 0;
        while (len <= 1)    // can not enter blank string
    {   
        printf("minuts:");
        fgets(str, 100, stdin);
        len = strlen(str);
        str[len-1] = 0;
        for (int i = 0; i < len-1; i++)
            if ((str[i] < 48) || (str[i] > 57))
                len = 0;
    } 
    return atoi(str);
}
