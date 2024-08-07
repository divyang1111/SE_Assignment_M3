//WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
main()
{
    char str[100];
    char rev_str[100];
    int i;

    printf("Enter a string : ");
    scanf("%s",str);

    int len=strlen(str);
    for(i=0;i<len;i++)
	{
        rev_str[i]=str[len-i-1];
    }
    rev_str[len]='\0';

    printf("\nReversed string : %s\n",rev_str);

    if(strcmp(str,rev_str)==0)
	{
        printf("\n%s is a palindrome.",str);
    }
	else
	{
        printf("\n%s is not a palindrome.",str);
    }
}
