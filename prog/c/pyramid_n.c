#include<stdio.h>
int main()
{
	int i,j,n,k,step=1,num;
	printf("enter row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=1;
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=step;j++)
		{
			printf("%d",num);
			if(j<i)
			{
				num++;
			}
			else
			{
				num--;
			}
			
		}

		step+=2;
		printf("\n");
	}
	return 0;
}