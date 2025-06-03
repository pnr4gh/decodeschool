#include<stdio.h>
int main()
{
	int n,num,count,rem,i,m,k=0;
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		num/=10;
		count++;
	}
	num=n;
	while(num!=0)
	{
		rem=num%10;
		m=1;
		for(i=1;i<=count;i++)
		{
			m*=rem;
		}
		k+=m;
		num=num/10;
	}
	if(n==k)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not ArmStrong Number");
	}
	return 0;
	
}
		