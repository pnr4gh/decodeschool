#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if((num&1)==0)
	{
		printf("%d is Even",num);
	}
	else
	{
		printf("%d is Odd",num);
	}
	return 0;
}