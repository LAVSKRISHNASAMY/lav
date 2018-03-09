#include<iostream.h>
int main()
{
int n,a[10];
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]!=i)
{
cout<<i;
break;
}
}
return 0;
}
