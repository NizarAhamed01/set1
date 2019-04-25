#include<stdio.h>
int main()
{
  int input1,input2,ans;
  char op;
  scanf("%d %c %d",&input1,&op,&input2);
  if(op == '/')
  {
    ans=input1/input2;
  }
  else if(op == '%')
  {
    ans=input1%input2;
  }
  printf("%d",ans);
  return 0;
}
