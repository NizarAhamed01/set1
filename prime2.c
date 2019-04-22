#include<stdio.h>
int main()
{
  int number,i,count =0;
  scanf("%d",&number);
  for(i=2;i<number;i++)
  {
    if(number % i == 0)
    {
      count = 1;
    }
  }
  if(count == 0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
