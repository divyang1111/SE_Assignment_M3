// WAP to convert years into days and days into years
#include <stdio.h>


int yearsToDays(int years) 
{
    return years * 365;
}

float daysToYears(int days) 
{
    return days / 365.0;
}

int main() 
{
    int choice, years, days;
    float convertedYears;

   
    printf("Select the conversion type:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    switch (choice) 
	{
        case 1:
           
            printf("Enter the number of years: ");
            scanf("%d", &years);
            days = yearsToDays(years);
            printf("%d years is equivalent to %d days.\n", years, days);
            break;
        case 2:
            
            printf("Enter the number of days: ");
            scanf("%d", &days);
            convertedYears = daysToYears(days);
            printf("%d days is equivalent to %.2f years.\n", days, convertedYears);
            break;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
    }

   
}

