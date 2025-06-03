#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>=10)
	{
		num=num/10;
	}
	

	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
	return 0;
}