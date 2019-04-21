#include<stdio.h>
int main()
{
  char str[20],str1[20];
  scanf("%s %s",&str,&str1);
  if(str > str1)
  {
    printf("%s",str);
  }
  else
  {
    printf("%s",str1);
  }
  return 0;
}
