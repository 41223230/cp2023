#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t epoch = 0;

    printf("\n自纪元开始以来的秒数：%ld\n", (long)epoch);
    printf("对应的日期和时间：%s\n", asctime(gmtime(&epoch)));

    return 0;
}