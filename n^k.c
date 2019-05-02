#include<stdio.h>
int main()
{ 
  int N,K,pow=1,i;
  scanf("%d %d",&N,&K);
  for(i=0;i<3;i++)
  {
    pow=pow*N;
  }
  printf("%d",pow);
  return 0;
}
