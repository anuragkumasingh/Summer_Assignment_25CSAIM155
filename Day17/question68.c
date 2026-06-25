#include <stdio.h>
int main() {
    int a[50], b[50], n, i, j, k = 0, found, already;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        found = 0;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if(found == 1) {
            already = 0;
            for(j = 0; j < k; j++) {
                if(b[j] == a[i]) {
                    already = 1;
                    break;
                }
            }
            if(already == 0) {
                b[k] = a[i];
                k++;
            }
        }
    }
    printf("Common elements are:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}