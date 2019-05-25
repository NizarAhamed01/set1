#include<stdio.h>
#define max 20
int array[max];
void merge(int low,int mid,int high)
{
  int temp[max];
  int i=low;
  int j=mid+1;
  int k=low;
  while((i <= mid) && (j <=high))
  {
    if(array[i] <= array[j])
      temp[k++] = array[i++];
    else
      temp[k++] = array[j++];
  }
  while(i <= mid)
  temp[k++]=array[i++];
  while(j <= high)
  temp[k++] = array[j++];
  for(i = low ;i <= high;i++)
  array[i]=temp[i];
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
    scanf("%d",&array[i]);
  }
  mergesort(0,n-1);
  for(i=0;i<n;i++)
  {
    printf("%d",array[i]);
  }
 }
