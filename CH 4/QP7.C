#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z,sum;
 clrscr();
 printf("=> Enter the x :-");
 scanf("%d",&x);
 printf("=> Enter the y :-");
 scanf("%d",&y);
 printf("=> Enter the z :-");
 scanf("%d",&z);

 sum=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);
 printf("=> sum is =%d",sum);
 getch();
}