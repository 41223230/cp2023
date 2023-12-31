/* =========================
 #define 的範例 2.
========================= */
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

/* ====================
如果傳入值大於 10, 則傳回 TRUE
==================== */
BOOL is_greater_than_10(int i)
{
    if (i > 10)
        return TRUE;
    else
        return FALSE;
}

/* ====================
 main function.
==================== */
int main()
{
    int i;
    BOOL result;

    printf("Input a number: ");

    // 檢查 scanf 的返回值
    if (scanf("%d", &i) != 1) {
        printf("Error reading input.\n");
        return 1;  // 返回非零值表示錯誤
    }

    result = is_greater_than_10(i);

    if (result == TRUE)
        printf("Greater than 10!\n"); /* 大於 10 */
    else
        printf("Not greater than 10!\n"); /* 不大於 10 */

    return 0;
}