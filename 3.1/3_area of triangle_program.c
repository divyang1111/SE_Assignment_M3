//Area of triangle = 1/2*b*h

#include<stdio.h>
main()
{
	float a,b,h;
	
	printf("Enter the base : ");
	scanf("%f",&b);
	
	printf("Enter the height : ");
	scanf("%f",&h);
	
	a=0.5*b*h;
	
	printf("Area of the triangle is %.3f.",a);	
}
