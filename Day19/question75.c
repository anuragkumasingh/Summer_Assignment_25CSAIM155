#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10],rows, columns, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
    for(j = 0; j < columns; j++)
        {
        transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(i = 0; i < columns; i++)
    {
    for(j = 0; j < rows; j++)
        {
        printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}