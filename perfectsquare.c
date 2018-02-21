#include<stdio.h>
#include<math.h>
int main()
{
int n1,n2,s;
scanf("%d %d",&n1,&n2);
if(n1==n2)
{
s=pow(n1,n2);
printf("perfect square %d",s);
}
else
{
printf("not a perfect square");
}
return 0;
}
