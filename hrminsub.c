#include<stdio.h>
int main()
{
int min1,min2,hr1,hr2,min,hr;
scanf("%d%d",&min1,&min2);
scanf("%d%d",&hr1,&hr2);
hr=hr2-hr1;
min=min2-min1;
printf("%d%d",hr,min);
return 0;
}
