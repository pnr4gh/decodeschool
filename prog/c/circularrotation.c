#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,j,m,temp;
	printf("Enter size of array:");
	scanf("%d",&n);

	a=malloc(sizeof(int)*n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter number of rotations:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		temp=a[0];
		for(j=1;j<n;j++)
		{
			a[j-1]=a[j];
		}
		a[n-1]=temp;
	}
	printf("After %d rotations:\n",m);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}