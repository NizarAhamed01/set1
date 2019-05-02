#include<stdio.h>
int main()
{
  int n,remainder,total=0;
  scanf("%d",&n);
  while(n)
  {
    remainder=n%10;
    total=total*10+remainder;
    n=n/10;
  }
  printf("%d",total);
  return 0;
}
