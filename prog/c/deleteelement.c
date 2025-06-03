#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,element;
	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a Element to delete:");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			while(i<n-1)	
			{
				a[i]=a[i+1];
				i++;
			}
			a[i]=0;
		}
	}
	printf("After deleting %d:",element);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
				
}