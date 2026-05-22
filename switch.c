#include<stdio.h>
int main (){

int x;
printf("Enter the value of x :");
scanf("%d",&x);

switch(x){

case 2:
printf("2 is here : ");
break;
case 3:
printf("3 is here : ");
break;

default:
printf("nothing matched ");

}

    return 0;
}