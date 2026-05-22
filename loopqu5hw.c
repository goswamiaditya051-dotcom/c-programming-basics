#include<stdio.h>
int main(){

/*AIM: print the table of n here n is a integer which user will input */
// practice this code around 10 times 

int x;
printf("Enter the value : ");
scanf("%d",&x);

for (int i = x; i <= x*10; i=i+x)
{
    printf(" %d \n \n",i);
}


    return 0;
}