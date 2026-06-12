#include<stdio.h>
int main()
{
    int n, s=0, d, temp;
    printf("enter the number:");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        d = n % 10;
        s = s + d * d * d;
        n = n / 10; }
        if (s == temp)
        { printf("no. is armstrong");
        }
        else{
            printf("no. is not armstrong");
        }
        return 0;
}