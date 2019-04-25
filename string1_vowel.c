#include<stdio.h>
int main()
{
  char strng[20],i,len,count =0;
  scanf("%s",&strng);
  len=strlen(strng);
  for(i=0;i<len;i++)
  {
    if((strng[i] == 'a') || (strng[i] == 'e') || (strng[i] == 'i') || (strng[i] == 'o') || (strng[i] == 'u'))
    {
      count = 1;
    }
  }
  if(count == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
