// Write a program you have to make a summation of first and last Digit
#include <stdio.h>

main() 
{
    int num, firstDigit, lastDigit, sum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    lastDigit = num % 10;

    
    firstDigit = num;
    while (firstDigit >= 10) 
	{
        firstDigit /= 10;
    }

    
    sum = firstDigit + lastDigit;

    
    printf("The sum of the first and last digit is: %d\n", sum);

   
}
