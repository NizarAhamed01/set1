#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n <= 100000)
  {
    n++;
    printf("%d",&n);
  }
  return 0;
}
