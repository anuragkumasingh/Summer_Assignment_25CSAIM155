#include <stdio.h>
int main() {
    int arr[100], n = 0, i, choice, value, pos, found;
    do {
        printf("\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Update Element\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array Elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter element to search: ");
                    scanf("%d", &value);

                    found = 0;
                    for (i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            printf("Element found at position %d\n", i + 1);
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("Element not found.\n");
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter position to update (1-%d): ", n);
                    scanf("%d", &pos);

                    if (pos >= 1 && pos <= n) {
                        printf("Enter new value: ");
                        scanf("%d", &arr[pos - 1]);
                        printf("Element updated successfully.\n");
                    } else {
                        printf("Invalid position.\n");
                    }
                }
                break;

            case 5:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Enter position to delete (1-%d): ", n);
                    scanf("%d", &pos);

                    if (pos >= 1 && pos <= n) {
                        for (i = pos - 1; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        printf("Element deleted successfully.\n");
                    } else {
                        printf("Invalid position.\n");
                    }
                }
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);
    return 0;
}