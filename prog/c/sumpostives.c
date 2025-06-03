#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter Postive numbers to sum:");
	while(1)
	{
		scanf("%d",&num);
		if(num<0)
		{
			break;
		}
		sum=sum+num;
	}
	printf("%d",sum);
	return 0;
}