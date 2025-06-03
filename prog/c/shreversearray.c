#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	
	int *a,n,i,j,temp;

	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	
		
	for(i=n/2,j=n-1;i<j;i++,j--)
	
	{

		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	printf("After reversing the second half:\n");
	for(i=0;i<n;i++)

	{

		printf("%d ",a[i]);

	}

	
	return 0;

}