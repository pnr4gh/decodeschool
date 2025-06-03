#include<stdio.h>
int main()
{
	int num,digit;
	printf("Enter a number:");
	scanf("%d"&num);
	digit=num%10;
	if(digit%3==0)
	{
		printf("%d is divisible by 3",digit);
	}
	else
	{
		printf("%d is not divisible by 3",digit);
	}
	return 0;
}