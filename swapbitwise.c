#include<stdio.h>
int main()
{
int a,b;
printf("enter the two numbers:");
scanf("%d%d",&a,&b);
printf("the values before swapping are :",a,b);
a^=b;
b^=a;
a^=b;
printf("the values after swapping are :",a,b);
return 0;
}
