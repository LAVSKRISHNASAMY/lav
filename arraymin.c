#include<stdio.h>
int main()
{
int m,a[20],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(m>a[i])
{
m=a[i];
}
}
printf("minimum:",m);
return 0;
}
