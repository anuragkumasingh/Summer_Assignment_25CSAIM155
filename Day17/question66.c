#include <stdio.h>
int main() {
    int a[50], b[50], n, i, j, k = 0, found;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            b[k] = a[i];
            k++;
        }
    }
    printf("Union of array elements is:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}