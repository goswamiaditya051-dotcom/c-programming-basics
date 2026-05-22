#include<stdio.h>
int main (){

/*if the ages of ram shyam and ajay are input through the keyboard write a program to 
determine the yougest of the three by using nested list :  */

    int x,y,z;
    printf("Enter the age of ram : ");
    scanf("%d",&x);

    printf("Enter the age of ajay : ");
    scanf("%d",&y);

    printf("Enter the age of shyam : ");
    scanf("%d",&z);
    if (x<y)
    {
        if (x<z)
        {
            printf("Ram is the youngest of them ");
        }
        
    }
    else
    printf("Ram is not the youngest of them : ");
    if (y<x)if (y>x)
    {
        printf("ajay is not the youngest ");
    }
    
    {
        if (y<z)
        {
            printf("Ajay is the youngest of them : ");
        }
    }
    else
        printf("Ajay is not the yongest of them : ");
        if (z<x)
        {
            if (z<y)
            {
                printf("Shyam is youngest of them : ");
            }
            else 
            printf("Shyam is not the youngest of them : ");
        }
        

    return 0;
}