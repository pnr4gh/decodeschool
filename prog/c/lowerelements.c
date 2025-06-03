#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	
	int *a,n,i,pos=-1,element;

	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	printf("Enter a number:");
	scanf("%d",&element);

	printf("Elements less than %d are:\n",element);
	for(i=0;i<n;i++)
	
	{

		if(a[i]<element)
		{
			printf("%d ",a[i]);	
		}
	}

	
	return 0;

}