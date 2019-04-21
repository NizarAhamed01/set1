#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n % 2 == 0)
  {
    printf("%d",n);
  }
  else
  {
    n=n-1;
    printf("%d",n);
  }
  return 0;
}
