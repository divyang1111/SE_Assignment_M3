// How many odd numbers are there 
#include <stdio.h>

main() 
{
    int numbers[10];
    int i;
    int odd_count = 0;

   
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for(i = 0; i < 10; i++) 
	{
        if(numbers[i] % 2 != 0) 
		{
            odd_count++;
        }
    }

   
    printf("\nThe number of odd numbers entered is: %d\n", odd_count);

    
}

