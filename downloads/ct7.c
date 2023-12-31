/* ====================
 do - while.
==================== */
#include <stdio.h>

int main()
{
    int i, j;
    i = 0;
    j = 10; /* 迴圈外先設定初值 */

    do
    {
        printf("i = %d, ", i);
        printf("j = %d\n", j);
        i++;
        j++;
    } while (i < 6); /* 檢查條件的地方 */

    return 0;
}