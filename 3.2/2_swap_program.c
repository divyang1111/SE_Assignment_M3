//2  WAP to swap two numbers without using third variable 

#include<stdio.h>
main()

{
    int num1, num2;

   
    printf("\n\t Enter first number: ");
    scanf("%d", &num1);
    printf("\n\t Enter second number: ");
    scanf("%d", &num2);
    printf("\n-----------------------------------------------------------------------------\n");


   
    printf("\n\t *** Original numbers: num1 = %d, num2 = %d *** \n", num1, num2);
    printf("\n-----------------------------------------------------------------------------\n");


    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

   
    printf("\n\t --> Swapped numbers without using third variable: num1 = %d, num2 = %d \n\n", num1, num2);
}

