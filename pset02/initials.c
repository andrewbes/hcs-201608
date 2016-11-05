#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// function converts uppercase lowercase
char upcase(char ch)
{
    if ((ch > 96) && (ch < 123))
        ch = ch -32;
    return ch;
}
int main(void)
{
    char* full_name = malloc(sizeof(char)*100);
    int len = 0;
    // data input unit
    while (len == 0)    // can not enter blank string
    {
        //printf("Enter You Full Name:");
        fgets(full_name, 100, stdin);
        len = strlen(full_name);
        full_name[len] = 0;
        //printf ("\n %d", len);
    }
    // processing the first symbol of string
    if (full_name[0] != ' ')
        printf("%c", upcase(full_name[0]));
    // processing other symbols of string
    for (int i = 1; i < len; i++)
    //printf ("%c", full_name[i]);   
       if ((full_name[i - 1] == ' ') && (full_name[i] != ' '))
       printf("%c", upcase(full_name[i]));
    printf("\n");
    free(full_name);
}
