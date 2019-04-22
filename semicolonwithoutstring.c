#include<stdio.h>
int main(void)
{
  char s[20];
  scanf("%[^\n]s",s);
  if(printf("%d",s))
  {
    return 0;
  }
}
