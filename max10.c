#include<stdio.h>
int main()
{
int a[10];
int i,greatest;
printf("Enter 10 values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest=a[i];
}
}
printf("maximum number is %d",greatest);
return 0;
}
