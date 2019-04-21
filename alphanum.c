#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[20];
  gets(str);
  int i,count_alp=0,count_num=0;
  for(i=0;str[i] != '\0';i++)
  {
    if((str[i] >= 'A') && (str[i] <= 'z'))
    {
      count_alp = 1;
    }
    else if((str[i] >= '0') && (str[i] <= '9'))
    {
      count_num=1;
    }
  }
  if((count_alp == 1) && (count_num == 1))
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
