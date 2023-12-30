#include <stdio.h>

/* ====================
计算长方形面积, 需传入长与宽.
==================== */
int rect(int x, int y)
{
    int result;
    result = x * y;
    return result; /* 返回 result */
}

/* ====================
主函数
==================== */
int main()
{
    int x = 8, y = 4;
    int a;
    a = rect(x, y);
    printf("8*4 的面积是 %d", a);
    return 0;
}