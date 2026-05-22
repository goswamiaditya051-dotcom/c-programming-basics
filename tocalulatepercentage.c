#include<stdio.h>
int main (){

 // aim : to calculate the percentage //

 float Total_marks;
 printf("Enter the total marks : ");
 scanf("%f",&Total_marks);

 float percentage = (Total_marks)*100/500;
 printf("The overall percentage will be : %f",percentage);

    return 0;
}