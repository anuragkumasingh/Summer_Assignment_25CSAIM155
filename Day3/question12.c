#include <stdio.h>

int main()
{
    int a, b;
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
