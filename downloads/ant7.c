#include <stdio.h>

int main() {
    int a, b;

    // Prompt user for input
    printf("Input two pairs values (integer values):\n");

    // Read two integer values from user and store them in 'a' and 'b'
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Error: Invalid input. Please enter two integer values.\n");
        return 1;  // Return an error code for invalid input
    }

    // Check if 'a' is not equal to 'b'
    if (a != b) {
        // Check if 'b' is greater than 'a'
        if (b > a) {
            printf("Ascending order\n");  // Print message for ascending order
        } else {
            printf("Descending order\n");  // Print message for descending order
        }
    }

    return 0;  // End of program
}