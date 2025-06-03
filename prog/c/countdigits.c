#include<stdio.h>
int main()
{
	int n,num,count;
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		num/=10;
		count++;
	}
	printf("%d digits in %d",count,n);
	return 0;
}
		