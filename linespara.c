#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100]="hello sir.how are you";
int i,count=0;
for(i=0;a[i]=='\0';i++)
{
if(a[i]==".")
count++;
}
printf("%d",count+1);
return 0;
}
