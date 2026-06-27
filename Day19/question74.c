#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sub[10][10],rows, columns, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        sub[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("difference of the matrices:\n");
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}