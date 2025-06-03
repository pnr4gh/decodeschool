#include<stdio.h>
int main()
{
	int num1,num2,difference;
	printf("Enter two numbers:");
	scanf("%d %d"&num1,&num2);
	difference=num1-num2;
	if(difference%2==0)
	{
		printf("The difference %d is even",difference);
	}
	else
	{
		printf("The difference %d is odd",difference);
	}
	return 0;
}