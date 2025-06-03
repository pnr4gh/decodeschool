#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char s[]={'a','e','i','o','u','A','E','I','O','U'};
	int i,j,count=0;
	fgets(str,50,stdin);
		
	for(i=0;i<strlen(str)-1;i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			if(str[i]==s[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d vowels",count);
	return 0;
}

	
