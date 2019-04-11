#include<stdio.h>
int main()
{
  int n,i,sum;
  printf("Enter the number");
  scanf("%d",&n);
  if((n <= 100000) && (n >= 1))
  {
    sum=0;
        for(i=1;i<=n;i++)
    {
      sum=sum+i;
    }
    printf("%d",sum);
  }
  return 0;
}
