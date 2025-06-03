#include<stdio.h>
int main()
{
	char str[50];
	int i = 0;
	fgets(str,50,stdin);
	while(str[i]!='\0')
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	printf("%s",str);
	return 0;
}

	
