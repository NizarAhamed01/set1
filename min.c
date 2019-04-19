#include<stdio.h>
int main()
{
  int n,minimum,i;
  scanf("%d",&n);
  int arr[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    minimum=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i] < minimum)
      {
        minimum=arr[i];
      }
    }
    printf("%d",minimum);
    return 0;
   }
}
