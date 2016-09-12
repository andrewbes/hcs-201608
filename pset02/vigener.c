#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[])
{
    string orig_phrase = "";
    int lenmk = 0;
    char* mk;
    if (argc != 2)
    {
        printf("Enter the wrong encryption key");
        return 1;
    }
    else
    {
        mk = (argv[1]);
        lenmk = strlen(mk);
        for (int i = 0; i<lenmk; i++)
        {
            if ((mk[i] > 64) && (mk[i] <= 91))
            {
                mk[i] += -65;
            }
            if ((mk[i] > 96) && (mk[i] <= 123))
            {
                mk[i] += -97;
            }
        }
        for (int i = 0; i<lenmk; i++)
        {
            printf(" %i ", (mk[i]));
        }
    }
            
        int len = 0;
    // data input unit
        while (len == 0)
    // can not enter blank stringt
        {
    // Enter original phrase");    
            orig_phrase = GetString();
            len = strlen(orig_phrase);
        }
        int j=0;
        for ( int i = 0; i < len; i++)
        {
            int k = mk[j%lenmk];;
            char ch = orig_phrase[i];
            if ((ch > 96) && (ch <= 123))
                if (ch + k < 123)
                {
                    printf("%c", (ch + k));
                    j++;
                }
                else
                {
                    printf("%c", ((ch - 96 + k) % 26) + 96);
                    j++;
                }
            else  
            if ((ch > 64) && (ch <= 91))
                if (ch + k < 91)
                {
                    printf("%c", (ch + k));
                    j++;
                }
                else
                {
                    printf("%c", ((ch - 64 + k) % 26) + 64);
                    j++;
                }
            else
            {
                printf("%c", ch);
            }
        }
        printf("\n");
        return 0;
}
 
