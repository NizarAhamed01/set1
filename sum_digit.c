#include<stdio.h>
int main()
{
  int digit,remainder;
  int sum =0;
  scanf("%d",&digit);
  while(digit)
  {
    remainder=digit%10;
    sum=sum+remainder;
    digit=digit/10;
  }
  printf("%d",sum);
  return 0;
}
