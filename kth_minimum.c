int main()
{
  int n,k,minimum,i;
  scanf("%d %d",&n,&k);
  int arr[n];
 
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
    printf("%d",arr[k]);
  return 0;
}
