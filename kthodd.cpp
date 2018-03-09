#include<iostream.h>
int main()
{
int n,k,i,a[10],count=1;
cin>>n>>k;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{
if(a[i]%2==1)
{
if(count==k)
{
cout<<a[i];
}
count=count+1;
}}
return 0;
}
