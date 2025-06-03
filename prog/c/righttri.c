#include<stdio.h>

int main()

{
    
	int length,width,area;
	printf("Enter length and width of a triangle:");
	scanf("%d %d",&length,&width);

	area=(length*width)/2;   
	printf("\nArea of Right angled Triangle: %d",area);
    
	return 0;

}