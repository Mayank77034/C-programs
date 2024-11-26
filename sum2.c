#include<stdio.h> 
int sum(int a,int b);
int main (){
    int a;
    int b;
printf("enter a value of a :");
scanf("%d",&a);
printf("enter a value of b:");
scanf("%d",&b);
int s=sum(a,b);
printf("sum is %d",s);
return 0;
}
int sum(int a,int b){
    return a+b;
}