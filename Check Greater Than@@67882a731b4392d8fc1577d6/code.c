#include <stdio.h>

int main() {
    int num1, num2;

   
    
    scanf("%d", &num1);
   
    scanf("%d", &num2);

    
    if (num1 > num2) {
        printf(" %d", num1, num2);
    } else {
        printf("%d is not greater than %d\n", num1, num2);
    }

    return 0;
}
