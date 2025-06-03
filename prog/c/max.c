#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,max;
	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}

	printf("%d",max);
	return 0;		
}