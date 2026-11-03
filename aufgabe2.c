#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[64];
    int stringlen, upcount = 0, downcount;
    char swapbuf;
    bool isEven;

    printf("Gib ein Wort ein:\n");

    if (!fgets(input, 64, stdin)) {
        printf("Warnung: Input fehlgeschlagen.");
        return 1;
    }

    stringlen = strlen(input);

    if (stringlen % 2 == 0) {
        isEven = true;
    } else {
        isEven = false;
    }
    switch (isEven) {
        case true:
            downcount = stringlen;
            do {
                swapbuf = input[upcount];
                input[upcount] = input[downcount];
                input[downcount] = swapbuf;

                upcount++;
                downcount--;
            } while (downcount != 0);
    }
}