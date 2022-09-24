#include<stdio.h>
#include<conio.h>
void  main()
{
 int x,y,sum;
 clrscr();
 printf("=> Enter the x :- ");
 scanf("%d",&x);
 printf("=> Enter the y :- ");
 scanf("%d",&y);

 sum= (x*x)+(2*x*y)+(y*y);
 printf("=> sum is = %d",sum);
 getch();
}
