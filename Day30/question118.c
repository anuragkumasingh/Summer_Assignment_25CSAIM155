#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};
int main()
{
    struct Book b[100];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);

        b[i].issued = 0;
    }

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%-15s%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author,
                           b[i].issued ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("\nBook Found\n");
                        printf("ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                        printf("Status: %s\n",
                               b[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");
                break;

            case 3:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("Book Issued Successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");
                break;

            case 4:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued == 1)
                        {
                            b[i].issued = 0;
                            printf("Book Returned Successfully.\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 5);
    return 0;
}