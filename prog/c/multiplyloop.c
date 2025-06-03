#include<stdio.h>
int main()
{
	int num1,num2,product=0;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	while(num2>0)
	{
		product=product+num1;
		num2--;
	}
	printf("The product is :%d",product);
	return 0;
}