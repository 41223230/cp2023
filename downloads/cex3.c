#include <stdio.h>

int main()
{
    int a = 64;
    int b = 0x40; // 以十六进制表示
    long c = 64L;

    // 打印变量的值
    printf("%d, %d, %ld", a, b, c);

    return 0;
}