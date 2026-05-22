#include<stdio.h>
int main (){
    // take positive integer input and tell that it isdivisible by 5 or 3  //
    int x;
    printf("Enter the positive number : ");
    scanf("%d",&x);
    if (x%5==0&&x%3==0)
    {
        printf("The given number is divisible by 5 and 3 : ");
    }
    else{
        printf("The given number is not divisible by 5 and 3 :");
    }
    // practice this problem 7 times //

    return 0;
}