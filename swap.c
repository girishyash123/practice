#include<stdio.h>
int main()
{
 int a,b,temp;
printf("Type in two input numbers\n");
 scanf("%d %d", &a, &b);
printf("The original input numbers are a=%d and b=%d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("the numbers after swapping a=%d and b=%d\n",a,b);
 }
