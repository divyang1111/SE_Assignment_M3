/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) */
#include<stdio.h>

int add(int, int);
float sub(int, int);
int mul(int, int);
float div(int, int);

main()
{
	int x, y, choice, i;
	float f;
	
	while(1)
	{
	
	printf("\n\n\n\t Enter x : ");
	scanf("%d",&x);
	printf("\n\n\t Enter y : ");
	scanf("%d",&y);
	
	printf("\n\n\n\t -------------------------------");
	printf("\n\n\t 1. Addition ");
	printf("\n\n\t 2. Subtraction ");
	printf("\n\n\t 3. Multiplication ");
	printf("\n\n\t 4. Division ");
	printf("\n\n\t 5. Exit ");
	printf("\n\n\n\t -------------------------------");
	printf("\n\n\n\t Enter choice of operation : ");
	scanf("%d",&choice);
	printf("\n\n\n\t -------------------------------");
	
	switch(choice)
	{
		case 1 : i=add(x, y);
				 printf("\n\n\n\t Addition = %d",i);
				 break;
				 
		case 2 : f=sub(x, y);
				 printf("\n\n\n\t Subtraction = %f",f);
				 break;
				 
		case 3 : i=mul(x, y);
		         printf("\n\n\n\t Multiplication = %d",i);
				 break;
				 
		case 4 : f=div(x, y);
				 printf("\n\n\n\t Division = %f",f);
				 break;
				 
		case 5 : exit(0);
				 break;
		
		default : printf("\n\n\n\t Enter proper choice....");
				 break;
	}
}
}

int add(int a, int b)
{
	return a+b;
}

float sub(int x, int y)
{
	return x-y;
}

int mul(int x, int y)
{
	return x*y;
}

float div(int a, int b)
{
	return a/b;
}
