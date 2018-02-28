#include<stdio.h>
int main()
{
int a,b,c,n,d,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&a,&b);
printf("%d",a/b);
scanf("%d %d",&c,&d);
printf("%d",a%b);
}
return 0;
}
