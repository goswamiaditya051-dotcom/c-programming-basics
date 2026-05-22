#include<stdio.h>
int main(){

/*print the table of 'n'. Here n is a integer which user will input : */

int x;
printf("Enter the number : ");
scanf("%d",&x);

for (int i = x; i <=x*10; i=x+i)
{
    printf(" %d \n",i);
}


    return 0;
}