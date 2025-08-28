#include<stdio.h>
int main(){
    float a;
    printf("enter your quantity in grams");
    scanf("%f",&a);

    printf("your quantity in kgs %f",a/1000);
    return 0;
}