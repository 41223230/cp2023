/* =========================
 function pointer 2
========================= */
#include <stdio.h>
/* ====================
say “Hello”.
==================== */
void Hello(void)
{
printf(“ Hello\n”);
}
/* ====================
say “World”.
==================== */
void World(void)
{
printf(“ World\n”);
}
/* ====================
main function.
==================== */
int main()
{
void (*func[3])(void); /* 宣告一個 function pointer array */
int i = 0 ;
func[0] = Hello; /* 建立 Jumping table */
func[1] = World;
while(1)
{
printf(“Input a number between 0 and 1 : ”);
scanf( “%d”,&i );
/* 若 I 大於等於 2 或是小於 0 則離開 loop */
if( (i >= 2)||(i < 0) )
break;
else
func[ i ]( ); /* 執行! */
}
return 0;
}