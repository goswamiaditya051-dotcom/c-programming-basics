#include<stdio.h>
int main (){
    
    int CP;
    printf("Enter the value of CP : ");
    scanf("%d",&CP);
    int SP;
    printf("Enter the value od SP : ");
    scanf("%d",&SP);

    if (SP>CP)
    {
        printf("Profit accuired");
    }
    
    if (CP>SP)
    {
        printf("Loss accuired");
    }
    if (SP==CP)
    {
        printf("No profit and no loss accuired");
    }
    


    return 0;
}