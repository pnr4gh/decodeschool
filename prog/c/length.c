#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],temp;
	int i = 0;
	fgets(str,50,stdin);
	while(str[i]!='\0'&&str[i]!='\n')
	{
		i++;
		
	}
	printf("%d",i);
	return 0;
}

	
