int main()
{
  int n,k,minimum,index;
  scanf("%d %d",&n,&k);
  int array[n];
 
    for(index=0;index<n;index++)
    {
      scanf("%d",&array[index]);
    }
    minimum=array[0];
    for(index=0;index<n;index++)
    {
      if(arr[index] < minimum)
      {
        minimum=array[index];
      }
    }
    printf("%d",array[k]);
  return 0;
}
