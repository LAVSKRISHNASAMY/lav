#include<iostream.h>
#include<string.h>
int main()
{
char a[50],b[50];
int s1,s2,s=0;
s1=strlen(a);
s2=strlen(b);
if(s1==s2)
{
for(int i=1;i<=s1;i++)
{
if(a[i]!=b[i])
{
s=s+1;
}
}
if(s==1)
{
cout<<"yes";
}
else
{
cout<<"no";
}}
else
{
cout<<"no";
}
return 0;
}
