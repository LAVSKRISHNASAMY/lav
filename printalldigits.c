#include<stdio.h>
int main()
{
int p,q,r,s;
scanf("%d",&p);
q=p/100;
r=p%100;
printf("%d\t",q);
q=r/10;
s=r%10;
printf("%d\t%d",q,s);
return 0;
}
