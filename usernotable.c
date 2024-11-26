#include<stdio.h>  
int main (){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int prod=n*i;
        printf("%d\n",prod);
    }
    return 0;
}