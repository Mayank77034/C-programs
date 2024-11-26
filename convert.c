#include<stdio.h>
int celsius(int n);
int main(){
    printf("farenheit of n is %d",celsius(32));
    return 0;
}
int celsius(int n){
    int h = n*9/5;
    int i = h+32;
    return i;
}