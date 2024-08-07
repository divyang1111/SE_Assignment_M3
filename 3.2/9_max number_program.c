// Write a program to find out the max from given number
#include <stdio.h>

main() 
{
    int n, i, num, max;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    if (n <= 0) 
	{
        printf("Please enter a positive number of elements.\n");
        return 1;
    }

    
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;

    
    for (i = 1; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > max) 
		{
            max = num;
        }
    }

    
    printf("The maximum number is: %d\n", max);

    
}
