#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n,step=1;
	printf("enter row size:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=step;j++)
		{
			printf("*");
		}

		for(k=1;k<=2*abs((n-i))-1;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=step;j++)
		{
			if(j!=n)
			printf("*");
		}

		if(i<n)
		{
			step+=1;
		}
		else
		{
			step-=1;
		}
		
		printf("\n");
	}
	return 0;
}