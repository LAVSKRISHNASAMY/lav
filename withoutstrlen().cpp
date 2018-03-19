#include<iostream.h>
int main()
{
char a[50];
int len=0;
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
len++;
}
cout<<len;
return 0;
}
