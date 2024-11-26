#include<stdio.h>
int main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    switch(n){
        case 1:{
            printf("monday");
            break;
        }
        case 2:{
            printf("tuesday");
            break;
        }
        case 3:{
            printf("wednesay");
            break;
        }
    }
    return 0;
}