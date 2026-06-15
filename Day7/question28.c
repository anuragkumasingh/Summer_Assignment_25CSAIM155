#include<stdio.h>
int reverse(int n, int rev)
int main()
{ int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("Reversed number = %d", reverse(n, 0));
    return 0;
}
int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    else
        return reverse(n / 10, rev * 10 + n % 10);
}