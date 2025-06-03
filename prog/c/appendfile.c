#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    char content[1000];
   
    
    fptr = fopen("sample.txt", "a");
    if (fptr == NULL)
    {
       printf("Cannot open file \n");
       return 0;
    }
    scanf("%[^\t]s",content);
    fprintf(fptr,"%s",content);
    fclose(fptr);
    return 0;
}