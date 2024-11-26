#include<stdio.h>
int main(){
float prices[3];
printf("enter the price of banana:");
scanf("%f",&prices[0]);
printf("enter the price of muli:");
scanf("%f",&prices[1]);
printf("enter the price of kachi:");
scanf("%f",&prices[2]);
printf("banana = %f,muli = %f,kachi = %f",prices[0]*18/100,prices[1]*18/100,prices[2]*18/100);
return 0;
}