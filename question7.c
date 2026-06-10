#include<stdio.h>
int main()
{
    int n,digit,product=1;
    printf("Enter numbers: ");
    scanf("%d", &n);
    while(n>0){
        digit=n%10;
        product*=digit;
        n /=10;
    }
    printf(" product = %d", product);
    return 0;
}