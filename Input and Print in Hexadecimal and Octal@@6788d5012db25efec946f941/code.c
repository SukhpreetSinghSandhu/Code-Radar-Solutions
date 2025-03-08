#include <stdio.h>
int main() {
    int hex, octal;

    scanf("%x", &hex);  
    scanf("%o", &octal); 

    printf("Hexadecimal (Decimal format): %d\n", hex);
    printf("Octal (Decimal format): %d\n", octal);

    return 0;
}
