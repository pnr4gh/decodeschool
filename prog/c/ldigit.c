#include<stdio.h>

int main()

{
    
	int num,digit;
	printf("Enter a number:");
	scanf("%d",&num);

	digit=num%10;
	printf("Last digit: %d",digit);
    
	return 0;

}