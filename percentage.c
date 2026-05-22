#include<stdio.h>
int main(){

    /*AIM : To calculate the overall percentage */

    float x;
    printf("Enter the marks : ");
    scanf("%f",&x);

    float percentage = (x)/500*100;

    printf("The overall percentage will be : %f",percentage);


    return 0;
}