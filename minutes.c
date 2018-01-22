#include<stdio.h>
int main()
{
int m,h,m1;
printf("enter the minutes");
scanf("%d",&m);
h=m/60;
m1=m%60;
printf("%d%d",h,m1);
return 0;
}
