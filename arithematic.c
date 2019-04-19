#include<stdio.h>
int main()
{
  int n,a,d,arith;
  scanf("%d %d %d",&n,&a,&d);
  if((a <= 100000) && (n <= 100000) && (d <= 100000))
  {
    arith=n/2*(2*a+(n-1)*d);
  }
  printf("%d",arith);
  return 0;
}
