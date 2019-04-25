#include<stdio.h>
int main()
{
  int N,rem;
  scanf("%d",&N);
  if(N <= 100000)
  {
    while(N)
    {
      rem=N%10;
      if(rem % 2)
      {
        printf("%d\t",rem);
      }
      N=N/10;
   }
  }
  return 0;
}
