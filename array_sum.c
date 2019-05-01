#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int array[n],sum=0,i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+array[i];
  }
  printf("%d",sum);
  return 0;
}
