// WAP to find factorial using recursion
#include <stdio.h>


unsigned long long factorial(int n) 
{
    if (n == 0) 
	{
        return 1; 
    } else 
	{
        return n * factorial(n - 1); 
    }
}

int main() {
    int num;

    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    
    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        unsigned long long result = factorial(num);

        
        printf("The factorial of %d is: %llu\n", num, result);
    }

    
}

