#include<stdio.h>
int main()
{
  int A,B,C,Arithemetic_progession;
  scanf("%d %d %d",&A,&B,&C);
  Arithemetic_progession=C/2*(2*A+(B-1)*C);
  printf("%d",Arithemetic_progession);
  return 0;
}
