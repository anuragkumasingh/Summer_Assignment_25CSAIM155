#include <stdio.h>
int main() {
    int choice, pin = 1234, enteredPin;
    float balance = 10000.0, amount;
    printf("===== ATM Simulation =====\n");
    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin != pin) {
        printf("Incorrect PIN!\n");
        return 0;
    }
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Available Balance = %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful!\n");
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 4);
    return 0;
}
