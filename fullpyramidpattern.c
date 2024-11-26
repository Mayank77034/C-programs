#include<stdio.h>
 int main (){
    int i,j,rows=10;
    for(int i=0;i<rows;i++){
        for(int j=0;j<2*rows-i-1;j++){       /* 2*5-2-1    10-2-1   8-1  7*/
        printf(" ");
    }
    for(int k=0;k<2*i+1;k++){         
        printf("*");
    }
    printf("\n");
    }
    return 0;

 }