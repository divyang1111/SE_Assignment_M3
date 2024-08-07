// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main() 
{
    int number;


	{
		printf("\n\t Enter a number: ");
        scanf("%d", &number);
       
        (number%2==0) ? printf("\n\t --> The number %d is even.\n", number) : printf("\n\t --> The number %d is odd.\n", number);
    }
}
