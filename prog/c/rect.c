#include<stdio.h>

int main()

{
    
	int length,breadth, area;
 
	printf("Enter length and breadth of rectangle:");   
	scanf("%d %d",&length,&breadth);

	area=length * breadth;
    
	printf("\nArea of Rectangle: %d",area);
    
	return 0;

}