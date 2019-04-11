#include<stdio.h>
	int main()
	{
	  int input;
	  printf("Enter the input\n");
	  scanf("%c",&input);
	  if((input >='A' && input >='z') || (input >= 'a' && input <= 'z'))
	  {
	    printf("Alphabet");
	  }
	  else
	  {
	    printf("No");
	   }
	  return 0;
	}

