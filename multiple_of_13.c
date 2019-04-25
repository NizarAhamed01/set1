#include<stdio.h>
int main()
{
  int number;
  scanf("%d",&number);
  if(number % 13 == 0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
