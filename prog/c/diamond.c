#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n,step=1;
	printf("enter row size:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{

		for(k=1;k<=abs(n-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=step;j++)
		{
			printf("*");
		}
		

		if(i<n)
		{
			step+=2;
		}
		else
		{	
			step-=2;
		}
		printf("\n");
	}
	return 0;
}