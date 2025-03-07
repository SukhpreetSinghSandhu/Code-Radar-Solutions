#include<stdio.h>
int main(){
    
    char ch;
    int d;
    scanf("%c",&ch);
    scanf("%d",&d);
    if ( ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'){
        printf("Vowel");
    }
    else if (( ch >='b' && ch <= 'z') && (ch != 'a' || ch !='e'||ch !='i'||ch !='o'||ch !='u')){
        printf("Consonant");
    }
    else if ( d >=0 && d <= 9){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    
    return 0;
}