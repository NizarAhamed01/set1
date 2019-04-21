#include<stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(isdigit(c) != 0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
