// Sum of odd numbers
#include <stdio.h>

main() 
{
    int numbers[10];
    int i;
    int sum_odd = 0;

   
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
            sum_odd += numbers[i];
        }
    }

   
    printf("\nThe sum of the odd numbers entered is: %d\n", sum_odd);

  
}
