#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&n);
  int array[num],sum=0,i;
  for(i=0;i<num;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0;i<num;i++)
  {
    sum=sum+array[i];
  }
  printf("%d",sum);
  return 0;
}
