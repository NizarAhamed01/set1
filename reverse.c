#include<stdio.h>
int main()
{
  int digit,remainder,sum=0;
  scanf("%d",&digit);
  while(digit)
  {
    remainder=digit%10;
    sum=sum*10+remainder;
    digit=digit/10;
  }
  printf("%d",sum);
  return 0;
}
