#include<stdio.h>
void printtable(int n);
int main (){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    printtable(n);//arguement/actual parameter
    return 0;
}
void printtable(int n){ //parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
