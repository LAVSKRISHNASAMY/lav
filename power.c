#include<stdio.h>
int main()
{
int b,e;
double r=1;
printf("enter the base");
scanf("%d",&b);
printf("enter the exponent");
scanf("%d",&e);
while(e!=0)
{
r*=b;
--e;
}
printf("answer = %f",r);
return 0;
}
