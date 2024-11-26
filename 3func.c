#include<stdio.h>
void areaofsquare(int side);
void areaofcircle(float radius);
void areaofrectangle(float b,float h);
int main (){
    int side;
    printf("enter a value of s:");
    scanf("%d",&side);
    float radius;
    printf("enter a value of radius:");
    scanf("%f",&radius);
    float b,h;
    printf("enter a value of b and h");
    scanf("%f%f",&b,&h);
    areaofsquare(side);
    areaofcircle(radius);
    areaofrectangle(b,h);
}
void areaofsquare(int side){
    printf("area of square is %d\n",side*side);
}
void areaofcircle(float radius){
    printf("area of circle is:%f\n",3.14*radius*radius);
}
void areaofrectangle(float b,float h){
    printf("area of rectangle is:%f\n",0.5*(b*h));
}


