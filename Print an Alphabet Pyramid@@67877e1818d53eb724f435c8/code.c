
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
            int d = 1 + 64;
            char ch = (char)d;
            printf("%c ",ch);
         } 
        printf("\n");
        a = a+2;
    }
    return 0;
}
