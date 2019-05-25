#include<stdio.h>
int main()
{
  int d,rem,pro=1;
  scanf("%d",&d);
  while(d)
  {
    rem = d % 10;
    pro = pro * rem;
    d = d / 10;
  }
  printf("%d",pro);
  return 0;
}
