#include<stdio.h>
int main()
{
int a[10],n,k,flag=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
flag=1;
break;
}}
if(flag==0)
{
printf("no");
}
return 0;
}
