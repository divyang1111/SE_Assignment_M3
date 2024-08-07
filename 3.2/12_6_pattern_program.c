/*
A
A B
A B C
A B C D
A B C D E

*/
#include<stdio.h>
main()
{
    int n=5,r,c;

    for(r=0;r<n;r++)
	{
        for(c=0;c<=r;c++)
		{
            printf("%c ",'A'+c);
        }
        printf("\n");
    }
}
