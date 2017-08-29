#include<stdio.h>
int main()
{
int n,ri=0,r,oi;
printf("enter the number");
scanf("%d",&n);
oi=n;
while(n!=0)
{
  r=n%10;
  ri=ri*10+r;
  n/=10;
}
  if(oi==ri)
  {
    printf("it is palindrome",oi);
  }
  else
  {
    printf("not a palindrome",oi);
  }
}
