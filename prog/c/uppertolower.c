#include<stdio.h>
int main()
{
	char str[50];
	int i = 0;
	fgets(str,50,stdin);
	while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	printf("%s",str);
	return 0;
}

	
