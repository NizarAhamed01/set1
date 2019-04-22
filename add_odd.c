#include<stdio.h>
int main()
{
  int n,m,total;
  scanf("%d %d",&n,&m);
  total=n+m;
  if(total % 2 == 0)
  {
    printf("Even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
