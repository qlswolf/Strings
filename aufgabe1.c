#include <stdio.h>

int main() {
    char anrede[] = "Herr";
    char vorname[] = "Alexander";
    char nachname[] = "Wolfsgruber";
    char name[64];

    snprintf(name, sizeof(name), "%s %s %s\n", anrede, vorname, nachname);

    printf("%s", name);

    return 0;
}