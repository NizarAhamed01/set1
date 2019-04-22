#include<stdio.h>
int main(void)
{
  char str[20];
  scanf("%[^\n]s",str);
  if(printf("%d",str))
  {
    return 0;
  }
}
