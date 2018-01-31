#include<stdio.h>
#include<string.h>
int main()
{
char z[50]="spaces in sentences";
int i,count=0;
for(i=0;z[i]!='\0';i++)
{
if(z[i]==' ')
count++;
}
printf("%d",count);
return 0;
}
