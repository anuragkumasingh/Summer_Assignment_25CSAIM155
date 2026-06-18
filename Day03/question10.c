#include <stdio.h>

int main()
{
    int low, high;
    printf("Enter range low and high: ");
    scanf("%d%d", &low, &high);
    printf("Prime numbers between %d and %d are:\n", low, high);
    for (int i = low; i <= high; i++)
    {
        int isPrime = 1;
        if (i <= 1)
            isPrime = 0;
        for (int j = 2; j <= i / 2 && isPrime; j++)
        {
            if (i % j == 0)
                isPrime = 0;
        }
        if (isPrime)
            printf("%d\n", i);
    }
    return 0;
}
