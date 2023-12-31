#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr, sum;  // 宣告整數變數 fno, sno, sum，以及整數指標 ptr, qtr

    printf("\n\n Pointer : Add two numbers :\n");
    printf("--------------------------------\n");

    printf(" Input the first number : ");
    // 檢查 scanf 的返回值，確保成功讀取一個整數
    if (scanf("%d", &fno) != 1) {
        fprintf(stderr, "Error: Invalid input for the first number.\n");
        return 1;
    }

    printf(" Input the second number : ");
    // 檢查 scanf 的返回值，確保成功讀取一個整數
    if (scanf("%d", &sno) != 1) {
        fprintf(stderr, "Error: Invalid input for the second number.\n");
        return 1;
    }

    ptr = &fno;  // 將 fno 的地址賦值給指標 ptr
    qtr = &sno;  // 將 sno 的地址賦值給指標 qtr

    sum = *ptr + *qtr;  // 解參考 ptr 和 qtr，取得值並計算它們的和

    printf(" The sum of the entered numbers is : %d\n\n", sum);  // 輸出輸入數字的總和

    return 0;
}