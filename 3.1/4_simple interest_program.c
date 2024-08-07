// WAP to find simple interest 
#include <stdio.h>


float calculateSimpleInterest(float principal, float rate, float time) 
{
    return (principal * rate * time) / 100;
}

int main() 
{
    float principal, rate, time, interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    interest = calculateSimpleInterest(principal, rate, time);

    
    printf("The simple interest is: %.2f\n", interest);

   
}

