#include<stdio.h>
int main()
{
int a[50],n,i,median;
printf("enter the size:");
scanf("%d",&n);
printf("the median element is:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
median=a[{i+1)/2];
}
printf("the median is",median);
return 0;
}
