#include<stdio.h>
#include <math.h>
int main() {
long long binary;
int decimal = 0, base = 1, rem;
printf("Enter a binary number: ");
scanf("%lld", &binary);
while (binary > 0) {
rem = binary % 10;
decimal = decimal + rem * base;
binary = binary / 10 ;
}
printf("decimal number = %d", decimal);
return 0;
}