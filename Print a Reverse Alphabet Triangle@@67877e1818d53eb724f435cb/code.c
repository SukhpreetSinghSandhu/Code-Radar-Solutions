#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for(int j = 1;j<=n+1-i;j++){
            int d = 1 + 64;
            char ch = (char)d
            printf("%c", ch );
        }
        printf("\n");
    }
    
    return 0;
}