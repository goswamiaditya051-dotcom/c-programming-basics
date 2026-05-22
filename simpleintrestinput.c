#include<stdio.h>
int main(){

    float  p , r , t;
    printf("the principal value is :");

    p = 55;

    scanf("%f",&p);

    printf("the value of rate is :");

    r = 4.5;

    scanf("%f",&r);

    printf("the value of time is :");

    t = 6;

    scanf("%f",&t);

    float si = (p * r* t)/100;

    printf("the simple intrest will be :%f ", si);

    
  

    return 0;
}