#include<stdio.h>
	int main()
	{
	  int digit,i=0,remainder;
	  scanf("%d",&digit);
	  while(digit)
	  {
	    remainder=digit%10;
	    digit=digit/10;
	    i++;
	  }
	  printf("%d",i);
	  return 0;
	}

