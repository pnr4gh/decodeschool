#include<stdio.h>
int main()
{
	char str[50];
	int i = 0;
	fgets(str,50,stdin);
	while(str[i]!='\0')
	{
		printf("%c ",str[i++]);
	}
	return 0;
}

	
