#include<stdio.h>
int main()'
{
  int i,j,n,temp;
  scanf("%d",&n);
  int arr[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
     for(j=i+1;j<n;j++)
     {
      if(arr[i] > arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[i]=temp;
      }
     }
    }
    printf("%d %d",arr[0],arr[n-1]);
    }
    return 0;
}
  
