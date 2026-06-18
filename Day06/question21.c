#include<stdio.h>
int main() {
    int n, binary = 0, place = 1, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 2;
        binary =  binary + rem * place;
        n = n / 2;
        place = place * 10;
    }
    printf("Binary number = %d", binary);
    return 0;
}