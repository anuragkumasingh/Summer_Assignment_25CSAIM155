#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter the number greater than 1: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}
