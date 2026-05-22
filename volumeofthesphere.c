#include<stdio.h>
int main (){

    /*Aim : To calculate volume of the sphere  */

    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius); // Taking input of radius //

    float pi = 3.1415;
    float volume = 4*(pi*radius*radius*radius)/3;

    printf("The volume of the sphere will be : %f",volume);
    return 0;
}