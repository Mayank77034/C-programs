#include<stdio.h> 
void printnamaste();
void printbonjour();
int main (){
    char ch;
    printf("enter a identity:");
    scanf("%c",&ch);
    if(ch =='i'){
        printnamaste();
    }
    else{
        printbonjour();
    }


return 0;
}
void printnamaste(){
    printf("namaste");
}
void printbonjour(){
    printf("bonjour");
}
