#include<stdio.h> 
int main (){
    int marks[3];
    printf("enter the marks of physics:");
    scanf("%d",&marks[0]);
    printf("enter the marks of chem:");
    scanf("%d",&marks[1]);
    printf("enter the marks of bio:");
    scanf("%d",&marks[2]);
    printf("physics = %d,chem = %d,bio = %d",marks[0],marks[1],marks[2]);
    return 0;
}