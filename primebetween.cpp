#include<iostream.h>
int main()
{
int l,r,flag;
cin>>l>>r;
while(l<r)
{
flag=0;
for(int i=2;i<=l/2;i++)
{
if(l%i==0)
{
flag=1;
break;
}}
if(flag==0)
{
cout<<l;
++l;
}}
return 0;
}
