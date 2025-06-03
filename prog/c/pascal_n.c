#include<stdio.h>
int main()
{	
	int i,j,n,k,num=1;
	printf("Enter row size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			if (k==0||i==0)
                		num = 1;
            		else
                		num = num*(i-k+1)/k;

            		printf("%4d",num);
		}
		
		printf("\n");
	}
	return 0;
}