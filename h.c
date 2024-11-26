#include<stdio.h> 
int square(int side);
float circle(int r);
int rectangle(int l,int b);
int main (){
    int side,s;
    printf("enter a value of side:");
    scanf("%d",&side);
    s=square(side);
    printf("area of square is %d",s);


    float r,c;
    printf("enter a value of r:");
    scanf("%f",&r);
    c=circle(r);
    printf("area of circle is %f",c);


    int l,b,j;
    printf("enter a value of l and b:");
    scanf("%d%d",&l,&b);
    j=rectangle(l,b);
    printf("area of rectangle is %d",j);
    return 0;
}
int square(int side){
    return side*side;
}
float circle(int r){
    return 3.14*r*r;
}
int rectangle(int l,int b){
    return l*b;
}