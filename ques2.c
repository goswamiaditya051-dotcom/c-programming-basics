#include<stdio.h>
int main(){

/*AIM : Take positive integer input and tell if it is divisible by 5 and 3  */

int x;
printf("Enter the value of the number : ");
scanf("%d",&x);

if (x%3==0&&x%5==0)
{
    printf("The given number is divisible by 3 and 5 : ");
}


else if (x%3==0)
{
    printf("the given number is only divisible by 3 : ");
}
else if (x%5==0)
{
    printf("The give number is only divisble by 5 : ");
}



    return 0;
}