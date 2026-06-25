#include <stdio.h>
int main() {
    int a[50], b[50], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("Merged array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}