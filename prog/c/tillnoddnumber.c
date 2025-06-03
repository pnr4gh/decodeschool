#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("odd numbers till %d:\n",n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}