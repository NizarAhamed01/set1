#include<stdio.h>
int main()
{
  int num,k,i,j=1;
  scanf("%d %d",&num,&k);
  int a[num];
  for(i=0;i<num;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<num;i++)
  {
    if(a[i] % 2)
    {
      j++;
    }
    if(j == 3)
    {
      printf("%d",a[i]);
      break;
    }
  }
  return 0;
}
