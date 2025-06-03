#include<stdio.h>


#include<stdlib.h>
int main(void)

{
	
	int n,i,*a;

	printf("Enter size of array:");
	scanf("%d",&n);

	a=calloc(sizeof(int),n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)

	{

		scanf("%d",a+i);

	}

	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	
	{

		printf("%d ",*(a+i));

	}
	
	return 0;

}
