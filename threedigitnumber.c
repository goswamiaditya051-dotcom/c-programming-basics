#include<stdio.h>
int main (){

    
    //take positive integer input and tell if it is a three digit number  //
    int x;
    printf("Enter the value of the number : ");
    scanf("%d",&x);
    
    if (x>99&&x<1000) // && ek operator hai jo ek baar mei do values ko dekhne mei use atta hai //
    {
        printf("This number is a three digit number : ");
        
    }
    else{
        printf("This number is not a three digit number : ");

    }


    return 0;
}