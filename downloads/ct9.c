/* ====================
 Program "continue"
 ==================== */
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if ((i == 1) || (i == 2) || (i == 3))
        {
            continue; /* 忽略以後的 program, 回到 for. */
        }
        printf("i = %d\n", i);
    }

    return 0;
}