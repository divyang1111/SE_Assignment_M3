//Write a program to make Simple calculator for modulo

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Input number a :");
	scanf("%d",&a);
	
	printf("Input number b :");
	scanf("%d",&b);
	
	c=a%b;
	
	printf("%d modulo is %d = %d",a,b,c);
}
