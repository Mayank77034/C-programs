#include<stdio.h>
int main (){
    int x ,y, z,average;
    printf("enter a value of x y z:");
    scanf("%d%d%d",&x,&y,&z);
    average =(x+y+z)/3;
    printf("average of three no. is %d",average);
    return 0;
}