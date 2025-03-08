#include <stdio.h>
int main() {
    int hex, octal;

    scanf("%x", &hex);  
    scanf("%o", &octal); 

    printf("Hexadecimal : %d\n", hex);
    printf("Octal: %d\n", octal);

    return 0;
}
