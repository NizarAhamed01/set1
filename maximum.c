#include<stdio.h>
int main()
{
  int n,largest,i;
  scanf("%d",&n);
  int arr[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i] > largest)
      {
        largest=arr[i];
      }
    }
    printf("%d",largest);
  }
  return 0;
}
