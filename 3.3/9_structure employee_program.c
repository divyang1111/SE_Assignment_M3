/* Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age */ 
#include <stdio.h>


struct Employee 
{
    int empno;
    char empname[100];
    char address[200];
    int age;
};


void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() 
{
    
    struct Employee emp;

    
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    getchar();  

    printf("Enter employee name: ");
    fgets(emp.empname, 100, stdin);
   
    int i = 0;
    while (emp.empname[i] != '\0') 
	{
        if (emp.empname[i] == '\n') 
		{
            emp.empname[i] = '\0';
        }
        i++;
    }

    printf("Enter employee address: ");
    fgets(emp.address, 200, stdin);
    
    i = 0;
    while (emp.address[i] != '\0') 
	{
        if (emp.address[i] == '\n') 
		{
            emp.address[i] = '\0';
        }
        i++;
    }

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

   
    printf("\nEmployee Details:\n");
    printEmployee(emp);

   
}

