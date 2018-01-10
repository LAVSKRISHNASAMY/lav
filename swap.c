#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("\n enter the value for a:");
scanf("%d",&a);
printf("\n enter the value for b:");
scanf("%d",&b);
printf("\n the values before swap:",a,b);
temp=a;
a=b;
b=temp;
printf("\n the values after swap:"a,b);
return 0;
}
