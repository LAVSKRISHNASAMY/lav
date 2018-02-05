#include<stdio.h>
int main()
{
int n,a[50],sum=0,average;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
}
for(int i=0;i<n;i++)
{
sum=sum+a[i];
average=sum/n;
}
printf("%d",average);
return 0;
}
