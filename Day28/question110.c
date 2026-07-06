#include <stdio.h>
#include <string.h>
struct Account
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct Account acc[100];
    int n = 0, choice, accNo, i, found;
    float amount;
    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &acc[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^
]", acc[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc[n].balance);

                n++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No accounts available.\n");
                }
                else
                {
                    printf("\nAccount Details:\n");
                    printf("Acc No\tName\t\tBalance\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%.2f\n",
                               acc[i].accNo,
                               acc[i].name,
                               acc[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number to Search: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("\nAccount Found!\n");
                        printf("Account Number: %d\n", acc[i].accNo);
                        printf("Name: %s\n", acc[i].name);
                        printf("Balance: %.2f\n", acc[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);

                        acc[i].balance += amount;
                        printf("Deposit Successful!\n");
                        printf("Updated Balance: %.2f\n", acc[i].balance);

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);

                        if (amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %.2f\n", acc[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);
    return 0;
}
