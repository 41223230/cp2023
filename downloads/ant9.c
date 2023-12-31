#include <stdio.h>

int main() {
    int x; // Declare variable x

    // Print header for the table
    printf("x+1\tx+3\tx+5\tx+7\n\n");
    printf("---------------------------\n");

    // Loop to generate and print table values
    for (x = 1; x <= 15; x += 3)
        printf("%d\t%d\t%d\t%d\n", x, (x + 2), (x + 4), (x + 6));

    return 0; // Indicate successful program execution
}
