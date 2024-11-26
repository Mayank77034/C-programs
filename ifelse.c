#include<stdio.h>
int main (){
    int age ;
    printf("enter a age");
    scanf("%d",&age);
    if (age>=18){
        printf("you are adult\n");
        printf("you can drive\n");  //these multiple statement called block in c 
        printf("you can vote\n");
    }
    else if (age>13&&age<18){
        printf("teenager\n");
    }
    else {
        printf("you are not an adult");
    }
    printf("thank you");
    return 0;
}