/* ====================
 2d array.
==================== */
#include <stdio.h>

int main()
{
    int array[3][3];
    int x, y;

    array[0][0] = 1;
    array[0][1] = 2;
    array[0][2] = 3;
    array[1][0] = 4;
    array[1][1] = 5;
    array[1][2] = 6;
    array[2][0] = 7;
    array[2][1] = 8;
    array[2][2] = 9;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d,", array[x][y]);
        }
    }

    return 0;
}
