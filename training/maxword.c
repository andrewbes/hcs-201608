#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* inputdata(char* str, int size)
int wordcount(char* str, int size);
char* word(int number);
char* findmaxword(char* str, int size);
int main()
{
    char* targetstring[100];
    printf("Word with maximum lenth is %s", findmaxword(inputdata(targetstring, 100), 100), 100);
    
    
    
    return 0;
}

char* inputdata(char* str, int size)
{
    printf("Enter string\n");
    fgets(str, size, stdin);
}

int wordcount(char* str, int size)
{
    //TO DO
    return 0;
    }

char* word(int number)
{
    //TO DO
    return "";

    }
char* findmaxword(char* str, int size)    
   { strcpy(max_word, "DO IT");
    for(int i = 0; i < wordcount(str); i++)
    if (strlen(word(i)) > max_length)
        {
            strcpy(max_word, word(i));
            max_length = strlen(word(i));
        }
    }    
