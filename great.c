#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greater then other numbers\n");
else if(b>a&&b>c)
printf("b is greater then other numbers\n");
else
printf("c is greater then other numbers\n");
}
