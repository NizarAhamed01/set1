#include<stdio.h>
int main()
{
  int N,L,R,i,count=0;
  scanf("%d",&N);
  scanf("%d %d",&L,&R);
  for(i=L;i<R;i++)
  {
    if(N == i)
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
