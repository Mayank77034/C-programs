#include<stdio.h> 
int main (){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    int i=5;
    while(n<=i){
        printf("%d\n",i);
        i--;
    }
    return 0;
}