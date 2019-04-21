#include<stdio.h>
int main()
{ 
  int n,m,product;
  scanf("%d %d",&n,&m);
  product=n*m;
  if(product % 2 == 0)
  {
    printf("Even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
