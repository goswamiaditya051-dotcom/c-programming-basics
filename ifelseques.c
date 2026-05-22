#include<stdio.h>
int main (){

    /*AIM : Take 3 positive integers input and print the gratest of them by using nested if else  */
    int x,y,z;
    printf("Enter the value of the x : ");
    scanf("%d",&x);

    
    printf("Enter the value of the y : ");
    scanf("%d",&y);

    
    printf("Enter the value of the z : ");
    scanf("%d",&z);

    if (x>y)
    {
        if (x>z)
        {
            
        }
        printf("x is > than y and z");
    }
    if (y>x)
    {
        if (y>z)
        {
           
        }
        printf("y is > than x and z \n");
        
    }
    if (z>x)
    {
        /* code */if (z>y)
        {
            /* code */
        }
        printf("z is greater then x : ");
    }
    

    return 0;
}