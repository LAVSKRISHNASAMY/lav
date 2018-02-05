#include<stdio.h>
int main()
{
int n,a;
scanf("%",&n);
while(n!=0)
{
if(n%13==0)
{
printf("yes divisible");
}
else
{
printf("not divisible");
}
}
return 0;
}
