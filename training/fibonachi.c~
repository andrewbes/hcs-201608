#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[30000];
    printf("Enter text\n");
    fgets(text, 30000, stdin);
    printf("%c", text[0]);
    if (strlen(text) == 3)
    printf("%c", text[1]);
    int fib1 = 1;
    int fib = 1;
    int tmp = 0;
    if (strlen(text)>3)
    do
    {
    tmp = fib;
    fib = fib + fib1;
    fib1 = tmp;
    printf("%c", text[fib-1]);
    }
    while (fib <= strlen(text));

    printf("\n");

    return 0;
}
