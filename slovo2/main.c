#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int wordcount(char* str);
char* word(int number);
int main()
{
    char str[100];
    char max_word[100];
    int max_length = 0;
    printf("Enter string\n");
    fgets(str, 100, stdin);
    strcpy(max_word, "");
    for(int i = 0, i < wordcount(str), i++);
    if strlen(word(i)) > max_length)
        {
            strcpy(max_word, word(i))
            max_length = strlen(word(i))
        }
    printf("Word with maximum lenth is %s", max_word)

    return 0;
}

int wordcount(char* str)
{
    //TO DO
    return 0;
    }

char* word(int number)
{
    //TO DO
    return "";

    }

