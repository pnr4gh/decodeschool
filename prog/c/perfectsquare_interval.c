# include <stdio.h>
# include <math.h> 
int main() 
{ 
	 int m, n,start,stop; 
	 float p ; 
  
	printf("Enter two numbers : ") ; 
 	scanf("%d %d", &start,&stop) ; 
 	
	for(n=start;n<=stop;n++)
	{
		p = sqrt(n) ; 
 		m = p ; 
 		if (p == m) 
  			printf("%d ", n) ; 
 		  		
	}
	
 	return 0;
} 