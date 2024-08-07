/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include<stdio.h>
main()
{
	int r,c,i=5,s;
	
	for(r=0;r<i;r++)
	{
		for(c=0;c<2*(i-r);c++)
		{
			printf(" ");
		}
		for(s=0;s<2*r+1;s++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
