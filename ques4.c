#include<stdio.h>
int main (){

/*take 3 positive integers input and print the greatest of them */
int x;
printf("Enter the value : ");
scanf("%d",&x);

int y;
printf("Enter the value : ");
scanf("%d",&y);

int z;
printf("Enter the value : ");
scanf("%d",&z);

if (x>y&&x>z)
{
    printf("X is > than y and z");
}
if (y>x&&y>z)
{
    printf("Y is > x and z");
}
if (z>x&&z>y)
{
    printf("Z is > y and x");
}


    return 0;
}