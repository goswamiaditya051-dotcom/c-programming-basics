#include<stdio.h>
int main (){
    
    int x;
    printf("Enter the digit  : ");
    scanf("%d",&x);

    if (x%5==0)
    {
        printf("This number is divisibile by 5 ");
    }
    else{
        printf("This number is not divisbile by 5 : ");
    }



    return 0;
}