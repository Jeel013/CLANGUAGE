#include<stdio.h>
#include<conio.h>
void main()
{
 float length,wigth,area;
 clrscr();
 printf("Enter length of rectangle:\n");
 scanf("%f",&length);
 printf("Enter wigth of rectangle:\n");
 scanf("%f",&wigth);

 area=length*wigth;
 printf("Area of rectangle : %0.4f\n",area);
 getch();
}