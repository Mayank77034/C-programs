#include<stdio.h>
int main(){
 int a=0;
 int b=1;
 int temp=0;
 printf("0, 1, ");
 for(int i=0; i<=10; i++){
     temp=a+b;
     a=b;
     b=temp;
     printf("%d, ",temp);
 }
}