#include <stdio.h>

// inline function to check if a given integer is even
inline int is_even(int n) {
    return n % 2 == 0;
}

int main() {
    int num;

    // 檢查 scanf 的返回值，確保成功讀取一個整數
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (is_even(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
