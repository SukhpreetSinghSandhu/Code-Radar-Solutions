#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int a = 1;
    for( int i=1;i<=n;i++){
        for(int k = 1;k<=n-i;k++) {
            printf(" ");
        }
        for(int j = 1;j<=a;j++){
            printf("*");
        } 
        a = a + 1;
        printf("\n");
    }
    
    return 0;
}