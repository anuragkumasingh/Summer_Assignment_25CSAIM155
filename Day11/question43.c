#include <stdio.h>

int prime(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(prime(num))
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);

    return 0;
}