#include<stdio.h>
#include<string.h>
int main()
{
int i,flag=0,l;
char a[50];
printf("enter the string");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=a[l-i-1])
{
flag=1;
break;
}
if(flag==0)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
return 0;
}


