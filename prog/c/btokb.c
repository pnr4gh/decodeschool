#include<stdio.h>

int main()

{

	int bytes;

	double kilobytes;

	printf("Enter number of bytes:");

	scanf("%d",&bytes);

	kilobytes=bytes/1024.00;

	printf("Kilobytes: %.2lf",kilobytes);

	return 0;


}