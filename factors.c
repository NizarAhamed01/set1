#include<stdio.h>
int main()
{
  int N,index;
  scanf("%d",&N);
  if(N<=1000)
  {
    for(index=1;index<=N;index++)
    {
      if(N % index == 0)
      {
        printf("%d\t",index);
      }
    }
  }
  return 0;
}
