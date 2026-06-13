#include<stdio.h>
int main()
{
   long int n, i, largest = 0;
   printf("enter a number");
   scanf("%ld", &n);
   for( i = 1; i <= n; i++)
   {
    while(n % i == 0)
    {
        largest = i;
        n = n / i;

    }
   }
   printf("largest prime factor is %ld", largest);
   return 0; 
}