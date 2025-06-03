#include<stdio.h>
int main()
{	
	int i,j,n,num=1,k=1;
	printf("Enter row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%d",num);
				num++;
			}
			else
			{
				printf("%d",num);
				num--;
			}
		}
		num=num+k;
		if(i%2!=0)
		{
			k=k+2;
		}
		printf("\n");
	}
	
	return 0;
}