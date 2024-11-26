#include<stdio.h>
int main (){
    int age;
    printf("enter a age :");
    scanf("%d",&age);
    age>=18 ? printf("adult\n"):printf("not an adult");
    return 0;
}