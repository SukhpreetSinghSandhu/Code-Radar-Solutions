#include<stdio.h>
int main(){
    
    char ch;
    scanf("%c",&ch);
    if (ch == 97){
        printf("Uppercase");
    }
    else if(ch == 65){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    
    return 0;
}