#include<stdio.h>
int main()
{
  int num,i,limit;
  scanf("%d",&num);
  limit=num;
  for(i=1;i<limit;i++)
  {
    num=num*i;
  }
  printf("%d",num);
  return 0;
 }
