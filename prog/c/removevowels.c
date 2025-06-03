#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char s[]={'a','e','i','o','u','A','E','I','O','U'};
	int i,j,k,b;
	fgets(str,50,stdin);

		
		for(i=0,j=0;i<strlen(str)-1;i++)
		{
			b=0;
			for(k=0;k<strlen(s);k++)
			{
				if(str[i]==s[k])
				{
					b=1;
					break;	
				}
			}
			if(b==0)
			{
				str[j]=str[i];
				j++;
			}
		
		}
		str[j]='\0';
	
	printf("%s",str);
	return 0;
}

	
