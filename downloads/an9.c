#include <stdio.h>

int main() {
    int days, years, weeks;

    days = 1329; // 總天數

    // 將天數轉換為年、週和天
    years = days / 365;  // 計算年數
    weeks = (days % 365) / 7;  // 計算週數
    days = days % 7;  // 計算剩餘的天數

    // 輸出結果
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}