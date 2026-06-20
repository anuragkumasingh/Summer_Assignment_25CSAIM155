#include<stdio.h>
int armstrong(int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}