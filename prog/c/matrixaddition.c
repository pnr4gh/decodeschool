#include<stdio.h>
int main(){
	
	int r,c;
	printf("Enter row size and Coloumn size");
	scanf("%d %d",&r,&c);
	int a[r][c],b[r][c],sum[r][c],i,j;
  	
	printf("Enter the First matrix");
  		for(i=0;i<r;i++)
      			for(j=0;j<c;j++)
           			scanf("%d",&a[i][j]);
  	
	printf("\nEnter the Second matrix");
  		for(i=0;i<r;i++)
      			for(j=0;j<c;j++)
           			scanf("%d",&b[i][j]);
  	
	printf("\nThe First matrix is\n");
  		for(i=0;i<r;i++)
		{
      			printf("\n");
      			for(j=0;j<c;j++)
           			printf("%d\t",a[i][j]);
 		 }
  	
	printf("\nThe Second matrix is\n");
  	for(i=0;i<r;i++)
	{
      		printf("\n");
      		for(j=0;j<c;j++)
      			printf("%d\t",b[i][j]);
   	}
   
	for(i=0;i<r;i++)
       		for(j=0;j<c;j++)
            		sum[i][j]=a[i][j]+b[i][j];
   	
	printf("\nThe Addition of two matrix is\n");
   	for(i=0;i<r;i++)
	{
       		printf("\n");
       		for(j=0;j<c;j++)
            		printf("%d\t",sum[i][j]);
   	}
   return 0;
}
