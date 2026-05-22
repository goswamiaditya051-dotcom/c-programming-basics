#include<stdio.h>
int main (){

    /*QUESTION : Given three points (x1,y1),(x2,y2),and (x3,y3) write a program to check 
    if all the three points fall on one straight line  */

    int x1,x2,y1,y2,x3,y3;
    printf("Enter the value of x1 : \n");
    scanf("%d",&x1);

    printf("Enter the value of y1 : \n");
    scanf("%d",&y1);

    printf("Enter the value of x2 : \n");
    scanf("%d",&x2);

    printf("Enter the value of y2 : \n");
    scanf("%d",&y2);

    printf("Enter the value of x3 : \n");
    scanf("%d",&x3);

    printf("Enter the value of y3 : \n");
    scanf("%d",&y3);

    int m1 = (y2-y1)/(x2-x1);
    
    int m2 = (y3-y2)/(x3-x2);

    if(m1==m2)
    printf("All three points lie on the straight line : ");

    return 0;
}