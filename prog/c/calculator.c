#include<stdio.h>
int main()
{
	int num1,num2,output;
	char operator;
	printf("Enter a binary expression:");
	scanf("%d %c %d",&num1,&operator,&num2);
	switch(operator)
	{
		case '+':
			output=num1+num2;
			break;
		case '-':
			output=num1-num2;
			break;
		case '*':
			output=num1*num2;
			break;
		case '/':
			output=num1/num2;
			break;
		case '%':
			output=num1%num2;
			break;
		default :
			printf("invalid operation");
			break;
	}
	printf("%d",output);
	return 0;
}