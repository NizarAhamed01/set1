#include<stdio.h>
int main()
{
  int N,i;
  scanf("%d",&N);
  if(N<=1000)
  {
    for(i=1;i<=N;i++)
    {
      if(N % i == 0)
      {
        printf("%d\t",i);
      }
    }
  }
  return 0;
}
