#include<stdio.h>
 int main (){
    int n,sum=0;
    printf("enter a value of n:");
    scanf("%d",&n);
    for(int j=n,i=1;i<=n && j>=1;i++,j--){
        sum =sum+i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);
    

    return 0;
 }