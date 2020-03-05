#include<stdio.h>
void main()
{
int a;
printf("enter the score of a student\n");
scanf("%d",&a);
if(a>=90 && a<=100)
printf("the student got S grade\n");
else if(a>=80 && a<=89)
printf("the student got A grade\n");
else if(a>=70 && a<=79)
printf("the student got B grade\n");
else
printf("the student got c grade\n");
}
