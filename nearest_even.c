#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num % 2 == 0)
  {
    printf("%d",num);
  }
  else
  {
    num=num-1;
    printf("%d",num);
  }
  return 0;
}
