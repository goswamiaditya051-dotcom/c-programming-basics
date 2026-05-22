#include<stdio.h>
int main (){

    // AIM to calculate simple intrest 

    printf("Enter the principal value : ");

    float principal = 855;
    scanf("%f",&principal);
    printf("Enter the Time value : ");
    float Time = 5 ;
    scanf("%f",&Time);
    float rate = 2.5;

    float simple_intrest = principal * Time * rate; // formula of the simple intrest 

    printf("The simple intrest will be : %f",simple_intrest);




    return 0;
}