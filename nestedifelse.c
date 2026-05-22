#include<stdio.h>
int main (){

    /*Take posittive input and tell if it is divisibile by 5 and 3 but not divisible by 15 */
    // int x;
    // printf("Enter the value : ");
    // scanf("%d",&x);

    // if (x%5==0||x%3==0)
    // {
    //     if (x%15!=0)
    //     {
    //         printf("This number is divisible by 5 and 3 but not 15  : ");
    //     }
        
    // }
    // else{
    //     printf("This number is divisible by 5 and 3 : ");
    // }

    int x;
    printf("Enter the value of the number : \n");
    scanf("%d",&x);

    if ((x%3==0||x%5==0) & x%15!=0)
   {
    printf("The number is divisible by 5 or 3 but not 15 : \n");
   }
   else{
    printf("The number is not matching the required condition : \n");
   }
    return 0;
}