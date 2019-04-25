#include<stdio.h>
int main()
{
  char str[20],i,len,count =0;
  scanf("%s",&str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
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
