#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter a alphabet:");
scanf("%c",c);
char c1={'a','e','i','o','u'};
char c2={'b','c,'d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
if(c1||c2)
{
printf("it is a vowel",c1);
}
else
{
printf("it is a consonant",c2);
}
getch();
}
