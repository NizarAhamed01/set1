#include<stdio.h>
int main()
{
  int n,i,total=0,avg;
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
  avg=total/n;
  printf("%d",avg);
  return 0;
}
