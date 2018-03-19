#include<iostream.h>
int main()
{
int n,sum=0,s,r;
cin>>n;
while(n!=0)
{
r=n%10;
s=r*r;
sum=sum+s;
n=n/10;
}
cout<<sum;
return 0;
}
