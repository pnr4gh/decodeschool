//Program to print the given octal number in integer format
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a octal number:");
	scanf("%o",&num); 	
	printf("\nEquivalent Decimal value: %d",num);	
	return  0;
}