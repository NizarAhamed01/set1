#include<stdio.h>
int main()
{
  int n,q,j,i,count;
  scanf("%d %d",&n,&q);
  if((n <= 100000) && (q <= 100000))
  {
    for(i=n+1;i<q;i++)
    {
      count =0;
      for(j=2;j<i;j++)
      {
        if(i % j == 0)
        {
          count =1;
        }
      }
      if(count == 0)
      {
        printf("%d\t",i);
      }
    }
  }
  return 0;
}
