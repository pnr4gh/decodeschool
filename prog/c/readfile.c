#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    char content[1000];
   
    
    fptr = fopen("sample.txt", "r");
    if (fptr == NULL)
    {
       printf("Cannot open file \n");
       return 0;
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}