#include<stdio.h>
int main(){
    float l,b;
    printf("enter the value of length l =");
    scanf("%f",&l);

    printf("enter the value of width b =");
    scanf("%f",&b);

    float a=l+b;

    printf("area of rectangle is=%f \n",l*b);
     printf("perimeter of rectangle is=%f",a*2);
    
    return 0;
}