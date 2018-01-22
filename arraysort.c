#include<stdio.h>
int main()
{
int array[max_size];
int i,size,j,temp;
printf("enter the size");
scanf("%d",&size);
printf("the elements are");
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<size;i++)
{
for(j=j+1;j<size;j++);
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
printf("the ascending order is:);
for(i=0;i<size;i++)
{
printf("%d\t",array[i];
}
return 0;
}
