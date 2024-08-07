/*
*
* *
* * *
* * * * 
* * * * * 
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<stdio.h>
main()
{
	int r, c;
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf("* ");
			c++;
		}
		
		printf("\n");
		r++;
	}
		r=1;
while(r<=5)
	{
		c=4;
		while(c>=r)
		{
			printf("* ");
			c--;
		}
		
		printf("\n");
		r++;
	}
}
