#include<stdio.h>
int main (){
    int r,sum=0,temp,num;
    printf("enter a number:");
    scanf("%d",&num);
    for(temp=num;num!=0;num=num/10){
        r=r%10;
        sum=sum+(r*r*r);
    }if(sum==temp){
        printf("no armstrong",temp);
    }
    else{
        printf("no. is not ");
    }
    return 0;
}