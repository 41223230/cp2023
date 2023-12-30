/* ====================
   字元範例 1
   ==================== */
#include <stdio.h>

int main()
{
    char x, y;

    x = 'a';
    y = (char)97;

    /* 輸出 x, y, x, 最後一個是以 ASCII 值顯示 y */
    printf("x = %c, y = %c, ASCII of y = %d", x, y, y);

    return 0;
}
