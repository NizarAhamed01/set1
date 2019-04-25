#include<stdio.h>
int main()
{
  int N,L,R,index,count=0;
  scanf("%d",&N);
  scanf("%d %d",&L,&R);
  for(index=L;index<R;index++)
  {
    if(N == index)
    {
      count =1;
    }
  }
  if(count == 1)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
