// Write a program make a summation of given number
#include <stdio.h>

main() 
{
    int n, i, num, sum = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    for (i = 0; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }

    
    printf("The sum of the numbers is: %d\n", sum);

    
}
