#include<stdio.h>
int main()
{
	int i,j,k,n,step;
	printf("enter row size:");
	scanf("%d",&n);
	step=n;
	for(i=1;i<=n;i++)
	{

		for(j=1;j<=step;j++)
		{
			printf("*");
		}
		step-=1;
		printf("\n");
	}
	return 0;
}