#include<stdio.h>
int main()
{
	int n,num=1,i,j,k,l,space=0,m=1,number;
	printf("Enter row size:");
	scanf("%d",&n);
	number=n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf("-");
		}
		for(k=1;k<2*n-space;k++)
		{
			if(k%2==0)
				printf("%s","*");
			else
				printf("%d",num++);
		}
		printf("%s","*");
		for(l=1;l<2*n-space;l++)
		{
			if(l%2==0)
				printf("%s","*");
			else
			{
				printf("%d",m+number*number);
				m++;
			}
		}
		number--;

		space=space+2;
		printf("\n");
	}
	return 0;
}