#include<stdio.h>

int main()

{
    
	double f,c;
	printf("Enter celsius:");
	scanf("%lf",&c);

	f=c*1.8+32;
	printf("Fahrenhiet:%.2lf",f);
    
	return 0;

}