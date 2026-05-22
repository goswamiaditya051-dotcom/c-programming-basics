#include<stdio.h>
int main (){

    printf("Enter the value of CP : ");

    float CP; 
    scanf("%f",&CP);
     printf("Enter the value of SP : ");
    float SP;
    
    scanf("%f",&SP);




    if (SP>CP)
    {
        printf("Profit is incurred : ");
    }
    if (CP>SP)
    {
        printf("Loss is incurred : ");
    }
    if (SP==CP)
    {
        printf("no profit or loss occured : ");
    }
    

    return 0;
    
}