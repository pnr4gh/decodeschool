#include<stdio.h>
int main()
{
	int n,num,digit,rem,count;
	scanf("%d %d",&num,&digit);
	n=num;
	while(num!=0)
	{
		rem=num%10;
		if(rem==digit)
		{
			count++;	
		}
		num/=10;
	}
	printf("%d is occured in %d for %d times",digit,n,count);
	return 0;
}
		