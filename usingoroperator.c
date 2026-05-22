#include<stdio.h>
int main (){
    /*write a program to show that wheather the number is divisible by 5 and 3 using operator  */
    int x;
    printf("Enter the digit : ");
    scanf("%d",& x);
    if (x%5==0 || x%3==0)
    {
        printf("The given number is divisbile by 5 or 3  : ");
    }
    else{
        printf("The given number is not divisbile by 5 or 3 : ");
    }
    
    return 0;
}