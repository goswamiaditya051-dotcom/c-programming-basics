#include<stdio.h>
int main(){

    
    /*Write a C program that takes an integer input from the user and checks:

If the number is positive, negative, or zero.

If the number is even or odd (only if it’s not zero).*/

int x;
printf("Enter the number : ");
scanf("%d",&x);

if (x>0&&x%2==0)
{
    printf("The given number is a positive number and it is a even number :  ");
}
else if (x<0&&x%2!=0)
{
    printf("The given number is a negative number and it is a odd number : ");
}
else if (x==0)
{
    printf("it is equal to 0 and 0 is neither a even nor a odd number : ");
}








    return 0;
}