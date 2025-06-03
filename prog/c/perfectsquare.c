# include <stdio.h>
# include <math.h> 
int main() 
{ 
	int m, n ; 
	float p ; 
  
	printf("Enter a number : ") ; 
 	scanf("%d", &n) ; 
 	p = sqrt(n) ; 
 	m = p ; 
 	if (p == m) 
  		printf("\n%d is a perfect square", n) ; 
 	else 
  		printf("\n%d is not a perfect square", n) ; 
 	return 0;
} 