/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
and age
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address and age */

#include <stdio.h>

typedef struct {
    int empno;
    char empname[50];
    char address[100];
    int age;
} Employee;

void print_employee(Employee emp) 
{
    printf("Employee No : %d\n",emp.empno);
    printf("Employee Name : %s\n",emp.empname);
    printf("Address : %s\n",emp.address);
    printf("Age: %d",emp.age);
}

main() 
{
    Employee employees[5] = 
	{
        {1, "John Doe", "123 Main St", 30},
        {2, "Jane Smith", "456 Elm St", 25},
        {3, "Bob Johnson", "789 Oak St", 40},
        {4, "Alice Brown", "321 Maple St", 35},
        {5, "Mike Davis", "901 Pine St", 45}
    };

	int i;
    for(i=0;i<5;i++) 
	{
        printf("\nEmployee %d\n",i+1);
        printf("----------------------\n");
        print_employee(employees[i]);
        printf("\n");
    }
}
