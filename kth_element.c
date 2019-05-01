#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&n);
  int input[num],sum=0,i;
  for(i=0;i<num;i++)
  {
    scanf("%d",&input[i]);
  }
  for(i=0;i<num;i++)
  {
    sum=sum+input[i];
  }
  printf("%d",sum);
  return 0;
}
