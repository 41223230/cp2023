#include <stdio.h>

int main()
{
    char ch;

    printf("输入一个字符：");

    // 检查 scanf 的返回值，确保成功读取一个字符
    if (scanf(" %c", &ch) != 1) {
        printf("读取字符失败\n");
        return 1; // 或者采取其他错误处理措施
    }

    if (ch == 'a') {
        printf("您按下了 'a'\n");
    }

    return 0;
}