#include<stdio.h>
int main()
{
int m,n,num;
printf("enter the value of m:");
scanf("%d",&m);
printf("enter the value of n:");
scanf("%d",&n);
for(num=m;num<=n;num++)
{
if(num%2==0)
{
printf("the even number is %d:",num);
}
}
return 0;
}
