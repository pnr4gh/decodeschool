#include <stdio.h>
 
int main()
{
	int binary_val, decimal_val = 0, base = 1, rem;
 	printf("Enter a Binary Number:");
    	scanf("%d", &binary_val); 
    	while (binary_val > 0)
    	{
        	rem = binary_val % 10;
        	decimal_val = decimal_val + rem * base;
        	binary_val = binary_val / 10 ;
        	base = base * 2;
    	}
    	printf("Equivalent Decimal number is %d", decimal_val);
    	return 0;
}