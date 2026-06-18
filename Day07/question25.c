#include<stdio.h>
int fact(int);
int main()
{
int result, n;
printf("enter value of n: ");
scanf("%d", &n);
result = fact(n);
printf("%d", result);
}
int fact(int n)
{if(n == 0)
return 1;
else
return = n * fact(n - 1);
}