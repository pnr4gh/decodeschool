#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d %d"&num1,&num2);
	if(num1%10==num2%10)
	{
		printf("%d and %d are equal",num1%10,num2%10);
	}
	else
	{
		printf("%d and %d are not equal",num1%10,num2%10);
	}
	return 0;
}