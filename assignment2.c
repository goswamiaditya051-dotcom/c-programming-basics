#include<stdio.h>
int main (){

/* Rajesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic
salary, and house rent allowance is 20% of basic salary. Write a program in C to calculate his
gross salary,*/
int x;
printf("Enter the salary of rajesh : ");
scanf("%d",&x);
int y = 40/100*x;
printf("%d",y);

    return 0;
}