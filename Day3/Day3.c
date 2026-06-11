#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int question9()
{
    int n;
    printf("Question 9: Check if a number is prime\n");
    printf("Enter the number greater than 1: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}

int question10()
{
    int low, high;
    printf("Question 10: List prime numbers in a range\n");
    printf("Enter range low and high: ");
    scanf("%d%d", &low, &high);
    printf("Prime numbers between %d and %d are:\n", low, high);
    for (int i = low; i <= high; i++)
    {
        if (isPrime(i))
            printf("%d\n", i);
    }
    return 0;
}

int question11()
{
    int a, b;
    printf("Question 11: Compute GCD of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int x = a, y = b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("GCD = %d\n", x);
    return 0;
}

int question12()
{
    int a, b;
    printf("Question 12: Compute LCM of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int x = a, y = b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;
    int lcm = (a / gcd) * b;
    printf("LCM = %d\n", lcm);
    return 0;
}

int main()
{
    int choice;
    printf("Day 3 Combined Questions\n");
    printf("Choose question number (9-12): ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 9:
            return question9();
        case 10:
            return question10();
        case 11:
            return question11();
        case 12:
            return question12();
        default:
            printf("Invalid choice. Please enter 9, 10, 11, or 12.\n");
            return 1;
    }
}
