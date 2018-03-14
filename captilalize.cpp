#include<iostream.h>
#include<ctype.h>
int main()
{
char a[50];
cin>>a;
for(int i=0;a[i]!=' ';i++)
{
if(i==0)
{
if(islower(a[i]))
a[i]=toupper(a[i]);
}
else
{
if(a[i]!='  ')
{
if(isupper(a[i]))
a[i]=tolower(a[i]);
}
else
{
i++;
if(islower(a[i]))
a[i]=toupper(a[i]);
}
}
}
cout<<a;
return 0;
}
