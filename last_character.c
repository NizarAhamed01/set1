#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int num,length,diff,index;
  scanf("%s %d",&str,&num);
  length=strlen(str);
  diff=length-num;
  for(index=diff;index<length;index++)
  {
    printf("%s",str[index]);
  }
  return 0;
  
}
