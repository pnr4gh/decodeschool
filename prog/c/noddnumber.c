#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d odd numbers are:\n",n);
	for(j=1,i=1;j<=n;i=i+2,j++)
	{
		printf("%d ",i);
	}
	return 0;
}