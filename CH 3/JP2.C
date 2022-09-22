#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the value of a:");
 scanf("%d",&a);
 printf("Enter the value of b:");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("After swepping a is = %d\n",a);
 printf("after swepping b is = %d",b);
 getch();
}