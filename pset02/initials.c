#include <stdio.h>
#include <cs50.h>
#include <string.h>
char upcase(char);
int main(void)
{
    string full_name = " ";
    char initials = ' ';
    int len = 0;
    // data input unit
    while (len == 0)
    // can not enter blank string
    {
    // printf("Enter You Full Name:");    
        full_name = GetString();
        len = strlen(full_name);
    }
    // processing the first symbol of string
    if (full_name[0] != ' ') 
    {
        initials = upcase(full_name[0]);
        printf("%c", initials);
    }
    // processing other symbols of string
    for (int i = 1; i < len; i++)
    {
        if ((full_name[i - 1] == ' ') && (full_name[i] != ' '))
        {
            initials = upcase(full_name[i]);
            printf("%c", initials);
        }
    }
    
    printf("\n");
   
}
// function converts uppercase lowercase
char upcase(char ch)
{
    if ((ch > 96) && (ch < 123))
    {
        ch += -32;
    }
    return ch;
}