#include<iostream.h>
int main()
{
int a,b,c=0;
cin>>a,b;
for(int i=a;i<=b;i++)
{
for(int j=2;j<=b;j++)
{
if(j*j==i)
{
c=c+1;
}}}
cout<<c;
return 0;
}
