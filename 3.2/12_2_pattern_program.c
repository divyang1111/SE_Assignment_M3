/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
main()
{
    int n=5,r,c,i;
    
    for(r=0;r<n;r++)
	{
		i=r+1;      
        for (c=0;c<i;c++)
		{
            if(c%2==0)
			{
                printf("1 ");
            }
			else
			{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
