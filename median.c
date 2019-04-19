#include<stdio.h>
int main()
{
  int i,n,temp,median,j;
  scanf("%d",&n);
  int arr[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scan("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
       {
        if(arr[i] > arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
     }
     if(n%2==0)
     {
      median=(n/2)+(n+1)/2-1;
     }
     else
     {
      median=(n+1)/2-1;
     }
     printf("%d",arr[median]);
     
   }
  return 0;
}
   
