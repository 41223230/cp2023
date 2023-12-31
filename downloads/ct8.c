/* ====================
99 乘法.
==================== */
#include <stdio.h>

int main()
{
    int x, y;

    for (x = 1; x <= 9; x++)
    {
        for (y = 1; y <= 9; y++)
        {
            printf("%2d ", x * y);  /* 使用 %2d 以確保數字的對齊性 */
        }
        printf("\n");
    }

    return 0;
}