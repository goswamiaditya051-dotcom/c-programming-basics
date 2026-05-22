#include<stdio.h>
int main(){

/*take positive integer input and tell if it is a three digit number */

int x;
printf("Enter the value of the number : ");
scanf("%d",&x);

if (x>99&&x<1000)
{
    printf("The given number is three digit number : ");
}
else
printf("The given number is not a three digit number : ");



    return 0;
}