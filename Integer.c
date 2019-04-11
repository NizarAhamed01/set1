#include<stdio.h>
	int main()
	{
	  int n,k,i;
	  int sum=0;
	  printf("Enter the n and k Value\n");
	  scanf("%d",&n);
	  scanf("%d",&k);
	  int array[n];
	  for(i=0;i<n;i++)
	  {
	    scanf("%d",&array[i]);
	  }
	  for(i=0;i<k;i++)
	  {
	    sum=sum+array[i];
	  }
	  printf("%d",sum);
	  return 0;
	}
