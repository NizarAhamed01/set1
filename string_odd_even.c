#include<stdio.h>
int main()
{
  char input1[20],inpu2[20]={0},input3[20]={0};
  int i,j=0,k=0;
  scanf("%s",input1);
  for(i=0;input1[i] != '\0';i++)
  {
    if(i % 2)
    {
      input2[j] = input[i];
      j++;
    }
    else
    {
      input3[k] = input1[i];
      k++;
    }
  }
  printf("%s %s",input2,input3);
  return 0;
}
