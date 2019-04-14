#include<stdio.h>
int main()
{
 int digit,n,i,sum-0,d,remainder,cube;
 scanf("%d",&digit);
 scanf("%d",&n);
 for(i=digit;i<n;i++)
 {
  cube = 1;
  sum = 0;
  d = i;
  while(d > 0)
  {
    remainder = d % 10;
    cube = remainder * remainder * remainder;
    sum =sum+cube;
    d=d/10;
  }
  if(i==sum)
  {
    printf("%d\t",i);
  }
 }
 return 0;
}
