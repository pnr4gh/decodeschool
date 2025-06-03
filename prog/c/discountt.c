#include <stdio.h>


int main(void) 
{
	
	double quantity,price,amount,discount;

	printf("Enter quantity and price:");	
	scanf("%lf %lf",&quantity, &price);

	amount=quantity*price;

	if(amount>5000)

	{

		discount=amount*0.10;


	}
	
	else if(amount > 1000)
	{
		discount=amount*0.05;

	}
	else
	{
		discount=0;
	}
	amount = amount - discount;
	printf("%lf",amount);
	
	return 0;

}