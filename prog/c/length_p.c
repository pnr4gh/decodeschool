#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str,temp;
	int i = 0;
	str=calloc(sizeof(char),50);
	fgets(str,50,stdin);
	while(*(str+i)!='\0'&& *(str+i)!='\n')
	{
		i++;
		
	}
	printf("%d",i);
	return 0;
}

	
