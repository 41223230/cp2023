#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;

    printf("\n\n Check whether a given number is an ugly number:\n");
    printf("----------------------------------------------------\n");

    // 检查 scanf 的返回值
    if (scanf("%d", &n) != 1) {
        printf("Input is not a valid integer.\n");
        return 1;  // 退出程序，表示出现错误
    }

    if (n <= 0) {
        printf("Input a correct number.\n");
    } else {
        while (n != 1) {
            if (n % 5 == 0) {
                n /= 5;
            } else if (n % 3 == 0) {
                n /= 3;
            } else if (n % 2 == 0) {
                n /= 2;
            } else {
                printf("It is not an ugly number.\n");
                x = 1;
                break;
            }
        }

        if (x == 0) {
            printf("It is an ugly number.\n");
        }
    }

    return 0;
}