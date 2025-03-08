#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    
    if (n % 2 == 0) {
        printf("");
        return 1;
    }

    int nsp = n / 2; 
    int nst = 1;    
    int ml = (n / 2 + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }
        printf("\n"); 
       
        if (i < ml) {
            nsp--;  
            nst += 2; 
        } else {
            nsp++;  
            nst -= 2; 
        }
    }

    return 0;
}
