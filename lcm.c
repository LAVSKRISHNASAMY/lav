#include<stdio.h>
int main()
{
int a,b,n,lcm,i;
scanf("%d %d",&a,&b);
for(i=1;i<=a && i<=b;++i)
{
if(a%i==0 && b%i==0)
n=i;
}
lcm=(a*b)/n;
printf("%d %d %d",a,b,lcm);
return 0;
}
