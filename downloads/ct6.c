/* ====================
 array - 1.
==================== */
#include <stdio.h>

int main()
{
    int grade[5]; /* size = 5 的 array */
    int i;

    grade[0] = 75; /* 1st element */
    grade[1] = 80; /* 2nd element */
    grade[2] = 85; /* 3rd element */
    grade[3] = 70; /* 4th element */
    grade[4] = 90; /* 5th element */

    for (i = 0; i < 5; i++)
    {
        printf("Number %d = %d\n", i, grade[i]);
    }

    return 0;
}