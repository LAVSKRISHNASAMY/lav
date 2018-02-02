#include<stdio.h>
int main()
{
int i,n,f=0,s=1,next;
printf("enter the number :");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",f);
next=f+s;
f=s;
s=next;
}
return 0;
}
