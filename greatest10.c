#include<stdio.h>
int main()
{
int a[10];
int a,large,i;
printf("enter the ten values :");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
large = a[0];
for(i=1;i<=10;i++)
{
if(a[i]>large)
large=a[i];
}
printf("the largest is:",large);
return 0;
}
