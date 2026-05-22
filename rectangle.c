#include<stdio.h>
int main (){

   /*AIM : to find the area of the rectangle : */
   int x;
   printf("Enter the value of the length : ");
   scanf("%d",&x);

   int y;
   printf("Enter the value of the breadth : ");
   scanf("%d",&y);

   int area = x*y;
   printf("The area of the rectangle will be : %d",area);
   return 0;
}