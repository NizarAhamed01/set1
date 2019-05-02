#include<stdio.h>
int main()
{
  int A,B,C,mod;
  scanf("%d %d %d",&A,&B,&C);
  mod=(A*B)%C;
  printf("%d",mod);
  return 0;
}
