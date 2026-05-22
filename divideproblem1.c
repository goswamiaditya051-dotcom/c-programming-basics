#include<stdio.h>
int main(){

int a,b ;
printf("enter value of a (a > b :)");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
int remainder = a % b ;
printf("Remainder when%dis divided by %d is : %dn",a,b,remainder);


    return 0;
}
