#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("enter the value for a:");
scanf("%d",&a);
printf("enter the value for b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the values before swap:%d",a);
printf("the values after swap:%d",b);
return 0;
}
