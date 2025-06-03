#include<stdio.h>

int main()

{
    
	double f,c;
	printf("Enter fahrenheit:");
	scanf("%lf",&f);

	c=(f-32)*0.5556;  
	printf("Celsius: %.2lf",c);
    
	return 0;

}