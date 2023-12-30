/* ====================
 pointer to pointer – 1.
==================== */
#include <stdio.h>

int main() {
    char *Hello = "Hello";
    char *World = "World";
    char *GoodBye = "Good Bye";
    char *StrArray[3];
    char **Str;
    int i;

    Str = StrArray;
    StrArray[0] = Hello;
    StrArray[1] = World;
    StrArray[2] = GoodBye;

    // Print strings using array indexing
    for (i = 0; i < 3; i++) {
        printf("%s ", StrArray[i]);
    }

    // Print strings using pointer arithmetic
    Str = StrArray;  // Reset the pointer to the beginning
    for (i = 0; i < 3; i++) {
        printf("%s ", *Str);
        Str++;
    }

    return 0;
}
