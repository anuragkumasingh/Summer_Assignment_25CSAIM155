#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};
int main()
{
    struct Employee emp[100];
    int n, i, choice, id, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Update Employee Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tName\t\tDepartment\tSalary\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%-15s%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].department,
                           emp[i].salary);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].department);
                        printf("Salary: %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);
                        printf("Salary Updated Successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
    return 0;
}