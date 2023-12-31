#include <stdio.h>

int main() {
    int arr[10];  // 宣告一個大小為10的整數數組，用於存儲使用者輸入的整數
    int i;

    // 提示用戶輸入十個整數
    printf("\n\nRead and Print elements of an array:\n");
    printf("-----------------------------------------\n");
    printf("Input 10 elements in the array :\n");

    // 使用迴圈接受用戶輸入，並將整數存入數組
    for (i = 0; i < 10; i++) {
        printf("element - %d : ", i);

        // 檢查 scanf 的返回值，確保成功讀取一個整數
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Error: Invalid input for element %d.\n", i);
            return 1;  // 如果輸入無效，返回錯誤碼
        }
    }

    // 顯示數組中的所有元素
    printf("\nElements in array are: ");
    for (i = 0; i < 10; i++) {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    return 0;
}