// WAP to find area of circle
#include <stdio.h>
#define PI 3.14159


float calculateArea(float radius) 
{
    return PI * radius * radius;
}

int main() 
{
    float radius, area;

   
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = calculateArea(radius);

   
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

   
}

