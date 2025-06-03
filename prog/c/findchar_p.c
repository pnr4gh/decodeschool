#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str;
	char s;
	int i;
	str=calloc(sizeof(char),50);
	fgets(str,50,stdin);
	scanf("%c",&s);
	
		
	for(i=0;i<strlen(str)-1;i++)
	{
			if(*(str+i)==s)
			{
				printf("character found at %d",i);
				return 0;
			}
		
	}
	printf("character not found");
	return 0;
}

	
