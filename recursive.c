#include<stdio.h>
int sum(int n);
int main (){
printf("sum is %d",sum(5));
return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int s=sum(n-1);
    int sumN=s+n;
    return sumN;
}