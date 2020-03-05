#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,peri,area=0.0;
printf("enter value of 3 sides of a triangle\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
peri=a+b+c;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nthe sides of the triangle are:%f,%f,%f",a,b,c);
printf("\nthe perimeter of the triangle is:%f",peri);
printf("\nthe area of the triangle :%f",area);
}
