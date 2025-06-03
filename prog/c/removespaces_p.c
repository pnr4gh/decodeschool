#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str;
	int i,j;
	str=calloc(sizeof(char),50);
	fgets(str,50,stdin);

		
		for(i=0,j=0;i<strlen(str)-1;i++)
		{
			if(*(str+i)!=' ')
			{
				*(str+j)=*(str+i);
				j++;	
			}
			
		}
		str[j]='\0';
	
	printf("%s",str);
	return 0;
}

	
