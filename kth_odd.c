#include<stdio.h>
int main()
{
  int n,k,i,j=1;
  scanf("%d %d",&n,&k);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i] % 2)
    {
      j++;
    }
    if(j == 3)
    {
      printf("%d",a[i]);
      break;
    }
  }
  return 0;
}
