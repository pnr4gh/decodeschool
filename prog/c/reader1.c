#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    DIR *d;
    struct dirent *dir;
    FILE *fptr;
    char ch;
    char content[100000];


    d = opendir("E:/test");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
        	
	    	fptr = fopen(dir->d_name, "r");
		if (fptr != NULL)
    		{
			printf("%s\n", dir->d_name);
       			ch = fgetc(fptr);
    			while (ch != EOF)
    			{
        			printf ("%c", ch);
        			ch = fgetc(fptr);
    			}
			printf("\n\n");
    			fclose(fptr);
        	}
		
        }
        closedir(d);
    }
    return(0);
}