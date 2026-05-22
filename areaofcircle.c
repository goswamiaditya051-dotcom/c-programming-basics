#include<stdio.h>
int main (){
    
    // Aim to calculate the area of the circle 

    printf("Enter the radius of the circle : ");

    float radius = 5;
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius ;

    printf("The area of the circle will be : %f",area);


    return 0;
}