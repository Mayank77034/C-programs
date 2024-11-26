#include<stdio.h>
int fact(int n);
int main (){
    printf("factorial is %d",fact(5));
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    int facto = fact(n-1);
    int fac=facto*n;
    return fac;
}