#include<stdio.h>

int main()

{
    
	int a,b,t;
	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter b:");
	scanf("%d",&b);

	t=a;
	a=b;
	b=t;
	printf("\nAfter Swap\na:%d b:%d",a,b);  
	return 0;

}