#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_digits(n / 10);
}

int reverse_number(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse_number(n / 10, rev * 10 + n % 10);
}

int main() {
    int choice;
    printf("Select question to run:\n");
    printf("25. Factorial\n");
    printf("26. Fibonacci\n");
    printf("27. Sum of digits\n");
    printf("28. Reverse number\n");
    printf("Enter choice (25-28): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice == 25) {
        int n;
        printf("Enter value of n: ");
        scanf("%d", &n);
        printf("Factorial of %d = %d\n", n, factorial(n));
    } else if (choice == 26) {
        int n;
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        printf("Fibonacci series: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    } else if (choice == 27) {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Sum of digits = %d\n", sum_digits(n));
    } else if (choice == 28) {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Reversed number = %d\n", reverse_number(n, 0));
    } else {
        printf("Invalid choice. Please enter 25, 26, 27, or 28.\n");
    }

    return 0;
}

