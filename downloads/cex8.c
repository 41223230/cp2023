#include <stdio.h>
float circle( int r ); /* 宣告 circle 的 prototype */
void main()
{
float answer;
answer = circle(8);
printf( " 圓周長度是 %f", answer );
}
/* ====================
 circle 函數, 計算 circle 的圓周長
==================== */
float circle( int r )
{
float result;
result = 3.14159 * (double)1001 * r;
return ( result );
}
