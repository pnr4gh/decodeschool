#include<stdio.h>
int main()
{
    	int number, i,flag,j;

    	printf("Enter a Number: ");
    	scanf("%d",&number);

    	printf("Prime Factors of %d: ", number);
    	for(i=2; i <= number/2; ++i)
    	{
        	if (number%i == 0)
        	{
			flag=0;
             		for(j=2; j<=i/2; ++j)
    			{
       
        			if(i%j==0)
        			{
           				flag=1;
					break;	
        			}
			}
			if(flag==0)
			{
				printf("%d ",i);	
			}
		}
   	 }


   
    return 0;
}