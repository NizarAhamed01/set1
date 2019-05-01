#include<stdio.h>
int main()
{
  char str1[20],str2[20]={0},str3[20]={0};
  int i,j=0,k=0;
  scanf("%s",str1);
  for(i=0;str1[i] != '\0';i++)
  {
    if(i % 2)
    {
      str2[j] = str1[i];
      j++;
    }
    else
    {
      str3[k] = str1[i];
      k++;
    }
  }
  printf("%s %s",str2,str3);
  return 0;
}
