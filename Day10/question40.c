#include<stdio.h>
int main()
{
    int i, j, row, space;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(space=1; space<=row-i; space++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("%c", 'A' + j);
        }
        for(j=i-2; j>=0; j--)
        {
            printf("%c", 'A' + j );
        }
        printf("\n");
    }
    return 0;
}