#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d natural numbers in reverse order:\n",n);
	for(i=n;i>0;i--)
	{
		printf("%d ",i);
	}
	return 0;
}