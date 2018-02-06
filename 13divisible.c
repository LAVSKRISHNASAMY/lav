#include<stdio.h>
int main()
{
int n;
scanf("%",&n);
while(n!=0)
{
if(n%13==0)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
