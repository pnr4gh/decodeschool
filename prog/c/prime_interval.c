#include <stdio.h>
int main()
{
	int number, i, flag,start,stop;

    	printf("Enter two Numbers: ");
    	scanf("%d %d",&start,&stop);
	printf("Prime between %d and %d are:\n",start,stop);

    	for(number=start;number<=stop;number++)
	{
		flag=0;
		for(i=2; i<=number/2; ++i)
    		{
       
        		if(number%i==0)
        		{
            			flag=1;
				break;
        		}
    		}
		if(flag==0)
		{
			  printf("%d ",number);
		}
	}

  
             
    return 0;
}