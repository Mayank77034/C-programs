#include<stdio.h>
int main (){
    int x ,y ,z , formula;
    printf("enter a value of x y z:");
    scanf("%d%d%d",&x,&y,&z);
    formula = ((x<y)&&(x<z))||((y<x)&&(y<z))||((z<x)&&(z<y));
    printf("smallest no.is %d",formula);
    return 0;
}