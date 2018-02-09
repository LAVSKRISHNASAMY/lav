#include<stdio.h>
int main()
{
int n,i,a=0,b=0,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
printf("1");
}
else
{
a=b;
b=c;
c=a+b;
printf("%d",a);
printf("%d",b);
printf("%d",c);
}}
return 0;
}
