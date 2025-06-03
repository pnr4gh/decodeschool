#include<stdio.h>
int main()
{
	int num,sum;
	scanf("%d",&num);
	while(num!=0)
	{
		sum+=num%10;
		num/=10;
	}
	printf("sum is %d",sum);
	return 0;
}
		