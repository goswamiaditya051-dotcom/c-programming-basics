#include<stdio.h>
int main (){

    // question* { impo one } 
    //take 3 positive integers and print thr greatest of them //

    /*int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int y;
    printf("enter the value of the y : ");
    scanf("%d",&y);
    int z;
    printf("enter the value of the z : ");
    scanf("%d",&z);
    if (x>y)
    {
        printf("x is greater than y and z\n");
    }
    if (y>x)
    {
         printf("y is greater than x and z\n");
    }
    if (z>y)
    {
        printf("z is greater than x and y\n");
    }*/

    
//my approach without watching explanation which is kind of right //

int x;
printf("Enter the value of x : ");
scanf("%d",&x);
int y;
printf("Enter the value of y : ");
scanf("%d",&y);
int z;
printf("Enter the value of z : ");
scanf("%d",&z);

// declared all the variables on the above code now proceeding to logical part//

if (x>y && y>z && z>x)
{
    printf("x>y and x>z ( so x is greatest ) : %d ",x);
}
else {
    printf("y>z and y>x ( so y is greatest ): %d",y);
}
if (z>y && z>x)
{
   printf("y<z and z>x ( so z is greatest ): %d ",z); 
}





return 0;
}