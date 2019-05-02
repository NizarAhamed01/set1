#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  int array[num],sum=0,index;
  for(index=0;index<num;index++)
  {
    scanf("%d",&array[index]);
  }
  for(index=0;index<num;index++)
  {
    sum=sum+array[index];
  }
  printf("%d",sum);
  return 0;
}
