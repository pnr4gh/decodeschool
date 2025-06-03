#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j;
	fgets(str,50,stdin);

		
		for(i=0,j=0;i<strlen(str);i++)
		{
			if(str[i]!=' ')
			{
				str[j]=str[i];
				j++;	
			}
			
		}
		str[j]='\0';
	
	printf("%s",str);
	return 0;
}

	
