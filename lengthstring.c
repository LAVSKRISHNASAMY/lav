#include<stdio.h>
#include<string.h>
int main()
{
int s;
char a[50]="computer science";
s=strlen(a)-strlen("\t\t");
printf("%d",s);
return 0;
}
