#include<stdio.h>
int main()
{
  int n,i,total=0,average;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    total=total+arr[i];
  }
  average=total/n;
  printf("%d",average);
  return 0;
}
