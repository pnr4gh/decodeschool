#include <stdio.h>


int main(void) 
{
	
	double quantity,price,amount,discount;
	
	printf("Enter Quantity and Price:");
	scanf("%lf %lf",&quantity, &price);

	amount=quantity*price;

	if(amount>5000)

	{

		discount=amount*0.05;

		amount=amount-discount;

	}
	
	printf("%lf",amount);
	
	return 0;

}