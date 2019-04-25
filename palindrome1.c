#include<stdio.h>
int main()
{
  char input[20],str[20];
  int i,j,len,count=0;
  scanf("%s",&input);
  len=strlen(input);
  j=len-1;
  for(i=0;i<len;i++)
  {
   str[i]=input[j];
   j--;
  }
  for(i=0;i<len;i++)
  {
    if(input[i] != str[i])
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
