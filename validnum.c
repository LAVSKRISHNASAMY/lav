#include<stdio.h>
int main()
{
int n;
printf("enter the value:");
scanf("%d",n);
if(n!= 'a'||'z')
{
printf("numeric");
}
else
{
printf("not a numeric");
}
return 0;
}
