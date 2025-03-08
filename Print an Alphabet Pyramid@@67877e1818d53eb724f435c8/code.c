
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            char ch = (char)(j + 64); // Convert 1 → 'A', 2 → 'B', etc.
            printf("%c", ch);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

