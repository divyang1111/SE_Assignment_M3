/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15 
*/
#include<stdio.h>
main()
{
	int r,c,i=1;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}
}
