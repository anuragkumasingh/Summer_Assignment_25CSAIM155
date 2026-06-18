#include<stdio.h>
int sumdigits(int n, int sum);
int main()
{
     int n;
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("Sum of digits: %d", sumdigits(n, 0));
     return 0;
}
int sumdigits(int n, int sum)
{
    if(n == 0)
        return sum;
    return sumdigits(n / 10, sum + (n % 10));
}