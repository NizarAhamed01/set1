#include<stdio.h>
int main()
{
  int n,q,i;
  scanf("%d %d",&n,&q);
  if((n <= 100000 )&& (q <= 100000))
  {
    for(i=n+1;i<q;i++)
    {
      if(i%2)
      {
        printf("%d\t",i);
      }
    }
  }
  return 0;
 }
