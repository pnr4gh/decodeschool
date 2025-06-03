#include <stdio.h>
int main()
{
    int number, i;

    printf("Enter a Number: ");
    scanf("%d",&number);

    for(i=2; i<=number/2; ++i)
    {
       
        if(number%i==0)
        {
            printf("%d is not a prime number.",number);
            return 0;
        }
    }


    printf("%d is a prime number.",number);
             
    return 0;
}