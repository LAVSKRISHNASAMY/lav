#include<stdio.h>
int main()
{
int a,n,i,flag=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the number is prime %d",n);
}
else
{
printf("the number is not prime %d",n);
}
return 0;
}
