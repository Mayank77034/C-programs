#include<stdio.h>
int main (){
    printf("%d",3>4 && 5>4);
    return 0;    //both should be true
    /*1    2     OUT
      T    T     T
      T    F     F
      F    T     F  
      F    F     F
       */           
}