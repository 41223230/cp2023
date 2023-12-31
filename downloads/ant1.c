#include <stdio.h>

int main() {
    int x;    // 用於存儲總里程的變數，以公里為單位
    float y;  // 用於存儲總耗油量的變數，以升為單位

    // 提示用戶輸入總里程並存入 'x'
    printf("Input total distance in km: ");
    // 檢查 scanf 的返回值，確保成功讀取一個整數
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Error: Invalid input for total distance.\n");
        return 1;
    }

    // 提示用戶輸入總耗油量並存入 'y'
    printf("Input total fuel spent in liters: ");
    // 檢查 scanf 的返回值，確保成功讀取一個浮點數
    if (scanf("%f", &y) != 1) {
        fprintf(stderr, "Error: Invalid input for total fuel spent.\n");
        return 1;
    }

    // 計算並打印平均油耗
    printf("Average consumption (km/lt) %.3f ", x / y);
    printf("\n");

    return 0;
}