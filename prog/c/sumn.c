#include<stdio.h>
int main()
{
	int n,i,num,sum=0;
	printf("Enter number of numbers to sum:");
	scanf("%d",&n);
	printf("Enter %d numbers to sum:"n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("The sum is:%d",sum);
	return 0;
}