#include<stdio.h>
int main()
{
    	int n,m,lcm,i;

    	printf("Enter two Numbers: ");
    	scanf("%d %d",&n,&m);

	lcm= (n>m)?n:m;
	
	while(1)
	{
		if(lcm%n==0&&lcm%m==0)
		{
			break;
		}
		lcm++;
	}

	printf("\n LCM is %d",lcm);
	return 0;
}