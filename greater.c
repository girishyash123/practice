#include<stdio.h>
int main()
{
int a,b;
printf("type in two input mumbers\n");
scanf("%d %d",&a,&b);
printf("The inputted two numbers are a=%d and b=%d \n",a,b);
if (a>b)
{
printf(" The greater number among two numbers are a=%d and b=%d\n",a,b);
}
else
{
printf("The greater number among two numbers are b=%d and a=%d\n",b,a);
}
}
