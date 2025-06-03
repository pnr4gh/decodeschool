#include<stdio.h>
int main()
{	
	int i,j,n,num=1,l;
	printf("Enter row size:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}

	l=2*n-1;
	for(i=1;i<n;i++)
	{
		num=num-l;
		for(j=1;j<=n-i;j++)
		{
			printf("%d",num);
			num++;
		}
	
		l=l-2;
		printf("\n");
	}
	return 0;
}