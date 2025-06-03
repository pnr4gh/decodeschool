#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,min;
	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}

	printf("%d",min);
	return 0;		
}