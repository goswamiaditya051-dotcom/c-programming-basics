#include<stdio.h>
int main (){

    //float to int and in to float :
    //q1 take integer as input and print half of the number 
    //q2 take float input and print the fractional part  of the number 

    printf("Enter the decimal number : ");

    float x = 5.7;

    scanf("%f",&x);
   

    int y = x;
    
    printf("%d\n",y);

    float z = x - y;
    printf("Your fractional part is : \n");

    printf("%f",z);

    return 0;
}