#include<stdio.h>
int main()
{
int n,i,max[10],m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d\t",&max[i]);
}
m=max[0];
for(i=0;i<n;i++)
{
if(max[i]>m)
m=max[i];
}
printf("%d",max[i]);
return 0;
}
