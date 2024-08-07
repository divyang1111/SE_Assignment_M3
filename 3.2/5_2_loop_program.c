// WAP to take 10 no. Input from user and find out 
#include <stdio.h>

int main() 
{
    int numbers[10];
    int i;

   
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    printf("\nThe numbers you entered are:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("%d ", numbers[i]);
    }

   
}
