#include<stdio.h>
int main()
{	
	int i,j,n,num=1;
	printf("Enter row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",num+1);
		}
		for(j=1;j<=n;j++)
		{
			printf("%d",num);
		}
		if(i%2!=0)
		{
			printf("%d",num+1);
		}
		num++;
		printf("\n");
	}
	return 0;
}