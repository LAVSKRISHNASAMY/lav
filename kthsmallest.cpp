#include<iostream.h>
int main()
{
int n,k,a[10],i;
cin>>n>>k;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{
int temp;
for(int j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
cout<<a[k];
return 0;
}
