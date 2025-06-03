#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int i;
	fgets(str1,50,stdin);
	fgets(str2,50,stdin);
	if(strlen(str1)==strlen(str2))
	{	
		for(i=0;i<strlen(str1)-1;i++)
		{
			if(str2[i]!=str1[i])
			{
				printf("not equal");
				return 0;	
			}
			
		}
	}
	else
	{
		printf("not equal");
		return 0;
	}
		
	printf("Both the strings are equal");
	return 0;
}

	
