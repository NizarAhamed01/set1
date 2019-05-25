#include<stdio.h>
int main()
{
  int digit,remaining,product=1;
  scanf("%d",&digit);
  while(digit)
  {
    remaining = digit % 10;
    product = product * remaining;
    digit = digit / 10;
  }
  printf("%d",product);
  return 0;
}
