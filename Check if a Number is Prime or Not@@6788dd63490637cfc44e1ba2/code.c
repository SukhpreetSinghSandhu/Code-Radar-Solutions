#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    if ( n % 1 == n ){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}