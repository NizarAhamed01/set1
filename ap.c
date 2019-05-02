#include<stdio.h>
int main()
{
  int A,B,C,Ap;
  scanf("%d %d %d",&A,&B,&C);
  Ap=C/2*(2*A+(B-1)*C);
  printf("%d",Ap);
  return 0;
}
