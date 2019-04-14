#include<stdio.h>
int main()
{
  int digit,remainder,cube,num;
  int sum = 0;
  scanf("%d",&digit);
  num=digit;
  while(digit)
  {
    remainder = digit % 10;
    cube = remainder * remainder * remainder;
    sum = sum + cube;
    digit=digit / 10;
  }
  if(num == sum)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
 }
