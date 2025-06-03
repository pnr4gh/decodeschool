//Program to print the given float (fractional) number in 2digit decimal format
#include<stdio.h>
int main()
{
	float num;
	printf("Enter a fractional number:");
	scanf("%f",&num); 	
	printf("\nEntered number in 2digit precision: %.2f",num);	
	return  0;
}