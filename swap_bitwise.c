#include<stdio.h>
int main()
{
  int num1,num2,temp;
  scanf("%d %d",&num1,&num2);
  num1=num1 ^ num2;
  num2= num1 ^ num2;
  num1=num1 ^ num2;
  printf("%d %d",num1,num2);
  return 0;
}
