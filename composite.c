#include<stdio.h>
int main()
{
  int input,index,count = 0;
  scanf("%d",&input);
  for(index=2;index<input;index++)
  {
    if(input % index == 0)
    {
      count = 1;
    }
  }
  if(count == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
