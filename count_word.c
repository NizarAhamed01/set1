#include<stdio.h>
int main()
{
  char input[50],word=1,i;
  gets(input);
  for(i=0;input[i] !='\0';i++)
  {
    if(input[i]== ' ')
    {
      word++;
    }
  }
  printf("%d",word);
  return 0;
}
