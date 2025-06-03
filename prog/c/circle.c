#include<stdio.h>

int main()

{
    
	const float pi=3.14;
	int radius;
	float area;
	printf("Enter Radius:");
    
	scanf("%d",&radius);

	area=pi * (radius * radius);
    
	printf("Area of Circle: %.2f",area);
    
	return 0;

}