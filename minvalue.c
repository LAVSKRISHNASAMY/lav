#include<stdio.h>
int main()
{
int min,n,i,a[50];
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
return 0;
}
