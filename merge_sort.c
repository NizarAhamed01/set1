#include<stdio.h>
#define max 20
int a[max];
void merge(int low,int mid,int high)
{
  int temp[max];
  int i=low;
  int j=mid+1;
  int k=low;
  while((i <= mid) && (j <=high))
  {
    if(a[i] <= a[j])
      temp[k++] = a[i++];
    else
      temp[k++] = a[j++];
  }
  while(i <= mid)
  temp[k++]=a[i++];
  while(j <= high)
  temp[k++] = a[j++];
  for(i = low ;i <= high;i++)
  a[i]=temp[i];
}
void mergesort(int low,int high)
{
  int mid;
  if(low != high)
  {
    mid = (low + high)/2;
    mergesort(low,mid);
    mergesort(mid+1,high);
    merge(low,mid,high);
  }
 }
 void main()
 {
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  mergesort(0,n-1);
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
 }
