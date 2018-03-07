#include<stdio.h>
int main()
{
int a,b,c,sum=0;
scanf("%d %d %d",&a,&b,&c);
for(int i=a;i<=c;i=i+b)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
