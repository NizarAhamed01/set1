#include<stdio.h>
int main()
{
  int num1,num22,ans;
  char op;
  scanf("%d %c %d",&num1,&op,&num2);
  if(op == '/')
  {
    ans=num1/num2;
  }
  else if(op == '%')
  {
    ans=num1%num2;
  }
  printf("%d",ans);
  return 0;
}
