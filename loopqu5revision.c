#include<stdio.h>
int main(){

    int x;
    printf("Enter the number : ");
    scanf("%d",&x);

    for (int i = x; i <=x*10; i=x+i)
    {
        printf("%d \n \n ",i);
    }
    


    return 0;
}