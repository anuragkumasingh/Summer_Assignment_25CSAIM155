#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};
int main()
{
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^
]", emp.name);
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);
    emp.hra = emp.basicSalary * 0.20; 
    emp.da = emp.basicSalary * 0.10;  
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basicSalary);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Gross Salary  : %.2f\n", emp.grossSalary);
    return 0;
}
