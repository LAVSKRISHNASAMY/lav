#include<iostream.h>
int main()
{
signed int n;
cin>>n;
if(n>=-32768 && n<=32767)
{
cout<<"INT";
}
else
{
cout<<"LONG LONG";
}
return 0;
}
