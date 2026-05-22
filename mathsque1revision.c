#include<stdio.h>
int main (){

 /*QUESTION : Given three points (x1,y1),(x2,y2),and (x3,y3) write a program to check 
    if all the three points fall on one straight line  */
int x1;
printf("Enter the value of x1 : ");
scanf("%d",&x1);

int y1;
printf("Enter the value of y1 : ");
scanf("%d",&y1);


int x2;
printf("Enter the value of x1 : ");
scanf("%d",&x2);

int y2;
printf("Enter the value of y1 : ");
scanf("%d",&y2);

int x3;
printf("Enter the value of x3 : ");
scanf("%d",&x3);

int y3;
printf("Enter the value of y3 : ");
scanf("%d",&y3);

int m1 = (y2-y1)/(x2-x1);
int m2 = (y3-y2)/(x3-x2);

if (m1==m2)
{
    printf("All three points lie on the same line : ");
}
else
printf("All three points does not lie on the same line : ");


    return 0;
}// practice this code around 10 times //