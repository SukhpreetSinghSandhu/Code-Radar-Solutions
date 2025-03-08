#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int product = 1;
    for(int i = 1;i<=10;i++){
        product = n *i;
        printf("%d",product);

    }
    //printf("%d X %d = %d\n", n, i, n * i);
    
    return 0;
}