#include<stdio.h>
int main (){

int x = 3,y,z; // hamne ek dabbe ke andr 3 value store kar di and do variables ko decalre kr diya ->->-> (y and z )
y = x = 10; // phr hamne y ki value ko 10 kr diya kyuki vo x ke equal hai and x 10 ke equal hai 
z = x < 10; // z -> 0 // ab yaha pe ye condition false ho jaygi because (x < 10) ye condition invalid hai 
// cuz 10 10 se bada kaise hi hoga tho ye (false mtlb ke 0 ho jyga ) 

printf("\nx=%d y=%d z=%d",x,y,z); 
    return 0;
}