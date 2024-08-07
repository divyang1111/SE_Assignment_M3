// WAP to print factorial of given number
#include <stdio.h>

main() 
{
    int num;
    unsigned long long factorial = 1; 
    int i;

    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

   
    for(i = 1; i <= num; i++) 
	{
        factorial *= i;
    }

   
    printf("Factorial of %d is: %llu\n", num, factorial);

    
}
