#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    // 第一组比较
    printf("a == b is %d\n", a == b);
    printf("a > b is %d\n", a > b);
    printf("a < b is %d\n", a < b);
    printf("a >= b is %d\n", a >= b);
    printf("a <= b is %d\n", a <= b);
    printf("a != b is %d\n", a != b);

    printf("\n");

    // 修改 b 的值
    b = 10;

    // 第二组比较
    printf("a == b is %d\n", a == b);
    printf("a > b is %d\n", a > b);
    printf("a < b is %d\n", a < b);
    printf("a >= b is %d\n", a >= b);
    printf("a <= b is %d\n", a <= b);
    printf("a != b is %d\n", a != b);

    return 0;
}