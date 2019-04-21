#include<stdio.h>
int main()
{
  int hour1,hour2,minute1,minute2,hour3,minute3;
  scanf("%d %d",&hour1,&minute1);
  scanf("%d %d",&hour2,&minute2);
  hour3=hour1-hour2;
  minute3=minute1-minute2;
  printf("%d %d",hour3,minute3);
}
