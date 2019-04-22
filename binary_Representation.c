#<include<stdio.h>
int main()
{
  int n,rem,count=0;
  scanf("%d",&n);
  while(n)
  {
    rem=n%10;
    if((n != 0) && (n != 1))
    {
      count++;
    }
    n=n/10;
  }
  if(count > 0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
