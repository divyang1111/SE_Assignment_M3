// WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>


void reverseString(char str[], int start, int end) 
{
    char temp;
    if (start >= end)
        return;

   
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

   
    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];

    
    printf("Enter a string: ");
    gets(str);

   
    int length = strlen(str);

    
    reverseString(str, 0, length - 1);

   
    printf("Reversed string is: %s\n", str);

   
}

