#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char s;
	int i;
	fgets(str,50,stdin);
	scanf("%c",&s);
	
		
	for(i=0;i<strlen(str)-1;i++)
	{
			if(str[i]==s)
			{
				printf("character found at %d",i);
				return 0;
			}
		
	}
	printf("character not found");
	return 0;
}

	
