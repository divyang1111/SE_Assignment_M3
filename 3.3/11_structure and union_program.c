// WAP to show difference between Structure and Union. 
#include <stdio.h>


struct DataStruct 
{
    int i;
    float f;
    char str[20];
};


union DataUnion 
{
    int i;
    float f;
    char str[20];
};

int main() 
{
    
    struct DataStruct s;
    union DataUnion u;

    
    s.i = 10;
    s.f = 220.5;
    snprintf(s.str, sizeof(s.str), "Hello");

    
    u.i = 10;
    u.f = 220.5;
    snprintf(u.str, sizeof(u.str), "Hello");

    
    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n\n", sizeof(u));

    
    printf("Structure values:\n");
    printf("s.i = %d\n", s.i);
    printf("s.f = %.2f\n", s.f);
    printf("s.str = %s\n\n", s.str);

   
    printf("Union values (after setting u.str):\n");
    printf("u.i = %d\n", u.i);  
    printf("u.f = %.2f\n", u.f); 
    printf("u.str = %s\n", u.str);

    
    u.i = 10;
    printf("\nUnion values (after setting u.i):\n");
    printf("u.i = %d\n", u.i);
    printf("u.f = %.2f\n", u.f); 
    printf("u.str = %s\n", u.str); 

    
}

