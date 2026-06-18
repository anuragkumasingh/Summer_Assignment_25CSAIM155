#include<stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("enter the value of n");
    scanf("%d", &n);
    if (n == 1){
        printf("nth fibonacci term = %d", a);
    }
    else if (n == 2) {
        printf("nth fibonacci term = %d", b);
    }
    else {
        for (i = 3; i<=n; i++){
            c =a + b;
             a = b;
             b = c;
        }
        print("nth fibonacci term = %d", b);
    }
    return 0;
}