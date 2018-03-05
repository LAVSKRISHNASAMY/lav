#include<stdio.h>
int main()
{
int n,temp,r=0;
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
r=r*10+temp;
n=n/10;
}
printf("%d",r);
}
