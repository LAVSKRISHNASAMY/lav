#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number:");
scanf("%d",&n);
if(n!=0)
{
if(n>0)
printf("the number %d is positive");
else
printf("the number %d is negative");
}
else
{
printf("the number %d is zero");
}
getch();
}
