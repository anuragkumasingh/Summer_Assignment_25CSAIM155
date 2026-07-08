#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int n, i, choice, roll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n----- Student Record System -----\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Update Student Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");
                printf("Roll\tName\t\tMarks\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 2:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nRecord Found:\n");
                        printf("Roll Number: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found.\n");
                break;

            case 3:
                printf("Enter Roll Number to Update Marks: ");
                scanf("%d", &roll);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);
                        printf("Marks Updated Successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);
    return 0;
}