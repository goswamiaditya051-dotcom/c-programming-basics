#include<stdio.h>
int main (){

 /*if the ages of ram , shayam ,and ajay are input through the keyboard 
    write a program to determine the youngest of the three */

    int x;
    printf("Enter the age of ram : ");
    scanf("%d",&x);

    int y;
    printf("Enter the age of shyam : ");
    scanf("%d",&y);

    int z;
    printf("Enter the age of ajay : ");
    scanf("%d",&z);

    if (x<y&&x<z)
    {
        printf("Ram is younger than ajay and shyam :\n");
    }
    else
    printf("Ram is not younger than ajay and shyam : \n");
    if (y<x&&y<z)
    {
        printf("shyam is younger than ajay and ram : \n");
    }
    else
    printf("shyam is not younger than ajay and ram : \n");

    if (z<y&&z<x)
    {
        printf("ajay is younger than shyam and ram : \n");
    }
    else
   printf("ajay is not younger than ram and shyam \n");
    

    return 0;
}