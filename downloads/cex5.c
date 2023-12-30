#include <stdio.h>

void main()
{
int a;

// 第一次输出
a = 3;
printf("%d\n", !a); // 逻辑非运算，a为真，所以输出0

// 第二次输出
a = 0;
printf("%d\n", !a); // 逻辑非运算，a为假，所以输出1
}
