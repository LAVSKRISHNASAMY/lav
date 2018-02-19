#include<stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
a=a+1;
while(a%10!=0)
{
a=a+1;
}
printf("%d",a);
return 0;
}
