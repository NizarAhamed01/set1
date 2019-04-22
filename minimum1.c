#include<stdio.h>
int main()
{
  int a[10],i,min;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=0;i<10;i++)
  {
    if(a[i] < min)
    {
      min=a[i];
    }
  }
  printf("%d",min);
  return 0;
}
