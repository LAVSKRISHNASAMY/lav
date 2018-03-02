#include<stdio.h>
int main()
{
char a[15];
scanf("%s",a);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
printf("%c",a[i]);
}
return 0;
}
