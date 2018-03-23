#include<iostream.h>
int main()
{
int n,flag=0;
cin>>n;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}
