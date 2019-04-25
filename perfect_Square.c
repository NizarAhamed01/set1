#include<stdio.h>
int main()
{
  int N,K,product,index,square,flag=0;
  scanf("%d %d",&N,&K);
  product=N*K;
  for(index=1;index<product;index++)
  {
    square=index*index;
    if(product == square)
    {
      flag=1;
    }
   }
    if(flag == 1)
    {
      printf("yes");
    }
    else
    {
      printf("No");
    }
  return 0;
}
