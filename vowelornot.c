#include<stdio.h>
int main()
{
char c[100];
int i=0,count=0,flag=0;
scanf("%s",c);
while(c[i]!='\0')
{
if(c[i]=='a' || c[i]=='e' || c[i]=='i' ||c[i]=='o' ||c[i]=='u' ||c[i]=='A' || c[i]=='E' || c[i]=='I'|| c[i]=='O' ||c[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
