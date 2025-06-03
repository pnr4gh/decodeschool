#include<stdio.h>
int main()
{
	int n,i,num,sum=0;
	printf("Enter number of numbers to sum:");
	scanf("%d",&n);
	i=0;
	printf("Enter %d numbers to sum:",n);
	while(i<n)
	{
		scanf("%d",&num);
		if(num>=0)
		{
			sum=sum+num;
		}
		i++;	
	
	}
	printf("The Sum is: %d",sum);
	return 0;
}