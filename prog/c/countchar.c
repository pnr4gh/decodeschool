#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char s,count=0;
	int i;
	fgets(str,50,stdin);
	scanf("%c",&s);
	
		
	for(i=0;i<strlen(str)-1;i++)
	{
			if(str[i]==s)
			{
				count++;
			}
		
	}
	printf("%c occured %d times",s,count);
	return 0;
}

	
