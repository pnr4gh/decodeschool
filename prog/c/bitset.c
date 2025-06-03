#include<stdio.h>
int main()
{
	int num,bit,n;
	printf("Enter a number and a bit:");
	scanf("%d %d",&num,&bit);
	n=1<<(bit-1);
	num=num^n
	printf("The value after %d bit is: %d",bit,num);
	return 0;
}