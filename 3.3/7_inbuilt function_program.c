// WAP Find out length of string without using inbuilt function 
#include <stdio.h>

int stringLength(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    return length;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    
    int i = 0;
    while (str[i] != '\0') 
	{
        if (str[i] == '\n') 
		{
            str[i] = '\0';
        }
        i++;
    }

    printf("Length of the string: %d\n", stringLength(str));
   }

