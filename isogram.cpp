#include<iostream.h>
int main()
{
char a[10];
int flag=0;
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
for(int j=i+1;a[j]!=0;j++)
{
if(a[i]==a[j])
{
cout<<"no";
flag=1;
break;
}
}
if(flag==1)
break;
}
if(flag==0)
{
cout<<"yes";
}
return 0;
}
