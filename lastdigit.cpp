#include<iostream.h>
#include<string.h>
int main()
{
char a[50];
int n,l;
cin>>a>>n;
l=strlen(a);
for(int i=n;i<=l;i++)
{
cout<<a[i];
}
return 0;
}
