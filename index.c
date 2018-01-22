#include<stdio.h>
int main()
{
int array[50],i,n;
printf("enter the size");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
printf("%d%d",array[i],i);
}
return 0;
}
