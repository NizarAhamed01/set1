#include<stdio.h>
int main()
{
  int n,m,add;
  scanf("%d %d",&n,&m);
  add=n+m;
  if(add % 2 == 0)
  {
    printf("Even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
