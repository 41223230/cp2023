/* ====================
switch - case 的範例 3.
==================== */
#include <stdio.h>

int main()
{
char c;

printf("Input a char: ");

// 檢查 scanf 的返回值
if (scanf("%c", &c) != 1)
{
printf("Error reading input.\n");
return 1; // 返回非零值表示錯誤
}

switch (c)
{
case 'a':
printf("You pressed a\n");
break;
case 'b':
printf("You pressed b\n");
break;
case 'c':
printf("You pressed c\n");
break;
default:
printf("Unrecognized input\n");
break;
}

return 0;
}