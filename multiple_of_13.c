#include<stdio.h>
int main()
{
  int input;
  scanf("%d",&input);
  if(input % 13 == 0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
