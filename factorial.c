#include<stdio.h> 
int main (){
    int n;
    printf("enter a value of n :");
    scanf("%d",&n);
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("the factorial is %d",fact);
    return 0;
}