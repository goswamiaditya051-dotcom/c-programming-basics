#include<stdio.h>
int main (){

    // aim : volume of the sphere 
    
    printf("Enter the radius of the circle ");

    float radius = 5;

    scanf("%f",&radius);

    float pi = 3.1415;
    float volume = (4*pi*radius*radius)/3;

    printf("The volume of the spere%f",volume);


    return 0;
}