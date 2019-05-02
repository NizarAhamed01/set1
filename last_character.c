#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int n,length,diff,i;
  scanf("%s %d",&str,&n);
  length=strlen(str);
  diff=length-n;
  for(i=diff;i<length;i++)
  {
    printf("%s",str[i]);
  }
  return 0;
  
}
