#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char input[64], beforecheck[64], aftercheck[64];
    int upcount, downcount, palindromepart, stringlen;
    char swapbuf;
    bool isPalindrome;

    printf("Gib ein Wort ein:\n");

    if (!fgets(input, 64, stdin))
    {
        printf("Warnung: Input fehlgeschlagen.");
        return 1;
    }

    input[strcspn(input, "\n")] = '\0';

    if (input[0] == '\0')
    {
        printf("Nichts eingegeben.\n");
        return 0;
    }

    upcount = 0;
    downcount = strlen(input) - 1;

    snprintf(beforecheck, sizeof(beforecheck), "%s", input);
    printf("%s", beforecheck);
    printf("\n");

    while (upcount < downcount)
    {
        swapbuf = input[downcount];
        input[downcount] = input[upcount];
        input[upcount] = swapbuf;

        upcount++;
        downcount--;
    }

    snprintf(aftercheck, sizeof(aftercheck), "%s", input);
    printf("%s", aftercheck);
    printf("\n");

    printf("%s", input);
    printf("\n");

    if (strncmp(beforecheck, aftercheck, stringlen) == 0)
    {
        isPalindrome = true;
        printf("Es ist ein Palindrom.\n");
    }
    else
    {
        isPalindrome = false;
        printf("Es ist kein Palindrom.\n");
    }

    return 0;
}