#include<stdio.h>
 int main (){
    int marks;
    printf("enter a marks:");
    scanf("%d",&marks);
    if(marks<30&&marks>0){
        printf("grade will be c");
    }
    else if(marks>=30&&marks<70){
        printf("grade will be B");
    }
    else if (marks>=70&&marks<90){
        printf("grade will be A");
    }
    else if (marks>=90&&marks<=100){
        printf("grade will be A+");
    }
    else{
        printf("nothing");
    }
    return 0;
 }