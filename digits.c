#include<stdio.h>
void main()
{
int count=0,n;
printf(" enter the integer :");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits:",count);
}
