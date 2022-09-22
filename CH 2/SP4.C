#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c,perimeter,s,Area;
 clrscr();

 printf("\n Please Enter three sides of triangle\n");
 scanf("%f%f%f",&a,&b,&c);

 perimeter=a+b+c;
 s=(a+b+c)/2;
 Area=(s*(s-a)*(s-b)*(s-c));

 printf("\n Perimeter of Traiangle = %.2f\n",perimeter);
 printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
 printf("\n Area of triangle = %.2f\n",Area);
 getch();
}