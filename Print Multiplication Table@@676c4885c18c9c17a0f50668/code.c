#include<stdio.h>
int main(){
    
    int n;
    int product = 1;
    for(int i = 1;i<=n;i++){
        product = product * i;
    }
    printf("%d",product);
    return 0;
}