int main()
{
  int n,k,minimum,index;
  scanf("%d %d",&n,&k);
  int arr[n];
 
    for(index=0;index<n;index++)
    {
      scanf("%d",&arr[index]);
    }
    minimum=arr[0];
    for(index=0;index<n;index++)
    {
      if(arr[index] < minimum)
      {
        minimum=arr[index];
      }
    }
    printf("%d",arr[k]);
  return 0;
}
