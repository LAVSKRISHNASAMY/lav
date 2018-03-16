#include<iostream.h>
int main()
{
char a[50],b[50];
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
b[i]=a[i+1];
cout<<b[i];
}
else
{
b[i]=a[i-1];
cout<<b[i];
}
}
return 0;
}
