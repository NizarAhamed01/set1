#include<stdio.h>
int main()
{
  int num1,num2,temp;
  scanf("%d %d",&num1,&num2);
  if((num1 <= 100000) && (num2 <= 100000))
  {
    temp=num1;
    num1=num2;
    num2=temp;
  }
  printf("%d %d",num1,num2);
  return 0;
}
