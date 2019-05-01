#include<stdio.h>
int main()
{
  int length,breadth,heigth,volume,surface;
  scanf("%d %d %d",&length,&breadth,&height);
  volume=length*breadth*heigth;
  surface=(2*length*breadth)+(2*breadth*height)+(2*length*height);
  printf("%d %d",surface,volume);
  return 0;
}
