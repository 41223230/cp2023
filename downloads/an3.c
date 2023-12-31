#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    printf("\nThe calendar time expressed as a local Time is :");   
    printf("\nUTC:   %s", asctime(gmtime(&t)));
    printf("local: %s\n", asctime(localtime(&t)));

#ifdef __STDC_LIB_EXT1__
    struct tm buf;
    char str[26];

    asctime_s(str, sizeof str, gmtime_s(&t, &buf));
    printf("UTC:   %s", str);

    asctime_s(str, sizeof str, localtime_s(&t, &buf));
    printf("local: %s", str);
#endif

    return 0;
}