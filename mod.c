#include<stdio.h>
int main()
{
  int a,b,c,mod;
  scanf("%d %d %d",&a,&b,&c);
  mod=(a*b)%c;
  printf("%d",mod);
  return 0;
}
