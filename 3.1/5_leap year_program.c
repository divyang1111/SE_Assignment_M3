// WAP to check if the given year is a leap year or not
#include <stdio.h>


int isLeapYear(int year) 
{
    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0) 
			{
                return 1; 
            } else 
			{
                return 0; 
            }
        } else 
		{
            return 1; 
        }
    } else 
	{
        return 0; 
    }
}

main() 
{
    int year;

    
    printf("Enter a year: ");
    scanf("%d", &year);

    
    if (isLeapYear(year)) 
	{
        printf("%d is a leap year.\n", year);
    } else 
	{
        printf("%d is not a leap year.\n", year);
    }

   
}

