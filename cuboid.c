#include<stdio.h>
int main()
{
int l,b,h,volume,surface;
scanf("%d %d %d",&l,&b,&h);
volume=l*b*h;
printf("%d\n",volume);
surface=2*(l+b+h);
printf("%d\n",surface);
return 0;
}
