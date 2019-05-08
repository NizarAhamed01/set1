#include<stdio.h>
int main()
{
char st[30];
int i,count=1;
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
if(st[i]=='.')
{
count=count+1;
}
}
printf("\n %d",count);
return 0;
}
