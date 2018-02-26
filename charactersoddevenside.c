#include<stdio.h>
int main()
{
int i,n;
char a[50];
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
for(i=0;i<n;i++)
{
if(i%2!=0)
{
printf("\n %c",a[i]);
}
}
return 0;
}
