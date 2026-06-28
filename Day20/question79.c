#include <stdio.h>
int main() {
    int a[10][10], rows, columns, i, j, sum;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Row-wise sum:\n");
    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < columns; j++) {
            sum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }
    return 0;
}