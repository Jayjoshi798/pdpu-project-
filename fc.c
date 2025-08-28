#include<stdio.h>
int main(){
    float a;
    printf("enter the tempin fahrenheit");
    scanf("%f",&a);
    
    float b=a-32;
    printf("your temp in celcius %f",b*5/9);
    return 0;
}