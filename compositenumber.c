#include<stdio.h>
int main()
{
int n,flag=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n given number is prime not composite");
}
else
{
printf("\n given number is composite %d",n);
}
return 0;
}
