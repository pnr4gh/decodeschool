#include <stdio.h>
 
int main()
{
    	long decimal_num, remainder, base = 1, binary_num = 0;
 	printf("Enter decimal number:");
    	scanf("%ld", &decimal_num);
 
    	while (decimal_num > 0)
    	{
        	remainder = decimal_num % 2;
        	binary_num = binary_num + remainder * base;
        	decimal_num = decimal_num / 2;
        	base = base * 10;
    	}
    	printf(" Binary Value: %ld\n", binary_num);
    	return 0;
}