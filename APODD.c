#include<stdio.h>
int main(){

/*print the table of 'n'. Here n is a integer which user will input : */

int n;
printf("Enter the number : ");
scanf("%d",&n);

for (int i = n; i <=n*10; i=i+n)
{
    printf(" %d ",i);
}


    return 0;
}