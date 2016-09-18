#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
    char* orig_phrase = malloc(sizeof(char)*100);
    if (argc != 2)
    {
        printf("Enter the wrong encryption key");
        return 1;
    }
    else
    {
        int key = atoi(argv[1]);
        int len = 0;
    // data input unit
        while (len == 0)    // can not enter blank string
        {
            fgets(orig_phrase, 100, stdin); // Enter original phrase");
            len = strlen(orig_phrase);
        }
        for (int i = 0; i < len; i++)
           if ((orig_phrase[i] > 96) && (orig_phrase[i] <= 123))
                if (orig_phrase[i] + key < 123)
                    printf("%c", (orig_phrase[i] + key));
                else
                    printf("%c", ((orig_phrase[i] - 96 + key) % 26) + 96);
                
            else  
            if ((orig_phrase[i] > 64) && (orig_phrase[i] <= 91))
                if (orig_phrase[i] + key < 91)
                    printf("%c", (orig_phrase[i] + key));
                else
                    printf("%c", ((orig_phrase[i] - 64 + key) % 26) + 64);
            else
                printf("%c", orig_phrase[i]);
        printf("\n");
        free(orig_phrase);
        return 0;
    }
 }
