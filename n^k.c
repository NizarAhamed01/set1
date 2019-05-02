#include<stdio.h>
int main()
{ 
  int N,K,power=1,index;
  scanf("%d %d",&N,&K);
  for(index=0;index<3;index++)
  {
    power=power*N;
  }
  printf("%d",power);
  return 0;
}
