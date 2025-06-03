#include<stdio.h>
int main()
{
	int num1,num2,product=1;
	printf("Enter base and power value:");
	scanf("%d %d",&num1,&num2);
	while(num2>0)
	{
		product=product*num1;
		num2--;
	}
	printf("%d",product);
	return 0;
}