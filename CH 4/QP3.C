#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,sum;
 clrscr();
 printf("=> Enter the x :- ");
 scanf("%d",&x);
 printf("=> Enter the y :- ");
 scanf("%d",&y);


 sum = (x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
 printf("=> sum is  %d",sum);
 getch();
}
