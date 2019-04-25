#include<stdio.h>
int main()
{
  int N,K,product,i,square,flag=0;
  scanf("%d %d",&N,&K);
  product=N*K;
  for(i=1;i<product;i++)
  {
    square=i*i;
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
