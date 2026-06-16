#include <stdio.h>

void question29(void) {
    int row, i, j;
    printf("Enter the number of rows for question 29: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void question30(void) {
    int row, i, j;
    printf("Enter the number of rows for question 30: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void question31(void) {
    int row, i, j;
    printf("Enter the number of rows for question 31: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", (j + 64));
        }
        printf("\n");
    }
}

void question32(void) {
    int row, i, j;
    printf("Enter the number of rows for question 32: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main(void) {
    int choice;
    printf("Choose a question to run (29-32):\n");
    printf("  29 - Star pattern\n");
    printf("  30 - Number pattern\n");
    printf("  31 - Alphabet pattern\n");
    printf("  32 - Row number pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 29:
            question29();
            break;
        case 30:
            question30();
            break;
        case 31:
            question31();
            break;
        case 32:
            question32();
            break;
        default:
            printf("Invalid choice. Please run the program again and choose 29, 30, 31, or 32.\n");
            break;
    }
    return 0;
}
