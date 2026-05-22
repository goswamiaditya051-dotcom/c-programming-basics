#include<stdio.h>
int main (){
// AIM : to calculate the area of the circle 

float x;
printf("enter the value of the radius :  ");
scanf("%f",&x);
float pi = 3.1415;

float area = pi*x*x;
printf("The radius of the circle will be %f: ",area); 

    return 0;
}