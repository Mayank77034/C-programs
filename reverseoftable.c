#include<stdio.h> 
int main (){
    int n;
    int tab=n;
    printf("enter a value of n :");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
     tab=n*i;
    
    printf("table of n is %d",tab);
    }
}