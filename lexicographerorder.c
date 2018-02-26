#include<stdio.h>
#include<string.h>
int main()
{
char a[10][50],temp[5];
int i,j;
printf("enter 10 words");
for(i=0;i<10;++i)
scanf("%s[^\n]",&a[i]);
for(i=0;i<9;++i)
for(j=i+1;j<10;++j)
{
if(strcmp(a[i],a[j])>0)
{
strcmp(temp,a[i]);
strcmp(a[i],a[j]);
strcmp(a[j],temp);
}
}
printf("lexicographer order \n");
for(i=0;i<10;++i)
{
printf("%s",a[i]);
}
return 0;
}
