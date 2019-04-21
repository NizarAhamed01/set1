#include<stdio.h>
int main()
{
  int num1=1,num2=1,n,fibo,i;
  scanf("%d",&n);
  printf("%d\t %d\t",num1,num2);
  n=n-2;
  for(i=0;i<n;i++)
  {
    fibo=num1+num2;
    num1=num2;
    num2=fibo;
    printf("%d\t",fibo);
  }
  return 0;
}
  
