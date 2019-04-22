#include<stdio.h>
int main()
{
  int num1,num2,diff;
  scanf("%d %d",&num1,&num2);
  diff=num1-num2;
  if(diff % 2 == 0)
  {
    printf("even");
  }
  else
  {
    printf("No");
  }
  return 0;
}
