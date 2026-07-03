#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Common characters: ");
    for (i = 0; i < strlen(str); i++) {
        int printed = 0;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                printed = 1;
                break;
            }
        }
        if (printed)
            continue;
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                printf("%c ", str[i]);
                break;
            }
        }
    }
    return 0;
}
