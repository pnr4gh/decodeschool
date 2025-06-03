#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,output1,output2;
	printf("Enter a number and number of shifts:");
	scanf("%d %d",&num,&n);
	output1=num>>n;
	output2=num/pow(2,n);
	printf("%d %d",output1,output2);
	return 0;
}