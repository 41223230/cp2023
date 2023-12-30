#include <stdio.h>

void main()
{
    int i;

    // 提示用户输入一个整数
    printf("100：");

    // 读取用户输入的整数
    scanf("%d", &i);

    // 判断输入的整数，并输出相应的消息
    if (i < 100)
    {
        printf("i < 100\n");
    }
    else
    {
        if ((i >= 100) && (i < 200))
        {
            printf("i >= 100 且 i < 200\n");
        }
        else
        {
            printf("i >= 200\n");
        }
    }
}