#include <stdio.h>

int main() {
    double wi1, ci1, wi2, ci2, result; // 宣告變數，用於存儲物品的重量和數量

    // 提示用戶輸入物品1的重量
    printf("Weight - Item1: ");
    if (scanf("%lf", &wi1) != 1) {
        fprintf(stderr, "Error: Invalid input for weight of item1.\n");
        return 1;
    }

    // 提示用戶輸入物品1的數量
    printf("No. of item1: ");
    if (scanf("%lf", &ci1) != 1) {
        fprintf(stderr, "Error: Invalid input for count of item1.\n");
        return 1;
    }

    // 提示用戶輸入物品2的重量
    printf("Weight - Item2: ");
    if (scanf("%lf", &wi2) != 1) {
        fprintf(stderr, "Error: Invalid input for weight of item2.\n");
        return 1;
    }

    // 提示用戶輸入物品2的數量
    printf("No. of item2: ");
    if (scanf("%lf", &ci2) != 1) {
        fprintf(stderr, "Error: Invalid input for count of item2.\n");
        return 1;
    }

    // 計算平均值
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);

    // 輸出平均值
    printf("Average Value = %f\n", result);

    return 0;
}