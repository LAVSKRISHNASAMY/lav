#include<iostream.h>
int main()
{
int n,i;
cin>>n;
for(i=2;i<=n;i++)
{
if(i%2==0 && n%i==0)
{
cout<<i<<"\n";
}
}
return 0;
}
