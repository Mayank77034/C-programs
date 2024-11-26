#include<stdio.h>
void namaste();
void bonjour();
int main (){
    printf("enter your nationality:");
    char ch;
    scanf("%c",&ch);
    if (ch =='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
} 
void namaste(){
printf("namaste");
}
void bonjour(){
    printf("bonjour");
}
