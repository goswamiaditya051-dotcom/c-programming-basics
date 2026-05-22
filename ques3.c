#include<stdio.h>
int main(){

    /*take positive integer input and tell if it is divisbile by 5 and 3 */

    int x;
    printf("Enter the value of the integer : ");
    scanf("%d",&x);

    if (x%3==0&&x%5==0)
    {
        printf("The given number is divisbile by both 5 and 3 : ");
    }
    else if (x%3==0)
    {
        printf("The given number is only divisble by 3 : ");
    }
    else if (x%5==0)
    {
        printf("The given number is only divisbile by 5 : ");
    }
    



    return 0;
}