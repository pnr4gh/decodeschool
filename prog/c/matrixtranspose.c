#include <stdio.h>

int main()
{
    	int  r, c, i, j;
    	printf("Enter rows and columns of matrix: ");
    	scanf("%d %d", &r, &c);

    	int a[r][c],transpose[c][r];
    
	printf("\nEnter elements of matrix:\n");
    	for(i=0; i<r; ++i)
        	for(j=0; j<c; ++j)
        	{
            		scanf("%d", &a[i][j]);
        	}

    
    	printf("\nEntered Matrix: \n");
    	for(i=0; i<r; ++i)
        	for(j=0; j<c; ++j)
        	{
            		printf("%d  ", a[i][j]);
            		if (j == c-1)
                		printf("\n");
        	}

    
    	for(i=0; i<r; ++i)
        	for(j=0; j<c; ++j)
        	{
            		transpose[j][i] = a[i][j];
        	}

   
    	printf("\nTranspose of Matrix:\n");
    	for(i=0; i<c; ++i)
        	for(j=0; j<r; ++j)
        	{
            		printf("%d  ",transpose[i][j]);
            		if(j==r-1)
                		printf("\n");
        	}

    	return 0;
}