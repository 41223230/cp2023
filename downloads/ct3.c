/* ====================
 & operator.
==================== */
#include <stdio.h>

int main()
{
    int *pointer_a, a;
    pointer_a = &a;
    a = 10;

    printf("%d, %d\n", a, *pointer_a);

    return 0;
}
