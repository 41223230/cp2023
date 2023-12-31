#include <stdio.h>
#include <limits.h>

double powxn(double x, int n) {
    double k;
    if (n == 0) return 1;
    k = powxn(x * x, n / 2);
    if (n % 2) k = k * x;
    return k;
}

int main(void)
{
    double x = 7.0;
    int n = 2;
    printf("\nx = %f, y = %d  ", x, n);
    printf("\nResult:(x^n) : %f ",powxn(x, n));
    x = 6.2;
    n = 3;
    printf("\n\nx = %f, y = %d  ", x, n);
    printf("\nResult:(x^n) : %f ",powxn(x, n));
    return 0;
}