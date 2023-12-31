#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    // 设置时区为“Asia/Calcutta”
    setenv("TZ", "/usr/share/zoneinfo/Asia/Calcutta", 1);   

    // 获取并打印当前日期和时间
    struct tm tm = *localtime(&(time_t){time(NULL)});
    printf("\n今天是 :            %s", asctime(&tm));
    printf("(夏令时 %s)\n", tm.tm_isdst ? "生效中" : "未生效");

    // 将月份减去 24，表示 24 个月前的日期和时间
    tm.tm_mon -= 24;  

    // 重新计算时间
    mktime(&tm);       

    // 获取并打印 24 个月前的日期和时间
    printf("\n24个月前的日期是 : %s", asctime(&tm));
    printf("(夏令时 %s)\n\n", tm.tm_isdst ? "生效中" : "未生效");

    return 0;
}