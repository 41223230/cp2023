#include <stdio.h>

int main() {
    float x, y, z, P; // 宣告變數，用於存儲三角形的邊長和周長

    // 提示用戶輸入三個邊長並存入 'x', 'y', 和 'z'
    printf("\nInput the first number: ");
    if (scanf("%f", &x) != 1) {
        fprintf(stderr, "Error: Invalid input for the first number.\n");
        return 1;
    }

    printf("\nInput the second number: ");
    if (scanf("%f", &y) != 1) {
        fprintf(stderr, "Error: Invalid input for the second number.\n");
        return 1;
    }

    printf("\nInput the third number: ");
    if (scanf("%f", &z) != 1) {
        fprintf(stderr, "Error: Invalid input for the third number.\n");
        return 1;
    }

    if (x < (y + z) && y < (x + z) && z < (y + x)) // 檢查是否可以構成三角形
    {
        P = x + y + z; // 計算周長
        printf("\nPerimeter  = %.1f\n", P); // 輸出周長
    } else {
        printf("Not possible to create a triangle..!"); // 如果無法構成三角形，輸出相應的信息
    }

    return 0;
}