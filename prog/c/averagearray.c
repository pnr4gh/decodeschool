#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	
	int *a,n,i,sum=0,avg;

	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++)
	
	{

		sum=sum+a[i];

	}

	avg=sum/n;
	printf("\nSum of array:%d \nAverage of Array:%d",sum,avg);	
	return 0;

}