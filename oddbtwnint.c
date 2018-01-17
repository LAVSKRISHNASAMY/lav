#include<stdio.h>
int main()
{
int a=40,b=20,i;
printf("enter the value of i:");
scanf("%d",&i);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("i is:",i);
}
}
return 0;
}
