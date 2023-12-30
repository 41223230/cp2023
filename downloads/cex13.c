#include <stdio.h>

/* ====================
say “Hello”.
==================== */
void Hello(void)
{
    printf("Hello\n");
}

/* ====================
say “World”.
==================== */
void World(void)
{
    printf("World\n");
}

/* ====================
main function.
==================== */
int main()
{
    void (*func[3])(void); /* 声明一个函数指针数组 */
    int i = 0;

    func[0] = Hello; /* 建立 Jumping table */
    func[1] = World;

    while (1)
    {
        printf("Input a number between 0 and 1: ");

        // 检查 scanf 的返回值，确保成功读取一个整数
        if (scanf("%d", &i) != 1)
        {
            printf("无效输入，请输入一个整数。\n");
            break;
        }

        /* 如果 i 大于等于 2 或小于 0 则退出循环 */
        if (i >= 2 || i < 0)
            break;
        else
            func[i](); /* 执行函数 */
    }

    return 0;
}