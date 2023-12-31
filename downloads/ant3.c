#include <stdio.h>

int main() {
    int j, numbers[5], total = 0; // 宣告數組用於存儲 5 個數字和變數用於總和

    // 提示用戶輸入五個數字並存入數組
    for (j = 0; j < 5; j++) {
        printf("\nInput the %s number: ", j == 0 ? "first" : (j == 1 ? "second" : (j == 2 ? "third" : (j == 3 ? "fourth" : "fifth"))));
        if (scanf("%d", &numbers[j]) != 1) {
            fprintf(stderr, "Error: Invalid input for the %s number.\n", j == 0 ? "first" : (j == 1 ? "second" : (j == 2 ? "third" : (j == 3 ? "fourth" : "fifth"))));
            return 1;
        }
    }

    for (j = 0; j < 5; j++) {
        if ((numbers[j] % 2) != 0) // 檢查數字是否為奇數
        {
            total += numbers[j]; // 將奇數添加到總和中
        }
    }

    printf("\nSum of all odd values: %d", total); // 輸出所有奇數的總和
    return 0;
}