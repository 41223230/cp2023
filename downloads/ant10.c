#include <stdio.h>

int main() {
    // 声明变量
    float principal_amt, rate_of_interest, days, interest;
    const int yearInDays = 365; // 用于转换利率的常量

    // 提示用户输入贷款金额
    printf("输入贷款金额 (输入 0 退出): ");
    if (scanf("%f", &principal_amt) != 1) {
        fprintf(stderr, "Error: Invalid input for loan amount.\n");
        return 1;
    }

    // 主循环用于处理贷款
    while ((int)principal_amt != 0) 
    {
        // 提示用户输入利率
        printf("输入利率: ");
        if (scanf("%f", &rate_of_interest) != 1) {
            fprintf(stderr, "Error: Invalid input for interest rate.\n");
            return 1;
        }

        // 提示用户输入贷款期限（天）
        printf("输入贷款期限（天）: ");
        if (scanf("%f", &days) != 1) {
            fprintf(stderr, "Error: Invalid input for loan term.\n");
            return 1;
        }

        // 计算利息
        interest = (principal_amt * rate_of_interest * days) / yearInDays;

        // 显示利息金额
        printf("利息金额为 $%.2f\n", interest);

        // 提示用户输入下一个贷款金额
        printf("\n\n输入贷款金额 (输入 0 退出): ");
        if (scanf("%f", &principal_amt) != 1) {
            fprintf(stderr, "Error: Invalid input for loan amount.\n");
            return 1;
        }
    }

    return 0;
}