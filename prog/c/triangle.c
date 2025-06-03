#include<stdio.h>

int main()

{
    
	int base,height,area;
	printf("Enter base and height of trianlge:");
	scanf("%d %d",&base,&height);

	area=(base*height)/2;   
	printf("\nArea of Triangle:%d",area);
    
	return 0;

}