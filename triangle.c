#include<stdio.h>
void main()
{
int s1,s2,s3;
printf("enter three sides of a triangle\n");
scanf("%d %d %d",&s1,&s2,&s3);
if(s1==s2 && s2==s3 && s1==s3)
printf("triangle is equilateral\n");
else if(s1!=s2 && s2!=s3 && s1!=s3)
printf("triangle is scalene\n");
else
printf("triangle is isoceles\n");
}
