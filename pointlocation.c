#include<stdio.h>
int main (){
// practice this code around 10 times //
int x,y;
printf("Enter the coordinates : \n");
scanf("%d",&x);
scanf("%d",&y);
if (x==0&&y==0)
{printf("The given point is on the origin : ");   

}
else if (x==0)
{
    printf("Lies on y axis : ");
}
else if (y==0){
    printf("Lies on x axis : ");
}
else
{
    printf("The point does not lie on x axix or y axis and it is not origin :  ");
}



    return 0;
}