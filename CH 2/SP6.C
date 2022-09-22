#include<stdio.h>
#include<conio.h>
#define PI 3.14f
void main()
{
 float radius,perimeter,area;
 clrscr();

 printf("Enter radius of the circle:\n");
 scanf("%f",&radius);

 perimeter = 2* PI*radius;
 printf("perimeter of the circle : %0.4f\n",perimeter);

 area=PI*radius*radius;
 printf("Area of circle: %0.4f\n",area);
 getch();
}