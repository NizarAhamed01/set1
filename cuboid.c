#include<stdio.h>
int main()
{
  int l,b,h,volume,surface;
  scanf("%d %d %d",&l,&b,&h);
  volume=l*b*h;
  surface=(2*l*b)+(2*b*h)+(2*l*h);
  printf("%d %d",surface,volume);
  return 0;
}
