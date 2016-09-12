#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[])
{
    string orig_phrase = "";
    if (argc != 2)
    {
        printf("Enter the wrong encryption key");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
        int len = 0;
    // data input unit
        while (len == 0)
    // can not enter blank string
        {
    // Enter original phrase");    
            orig_phrase = GetString();
            len = strlen(orig_phrase);
        }
        for (int i = 0; i < len; i++)
        {
            char ch = orig_phrase[i];
            if ((ch > 96) && (ch <= 123))
                if (ch + k < 123)
                {
                    printf("%c", (ch + k));
                }
                else
                {
                    printf("%c", ((ch - 96 + k) % 26) + 96);
                }
            else  
            if ((ch > 64) && (ch <= 91))
                if (ch + k < 91)
                {
                    printf("%c", (ch + k));
                }
                else
                {
                    printf("%c", ((ch - 64 + k) % 26) + 64);
                }
            else
            {
                printf("%c", ch);
            }
        }
        printf("\n");
        return 0;
    }
 }
