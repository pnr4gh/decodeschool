#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,*c,n,m,i,j;
	printf("Enter the sizes of two arrays:");
	scanf("%d %d",&n,&m);
	a=malloc(sizeof(int)*n);
	b=malloc(sizeof(int)*m);
	c=malloc(sizeof(int)*(n+m));
	printf("Enter %d elements for first array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d elements for Second array:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	for(j=0;j<n;j++)
	{
		c[i]=a[j];
		i++;
	}
	for(j=0;j<m;j++)
	{
		c[i]=b[j];
		i++;
	}
	printf("After Merging:");
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}