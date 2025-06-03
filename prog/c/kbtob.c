#include<stdio.h>

int main()

{

	int bytes;

	double kilobytes;
	printf("Enter Kilobytes:");

	scanf("%lf",&kilobytes);

	bytes=kilobytes*1024;

	printf("Bytes: %d",bytes);

	return 0;


}