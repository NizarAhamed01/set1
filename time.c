#include<stdio.h>
int main()
{
  int hour,minute,input;
  scanf("%d",&input);
  hour=input/60;
  minute=input-(hour * 60);
  printf("%d %d",hour,minute);
  return 0;
}
