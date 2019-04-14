#include<stdio.h>
int main()
{
	int num,i=0,sum=0,remainder;
	int num2;
	scanf("%d",&num);
	num2=num;
	while(i < num)
	{
	    remainder=num%10;
	    sum=(sum*10)+remainder;
	    num=num/10;
	}
	if(sum == num2)
	{
	    printf("yes");
	}
	else
	{
	    printf("No");
	}
	return 0;
}
