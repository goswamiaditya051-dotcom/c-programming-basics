#include<stdio.h>
int main (){
////Write a program to check if a number is positive, negative, or zero using nested if-else//
int x;
printf("Enter the value of the digit : ");
scanf("%d",&x);

if (x>0)
{
    printf("The given number is positive : ");
}
else if (x<0)
{
    printf("The given number is negative : ");
}
else
printf("The give number is equals to zero : ");




    return 0;
}