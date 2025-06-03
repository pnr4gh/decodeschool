#include<stdio.h>
int main()
{
	int n,num;
	scanf("%d",&num);
	n=num;
	while(num>=10)
	{
		num/=10;
	}
	printf("%d is the first digit in %d",num,n);
	return 0;
}
		