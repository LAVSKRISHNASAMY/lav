#include<iostream.h>
int main()
{
int a[10],n,k;
cin>>n>>k;
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
{
if(i==k)
{
cout<<a[i];
}
}
return 0;
}

