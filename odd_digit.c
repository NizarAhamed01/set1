#include<stdio.h>
int main()
{
  int N,remainder;
  scanf("%d",&N);
  if(N <= 100000)
  {
    while(N)
    {
      remainder=N%10;
      if(remainder % 2)
      {
        printf("%d\t",remainder);
      }
      N=N/10;
   }
  }
  return 0;
}
