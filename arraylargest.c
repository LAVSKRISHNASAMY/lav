#include<stdio.h>
int main()
{
int a[15],i,b,c=0;
printf("enter the value of b:");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<b;i++)
{
if(c<a[i])
{
c=a[i];
}
}
printf("maximum is :",c);
return 0;
}
