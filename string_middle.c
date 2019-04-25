#include<stdio.h>
int main()
{
  char str[20],len,n;
  scanf("%s",&strng);
  len=strlen(strng);
  n=len/2;
  len=len-1;
  if(len % 2)
  {
    strng[n]='*';
    strng[n+1]='*';
  }
  else
  {
    strng[n]='*';
  }
  printf("%s",strng);
  return 0;
}
