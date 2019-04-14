#include<stdio.h>
int main()
{
	int n,k,i;
	scanf("%d %d",&n,&k);
	int power = n;
	for(i=0;i<n;i++)
	{
	    power=power*n;
	}
	printf("%d",power);
	return 0;
}
