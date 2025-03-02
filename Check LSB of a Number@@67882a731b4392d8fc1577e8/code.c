#include<stdio.h>
int main()    {
    
    int num1;
    scanf("%d",&num1);
    if (num1 & (1<<0)){
        print("Set");
    }
    else{
        print("Not Set");
    }

    
    return 0;
}