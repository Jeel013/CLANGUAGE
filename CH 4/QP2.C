#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,sub;
 clrscr();
 printf("Enter is x :");
 scanf("%d",&x);
 printf("Enter is y :");
 scanf("%d",&y);

 sub=  x*x - 2*x*y + y*y;
 printf("ans is= %d",sub);
 getch();
}