#include<stdio.h>
int main()
{
int a=5,b=10;
printf("the values before swap %d%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swap %d%d",a,b);
return 0;
}
