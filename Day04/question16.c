#include<stdio.h>
int main()
{
    int start, end, n, temp, sum=0, d, i;
    printf("enter the start and end range");
    scanf("%d%d", &start, &end);
    for(i=start; i<=end; i++)
    { n = i;
    temp = n;
        while(n>0)
        { 
            d = n % 10;
            sum = sum + d * d * d;
            n = n / 10;
        }
        if(temp == sum)
        {
            printf("%d", temp);
        }
    }
    return 0;
}