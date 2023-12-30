#include <stdio.h>

int main()
{
float a = 0.5;
double b = 1.2;
int c = 3;
b = b + a + c;

/* 输出 a, b, c 到屏幕 */
printf("a = %3.1f, b = %3.1f, c = %d\n", a, b, c);

return 0;
}