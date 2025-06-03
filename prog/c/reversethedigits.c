#include<stdio.h>
int main()
{
	int num,rev,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	printf("Reverse is %d",rev);
	return 0;
}
		